/*
That note is written on CSPD-CPP-Lesson3

Subjects : References and Pointers

Author  : Fatih Y.

*/


#include <iostream>

using namespace std;


int main()
{
    int *ptr = nullptr; // null pointer

}



/*
#### COMPARE REFERENCES and POINTERS ####

NOTE1: references can not default initialize.

    int* ptr; // LEGAL
    int& ref; // ILLEGAL

-----------------------------------------------------------------------------

NOTE2: 
    pointer to pointer // LEGAL
    reference to reference // ILLEGAL


    //POINTER TO POINTER
    int x = 10;
    int y = 23;

    int* p = &x;
    int* q = &y;


    int** ptr = &p; // 'ptr' is pointer to pointer

-----------------------------------------------------------------------------

NOTE3: 
    int*ptr[5]; // pointer array

    int& ref[5] = {a, b, c, ...}; // ILLEGAL

-----------------------------------------------------------------------------

NOTE4: references already TOP LEVEL CONST, pointers can be CONST

-----------------------------------------------------------------------------

NOTE5: NULL and nullptr usage in C and C++

    in C ===> ptr = NULL;
    in C ===> ptr = 0;

    in Before Modern C++ ===> ptr = 0;
    in After  Modern C++ ===> ptr = nullptr;


    -- there is 'null pointer' but there is not 'null reference'

-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
*/



