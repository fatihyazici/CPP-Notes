## NOTES

```c++
decltype(expr)
```

**1)** decltype usage with **name-format** gives directly type of value

```c++

decltype(x)
decltype(mydata.a)
decltype(ptr->mx)

```

---

**2)** If expression has not **name-format**, we must look expresssion's value category. 
* If expression is L value, our type is T&
* If expression is PR value, our type is T
* If expression is X value, our type is T&&

```c++

int x{};

int *ptr = &x;

decltype(*ptr) a; //it is int& bc *ptr is L value expr

/*-------------*/

decltype(x) y{}; // y's type int bc is name-format
decltype((y)) z = y; //z's type int& 

```

---

**3)** decltypes are **unevaluated contexts**. (like ```sizeof```)

```c++

int main()
{
  
  int x = 10;
  
  decltype(x++) y = 231;
  
  std::cout << "x: " << x << "\n"; //prints x: 10 , (not 11)
  
}

```

---


