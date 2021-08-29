#include <iostream>
#include <map>
#include <set>
//#include <pair>
#include <typeinfo>

using namespace std;


typedef struct stateTrans {

    char state;
    char transition;

}state;

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


typedef map<pair<char, char>, char> Map_Type;

Map_Type delta2 = {



//p<char, int> delta2 = {

//cout << typeid(pair<char, char> q1).name() << endl;
//map<pair<char, char>,  char> delta2 = { 

 /*   
    {'h', 'a'},
    {'e', 'b'},
    {'l', 'c'},
    {'l', 'd'},
    {'o', 'e'},
*/


    //pair<char, char> PAIR1;
    
     
    //p = make_pair('h', 'a'); 
    
    //{q1, 'a'},
    
    //lta2.insert(std::make_pair(std::make_pair('e', 'd'), 'b')),
    //{{'l', 'd'}, 'c'},
    

};





bool accept(string w){

    char q;

    for(char a: w){
       //cout << a << ' ';
       
	//cout << delta2[a] << ' ';

        }

    cout << '\n';

 return true;

}





int main(){

    set<char> Q = {'o','c'};

    set<char> sigma = {'f','r','b','n'};

    set<char> F = {'o'};

    char x = 'y';


    pair<char, char> q0 = {'c', 'f'};

    cout << q0.first << ' ' << q0.second << endl;

    cout << delta[q0] << '\n';
    

    
    // cout << typeid(F).name() << '\n';

    accept("hello"); 
    
    




return 0;
}
