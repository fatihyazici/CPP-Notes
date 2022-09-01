## NOTES

**1)** references can not default initialize.

```c++

int* ptr; // LEGAL
int& ref; // ILLEGAL

```

---

**2)**

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

---

**3)**

```c++

int*ptr[5]; // pointer array

int& ref[5] = {a, b, c, ...}; // ILLEGAL

```

---

**4)** _references already TOP LEVEL CONST_, pointers can be CONST

---

**5)** NULL and nullptr usage in C and C++

* in C ===> ptr = NULL;
* in C ===> ptr = 0;


- in Before Modern C++ ===> ptr = 0;
- in After  Modern C++ ===> ptr = nullptr;


* there is 'null pointer' but there is not 'null reference'
