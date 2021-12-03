#include <iostream>
#include <map>
#include <set>
#include <vector>


using namespace std;

map<pair<int,int>,int> delta = {

    {{1,0}, 1},
    {{1,1}, 2},
    {{2,1}, 2},
    {{2,0}, 1}


};


bool accept(vector<int> w, int q0){

    set<int> F = {2};

    for(int a : w)
    {
        pair<int, int> q = {q0, a};
	
	cout << delta[q] << '\n';

	q0 = delta[q];
        
        };


     if(F.find(q0) != F.end())
     {
         cout << "Accepted" << '\n';
         return true;
     
         }

    
    else{
     
         cout << "Rejected" << '\n';
	 return false;
     }

};


int main(){


    vector<int> w = {1,0,1,1,0,1,1};

    accept(w,1);
	

return 0;
}
