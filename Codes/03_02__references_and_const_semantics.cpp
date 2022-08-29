/*
That note is written on CSPD-CPP-Lesson3

Subjects : References and Const Semantics

Author  : Fatih Y.

*/


#include <iostream>

using namespace std;


int& foo()
{
    int x{};

    std::cout << "enter int: ";
    std::cin >> x;

    return x; // x is local value , must be 'static' or 'global' if we want return x

}


int main()
{

    foo() = 5; //warning: reference to local variable 'x' returned [-Wreturn-local-addr]


}



/*
#### REFERENCES and CONST SEMANTICS ####

NOTE1: Don't use 'const keyword' after reference decl. (Because it has not any effect and references are already Top Level Consts) 

    int& const r1 = x; //const is not useful 
    
    const int& r2 = x; //it is CONST REFERENCE
    r2 = 4; //syntax error, bc r2 is const ref and only readable

-----------------------------------------------------------------------------

NOTE2: Low Level and Top Level Consts

    int* const p; // const pointer to int & Top Level Const
    const int* p; // pointer to const int & Low Level Const

-----------------------------------------------------------------------------


*/