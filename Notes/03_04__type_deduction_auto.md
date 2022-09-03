## NOTES

**1)** 'auto' type deduction (this auto different from C)
    - It uses for static data type deduction.

---

**2)** auto type variables can not default init.

```c++

auto x; // SYNTAX ERROR

double dval{};
auto x = dval; //LEGAL, x's type is double

```

---

**3)** AAA: Almost Always Auto . Always use auto when you declare variable

---

**4)** 

```c++

auto x = expr;
    -> const int x = 10;    //(int x = 10)
    -> auto y = x;          //y's type is 'int' , not 'const int' (int y = x)

auto& x = expr;
    -> int x = 10;
    -> auto& r = x;         //r's type is 'int' ( int r = x)
    -> const auto& r = x;   //r's type is 'int' ( int r = x)

```

---

**5)**

```c++

int a[3] = {1, 2, 3};
auto b = a; //b's type is int* (int *b = a)

```

---

**6)** To see type of data, use this and see compiler message for syntax error


```c++

#include <iostream>
template<typename T>
class TypeTeller;

int main()
{
    int a = 10;
    auto b = a;
    
    TypeTeller<decltype(b)> x;

}
```

---

**7)** 

```c++

auto x = "fatih";
//const char* x = "fatih";

auto& y = "fatih";
//const char(&z)[6] = "fatih";

```

---

**8)** ```auto&& x = expr;``` (Forwarding Reference - Universal Reference)

* If first init value is PR value, this auto type is directly first init type's data type.

```c++

auto&& x = 10; //int x = 10;

```

* If first init value is L value, this auto type is &&. (there is **'reference collapsing'**. See **INFOS** for more information)

```c++

int y = 10;
auto&& x = y; //int&& &x = y; --->  int& x = y; //bc of reference collapsing.

```

---

**8)** Compare all of auto types.

```c++

int x = 10;

auto   r1 = x;  // int 
auto&  r2 = x;  // int&
auto&& r3 = x;  // int&  (See: reference collapsing)
auto&& r4 = 10; // int&& (See: reference collapsing)

```
