#include <iostream>
#include <map>
#include <set>

using namespace std;


map<pair<char, char>, char> delta = {

//start state
{{'c', 'n'}, 'c'},

//Trasistion states
{{'c','f'}, 'o'},
{{'o', 'n'}, 'c'},

//stay closed states
{{'c','r'}, 'c'},
{{'c', 'b'}, 'c'},
                                       

//stay opened stated
{{'o','f'}, 'o'},
{{'o', 'r'}, 'o'},
{{'o', 'b'}, 'o'},


        
};



map<char, char> delta2 = {

    {'h', 'a'},
    {'e', 'b'},
    {'l', 'c'},
    {'l', 'd'},
    {'o', 'e'},


   /*	
    {{'h','d'}, 'a'},
    {{'e', 'd'}, 'b'},
    {{'l', 'd'}, 'c'},
    */

};





bool accept(string w){

    char q;

    for(char a: w){
       //cout << a << ' ';
       
	cout << delta2[a] << ' ';

        }

    cout << '\n';

 return true;

}





int main(){

    set<char> Q = {'o','c'};

    set<char> sigma = {'f','r','b','n'};

    set<char> F = {'o'};



    accept("hello"); 
    
    




return 0;
}
