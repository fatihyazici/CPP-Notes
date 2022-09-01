_That note is written on CSPD-CPP-Lesson3_

___Subjects__ : Type Deduction_

___Author__  : Fatih Y._

-----------

```c++

#include <iostream>

using namespace std;

int main()
{

}
```
-----------

## NOTES

__NOTE1:__ 'auto' type deduction (this auto different from C)
    - It uses for static data type deduction.

-----------------------------------------------------------------------------

__NOTE2:__ auto type variables can not default init.

```c++

auto x; // SYNTAX ERROR

double dval{};
auto x = dval; //LEGAL, x's type is double

```

-----------------------------------------------------------------------------

__NOTE3:__ AAA: Almost Always Auto . Always use auto when you declare variable

-----------------------------------------------------------------------------

__NOTE4:__

```c++

    auto x = expr;
        -> const int x = 10;    //(int x = 10)
        -> auto y = x;          //y's type is 'int' , not 'const int' (int y = x)

    auto& x = expr;
        -> int x = 10;
        -> auto& r = x;         //r's type is 'int' ( int r = x)
        -> const auto& r = x;   //r's type is 'int' ( int r = x)

```

-----------------------------------------------------------------------------

__NOTE5:__

```c++

int a[3] = {1, 2, 3};
auto b = a; //b's type is int* (int *b = a)

```

-----------------------------------------------------------------------------

__NOTE6:__ To see type of data, use this and see compiler message for syntax error


```c++

#include <iostream>
template<typename T>
class TypeTeller;

TypeTeller<decltype(b)>

```

-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
