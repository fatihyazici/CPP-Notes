## NOTES

**1)**

```c++

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

```

---
    
**2)** Don't use 'const keyword' after reference decl. (Because it has not any effect and references are already Top Level Consts) 

```c++

int& const r1 = x; //const is not useful 

const int& r2 = x; //it is CONST REFERENCE
r2 = 4; //syntax error, bc r2 is const ref and only readable

```

---

**3)** Low Level and Top Level Consts

```c++

int* const p; // const pointer to int & Top Level Const
const int* p; // pointer to const int & Low Level Const

```

---

**4)** Const type convertion  (T for type)


* T x ===> const T x; // LEGAL
* const T x ===> T x; // ILLEGAL

```c++

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

```

---

**5)** We can not bind R-Value expr to L-value reference but we CAN bind R-Value expr to 'const' L-value reference. 

```c++

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

```

---

**6)** You can use const refs with R value, like this ===>  const int& ref1 = 13;


```c++

void func(const int&)
{

}

int main()
{
    func(13);
}

```

---

**7)** why we are using 'uniform init'?
* Uniform. You can use anywhere
* Narrowing Convertion is Syntax Error
* most vexing parse [Read 'INFOS' for information]

---

**8)**

* T &r  = expr; //L-Val Expr
* T &&r = expr; //R-Val Expr

