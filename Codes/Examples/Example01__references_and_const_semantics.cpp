#include <iostream>

using namespace std;


int& foo();
int  func();



int main()
{
    //int &r1 = foo();          //LEGAL
    //int &r2 = func();         //ILLEGAL
    //const int &r3 = foo();    //LEGAL
    //const int &r4 = func();   //LEGAL
    //int &&r5 = foo();         //ILLEGAL
    //int &&r6 = func();        //LEGAL
}