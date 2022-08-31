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

    const int& ref1 = 13;
    

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

NOTE3: Const type convertion  (T for type)

        T x ===> const T x; // LEGAL
        const T x ===> T x; // ILLEGAL


        int& foo()
        {
            const static int x = 10;
        
            return x; // ILLEGAL, SYNTAX ERROR
        }

        const int& foo()
        {
            static int x = 10;
        
            return x; // LEGAL, type convertion
        }

-----------------------------------------------------------------------------

NOTE4: We can not bind R-Value expr to L-value reference but we CAN bind R-Value expr to 'const' L-value reference. 

    int x = 10;

    int&r = x+5; //ILLEGAL
    const int&r = x+5; //LEGAL

    ---

    int foo();
    int& func();

    int main()
    {
        int& a = func(); //LEGAL
        int& b = foo(); //ILLEGAL
        const int& c = foo(); //LEGAL

    }

-----------------------------------------------------------------------------

NOTE5: You can use const refs with R value, like this ===>  const int& ref1 = 13;

    void func(const int&)
    {

    }

    int main()
    {
        func(13);
    }

-----------------------------------------------------------------------------

NOTE6: why we are using 'uniform init'?
        1- Uniform. You can use anywhere
        2- Narrowing Convertion is Syntax Error
        3- most vexing parse [Read 'INFOS' for information]

-----------------------------------------------------------------------------

NOTE7: 
    T &r  = expr; //L-Val Expr
    T &&r = expr; //R-Val Expr

-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
*/