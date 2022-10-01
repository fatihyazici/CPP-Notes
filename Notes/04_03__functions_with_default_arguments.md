## NOTES


**1)** argument and parameter

```c++
//these are parameters
void func(int x, int y);

int main()
{
  //these values are arguments
  func(10, 20);
}
```

---


**2)** variadic functions


```c++
void func(int x, int y, ...);
```

---

**3)**  We can call a function with less argument from parameters. These functions have **'default argument'**.

```c++
void func(int x, int y, int z = 10); // z value is a default argument
```

```c++
void func(int x = 30, int y = 20, int z = 10);

int main()
{
  func(); //x = 10, y = 20, z = 30
  func(5); //x = 5, y = 20, z = 30
  func(5, 6); //x = 5, y = 6, z = 30
  func(5, 6 ,7); //x = 5, y = 6, z = 7
}
```

---

**3)**  function redeclaration

```c++
//header.h
void func(int, int, int);

//src.cpp

#include "header.h"

void func(int, int, int=10); // function redclaration
```

---



**4)**  function redeclaration is cumulative

```c++
//header.h
void func(int, int, int = 20);

//src.cpp

#include "header.h"

void func(int, int = 5, int); // function redclaration
```

* In this scenario: ```void func(int, int = 5, int = 20);```

---

**5)**  maximum munch rule

```c++
int x = 10;
int y = 20;
int z = x+++y;

// z = 30, x = 11, y = 20
```

* This is an error bc of this rule

```c++
void func(const char *= "fatih); // it takes *= as an arithmetic operation 
```

```c++
int n = 10;
while(n--> 0) {
}
```

---

**6)**  we can use default argument as a check and control process.

```c++
void process_date(int day, int mon, int year = -1);

void process_date(int day, int mon, int year = -1){
  if( year == -1) {
    ...
  }

}
```

---

```
start(04-01:30:00)
end  (04---:--:--)
```

