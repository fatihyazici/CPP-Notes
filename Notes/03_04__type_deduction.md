/*
That note is written on CSPD-CPP-Lesson3

Subjects : Type Deduction

Author  : Fatih Y.

*/

#include <iostream>

using namespace std;

int main()
{

}


/*
#### TYPE DEDUCTION ####

NOTE1: 'auto' type deduction (this auto different from C)
    - It uses for static data type deduction.

-----------------------------------------------------------------------------

NOTE2: auto type variables can not default init.

    auto x; // SYNTAX ERROR

    double dval{};
    auto x = dval; //LEGAL, x's type is double

-----------------------------------------------------------------------------

NOTE3: AAA: Almost Always Auto . Always use auto when you declare variable

-----------------------------------------------------------------------------

NOTE4: 
    auto x = expr;
        -> const int x = 10;    //(int x = 10)
        -> auto y = x;          //y's type is 'int' , not 'const int' (int y = x)

    auto& x = expr;
        -> int x = 10;
        -> auto& r = x;         //r's type is 'int' ( int r = x)
        -> const auto& r = x;   //r's type is 'int' ( int r = x)

-----------------------------------------------------------------------------

NOTE5: 
    int a[3] = {1, 2, 3};
    auto b = a; //b's type is int* (int *b = a)

-----------------------------------------------------------------------------

NOTE6: To see type of data, use this and see compiler message for syntax error

    #include <iostream>
    template<typename T>
    class TypeTeller;

    TypeTeller<decltype(b)>

-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
*/