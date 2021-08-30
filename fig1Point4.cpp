#include <iostream>
#include <map>
#include <set>
#include <vector>

/*
 *
 *
 * DFA which recognizes the language of all strings with an
 * even number of 0s after the first 1.
 *
 *
 * */

using namespace std;

/*
 *
 * Define the transition function
 *
 *
 * */

map<pair<int, int>, int> delta = {

	
    {{1,0}, 1},
    {{1,1}, 2},
    {{2,1}, 2},
    {{2,0}, 3},
    {{3,0}, 2},
    {{3,1}, 2},  

};

/*
 *
 * Define the function which reads the input and returns
 * 
 * the accept or reject states
 *
 *
 * */

bool accept (vector<int> w, int q0){

   set<int> F = {2};	
	
   for(int a: w){
   
       pair<int, int> q = {q0, a};

       cout << delta[q] << '\n';

       q0 = delta[q];
   
   } 
    

   if(F.find(q0) != F.end()){
       cout << "accepted" << '\n';
       return true;}

   else{
       cout << "rejected" << '\n';	   
       return false;}
}

//implamentation/ calling the functions

int main(){

vector<int> w = {0,0,1,1,0,1,0};

accept(w, 1);

return 0;
}
