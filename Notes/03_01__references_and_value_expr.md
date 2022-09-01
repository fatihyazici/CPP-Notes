## NOTES

**0)** Examples. //TODO: move to Codes/Examples

```c++

#include <iostream>

using namespace std;

//example swap function - call by reference
void ex_swap(int &x1, int &x2)
{
    int temp = x1;
    x1 = x2;
    x2 = temp;
}

int main()
{

    //--- EXAMPLE1
    
    int x = 10;
    int& r = x; //binding

    ++r; //is equal to '++x'

    cout << "x = " << x << "\n"; //prints " x = 11 "


    //--- EXAMPLE2

    int x2 = 23;
    int *ptr2 { &x2 };
    int &r2 { *ptr2 };

    r2 = 35;
    cout << "x2 = " << x2 << '\n'; //prints > x2 = 35


    //--- EXAMPLE3

    int x3  = 21;
    int y3  = 13;
    int* p3 = &x3;
    int*&r3{ p3};

    r3 = &y3;

    ++ *p3;

    cout << "y3 = " << y3 << "\n"; //prints > y3 = 14


    //--- EXAMPLE4

    int x4 = 10;
    int& r4_1 = x;
    int& r4_2 = r4_1;
    int& r4_3 = r4_2;

    ++r4_1;
    ++r4_2;
    ++r4_3;

    cout << "x4 = " << x4 << "\n"; // prints > x4 = 13


    //--- EXAMPLE5 - SWAP Function example with references
    
    int sw_a = 5;
    int sw_b = 15;
    
    cout << "Before SWAP sw_a = " << sw_a << " , sw_b = "<< sw_b <<"\n"; // 
    ex_swap(sw_a, sw_b);
    cout << "After  SWAP sw_a = " << sw_a << " , sw_b = "<< sw_b <<"\n"; //


}

```


---

**1)**

* L-Val Reference : is replaced name of an object    
* R-Val Reference (with Modern C++)
    - Move Semantics
    - Perfect Forwarding

---

**2)** References and Pointers actually are not different.

---

**3)** References can not init default. (Pointers can <null ptr>)

```c++
    
int *ptr; //LEGAL
int &ref; //ILLEGAL

```
---
    
**4)** call-by-reference

```c++

void func(int& r)
{
    ++r; //It changes "x" value because of reference
}

int main()
{
    int x = 5;

    func(x);
}

```

---
    
**5)** why we are using references instead of pointers?

* operator overloading
* useability

---
    
**6)** it returns l-value expr

```c++

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

```

---
    
**7)** references types and object types must be same. Otherwise, syntax error!

```c++

int main()
{
    char c{};
    int &r = c; //syntax error

}

```

---
    
**8)** References as a function return value

```c++

int g{ 24 };

int& func()
{
    ///
    return g;
}


int main()
{
    func() = 20; //LEGAL, func() is L value expr

    int&r = func(); //LEGAL
}

```
