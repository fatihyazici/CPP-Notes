_That note is written on CSPD-CPP-Lesson3_

___Subjects__ : References and Pointers_

___Author__  : Fatih Y._

---

```c++

#include <iostream>

using namespace std;


int main()
{
    int *ptr = nullptr; // null pointer

}

```
---

## NOTES

__NOTE1:__ references can not default initialize.

```c++

int* ptr; // LEGAL
int& ref; // ILLEGAL

```

-----------------------------------------------------------------------------

__NOTE2:__ 

    * pointer to pointer // LEGAL
    * reference to reference // ILLEGAL

```c++

//POINTER TO POINTER
int x = 10;
int y = 23;

int* p = &x;
int* q = &y;


int** ptr = &p; // 'ptr' is pointer to pointer

```

-----------------------------------------------------------------------------

__NOTE3:__

```c++

    int*ptr[5]; // pointer array

    int& ref[5] = {a, b, c, ...}; // ILLEGAL

```

-----------------------------------------------------------------------------

__NOTE4:__ _references already TOP LEVEL CONST_, pointers can be CONST

-----------------------------------------------------------------------------

__NOTE5:__ NULL and nullptr usage in C and C++

    * in C ===> ptr = NULL;
    * in C ===> ptr = 0;

    * in Before Modern C++ ===> ptr = 0;
    * in After  Modern C++ ===> ptr = nullptr;


    - there is 'null pointer' but there is not 'null reference'

-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
