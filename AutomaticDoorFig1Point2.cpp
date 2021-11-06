#include <iostream>
#include <map>
#include <set>
#include <typeinfo>

using namespace std;


/*
 *
 * Define the transition function
 *
 * */
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



/*
 *  There is no literal accept state here as it is modeling
 *
 *  the continuous process of an automatic door but the bool accept
 *
 *  function is being used to create a general standard for how I 
 *
 *  code DFAs 
 *
 * */
bool accept(string w, char q){
 

    for(char a: w){
        
       
        pair<char, char> q0 = {q, a};
       
	cout << "state " << q << " reads " << a << " and transition to " << delta[q0] << '\n';

	q = delta[q0];



        }

    cout << '\n';

 return true;

}





int main(){

    set<char> Q = {'o','c'};

    set<char> sigma = {'f','r','b','n'};

    set<char> F = {'o'};

    

    accept("frbnbrfrnfrnb", 'c'); 
    
    




return 0;
}
