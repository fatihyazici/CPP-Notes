/*
That note is written on CSPD-CPP-Lesson2 & Lesson3

Subjects : References

Author  : Fatih Y.

*/

#include <iostream>

using namespace std;

int main()
{

    //--- EXAMPLE1
    
    int x = 10;
    int& r = x; //binding

    ++r; //is equal to '++x'

    cout << "x : " << x << "\n"; //prints " x : 11 "


    //--- EXAMPLE2

    int x2 = 23;
    int *ptr2 { &x2 };
    int &r2 { *ptr2 };

    r2 = 35;
    cout << "x2: " << x2 << '\n'; //prints > x2: 35


    //--- EXAMPLE3

    int x3  = 21;
    int y3  = 13;
    int* p3 = &x3;
    int*&r3{ p3};

    r3 = &y3;

    ++ *p3;

    cout << "y3 = " << y3 << "\n"; //prints > y3:14


    //--- EXAMPLE4

    int x4 = 10;
    int& r4_1 = x;
    int& r4_2 = r4_1;
    int& r4_3 = r4_2;

    ++r4_1;
    ++r4_2;
    ++r4_3;

    cout << "x4 = " << x4 << "\n"; // prints > x4 = 13

}



/*

NOTE1:
    * L-Val Reference : is replaced name of an object
    * R-Val Reference (with Modern C++)
        - Move Semantics
        - Perfect Forwarding

-----------------------------------------------------------------------------

NOTE2: References and Pointers actually are not different.

-----------------------------------------------------------------------------

NOTE3: References can not init default. (Pointers can <null ptr>)
        int *ptr; //LEGAL
        int &ref; //ILLEGAL

-----------------------------------------------------------------------------

NOTE4: call-by-reference

    void func(int& r)
    {
        ++r; //It changes "x" value because of reference
    }

    int main()
    {
        int x = 5;

        func(x);
    }

-----------------------------------------------------------------------------

NOTE5: why we are using references instead of pointers?
        - operator overloading
        - useability
        
-----------------------------------------------------------------------------

NOTE6: it returns l-value expr

    int g{24};

    int& func()
    {
        return g;
    }

    int main()
    {
        func() = 25;
        ++func();

        int& r = func();
    }

-----------------------------------------------------------------------------


*/