#include <iostream>
#include <map>
#include <set>

using namespace std;

class Dfa001{

    set<int> Q, sigma, F;
    int q0;

  public:
    void defQ(int, int, int);
    void printQ();
};


void Dfa001::defQ(int a, int b, int c){

     Q.insert(a);
     Q.insert(b);
     Q.insert(c);
}

void Dfa001::printQ(){

    int numstates = Q.count(2);	

    std::cout << numstates << '\n';


}


int main(){
    
    Dfa001 myDfa;

    myDfa.printQ();

    myDfa.defQ(1,2,3);

    myDfa.printQ();

    myDfa.defQ(1,1,1);

    myDfa.printQ();

    std::cout << "hello world" << '\n';


return 0;
}
