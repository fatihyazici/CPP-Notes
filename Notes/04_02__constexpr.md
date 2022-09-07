## NOTES

```c++
constexpr int x = 99;
```


**1)** Let's remember ```const``` keyword.

* Can't default init.

```c++
const int x; // SYNTAX ERROR
```

* These 2 usages are Legal.

```c++
int foo();

int main()
{

  const int x = 10;
  const int y = foo();

}
```

---

**2)** If we use ```constexpr``` we must set with constant value. (in ```const```, we can use also variable value. See **Num.1**)

```c++
constexpr int x = foo(); // SYNTAX ERROR

constexpr int a = 10; // LEGAL
constexpr int b = a * 5; // LEGAL
constexpr int c = a + b + 5;  // LEGAL

```

---

**3)** ```constexpr``` is not data type. ```const``` is data type.

---

**4)** If constexpr functions arguments are **constant exprs**, function return value calculates in **COMPILE TIME !**

```c++
constexpr int sum_square(int a, int b)
{
  return a * a + b * b;
}

int main()
{
  constexpr int a = sum_square(10, 20);
}

```

```c++
constexpr int factorial(int n)
{
  return n > 1 ? n * factorial(n-1) : 1;
}

int main()
{
  auto constexpr a = factorial(5);
}

```

```c++
constexpr int x = 5;
const int y = 2;

sum_square(factorial(x-2), factorial(y+3)); // it calculates in COMPILE TIME
```


---

**5)** If constexpr functions arguments are **not constant exprs**, function return value can calculates in **RUN TIME !**

---

**6)** constexpr functions mostly define in **header file**. Because they are implicitly inline.
```c++
//abc.h

constexpr int factorial(int n)
{
  return n > 1 ? n * factorial(n-1) : 1;
}

constexpr int sum_square(int a, int b)
{
  return a * a + b * b;
}

```

---

```
start(04-00:40:50)
end  (04-01:30:00)
```

