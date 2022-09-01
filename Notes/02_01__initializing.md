
_That note is written on CSPD-CPP-Lesson2_

___Subjects__ : Initializers, Value Categories_

___Author__  : Fatih Y._



-------
```c++

#include <iostream>

using namespace std;

int main()
{
    int ival = 5; //copy init

    char ch = 'c'; //direct init

    double dval{}; //value init

    float fval{3.14}; //direct list init;


    cout << ival << '\n';
    cout << ch << '\n';
    cout << dval << '\n';
    cout << fval << '\n';

}
```
------


## NOTES

__NOTE0:__ initalizes in CPP

* T x = expr;   //copy init
* T x(expr);    //direct init
* T x{};        //value init
* T x{expr};    //direct list init

-----------------------------------------------------------------------------

__NOTE1:__ Designated initalizers added C in C99, added CPP in CPP20

You can give init value of arrays spesific elements, other ones get 0 values 

ex: 
* int a[7] = {1, 0, 0, 2, 0, 8, 0};
* int a[] = {[0]=1, [3]=2, [5]=8};

These 2 arrays are equal!

-----------------------------------------------------------------------------

__NOTE2:__ in CPP, main func return value must be "int", otherwise syntax error

-----------------------------------------------------------------------------

_QUESTION1: Is legal or illegal?_

```c++

int main()
{
    const int *ptr;     //LEGAL

    int * const ptr;    //ILLEGAL

    char* name = "fatih"; //ILLEGAL
}
```
-----------------------------------------------------------------------------

__NOTE3:__ every 'expression' has DATA TYPE (int, double, float, char, bool...)

-----------------------------------------------------------------------------

__NOTE4:__ value categories in CPP

* L value (expr) > Left Val
* PR value(expr) > Pure R Val
* X value (expr) > Expiring Val


* L-Val  U X-Val = GL Value (generalize)
* PR-Val U X-Val = R  Value 

-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
