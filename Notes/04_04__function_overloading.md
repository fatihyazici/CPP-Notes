## NOTES

_function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters._

---

**1)** ```static binding``` and ```dynamic binding``` 

* **static binding** is also called _early binding_ because it happens during compilation whereas
* **dynamic binding** is called _late binding_ because it happens during runtime.

_function overloading is static binding._

---

**2)** function overload resolution

* functions with the same name must be in the same scope. (look **3** for scopes)
* functions with the same name in the same scope must have **different _signature_**.
    - signature: ```int func(int, int);```
      - it has 2 parameters. count of parameters are involved in the signature.
      - parameters types are involved in the signature.
      - _return type is not involved in the signature_

```c++
 
```
---

**2)** C and C++ Scopes

```C```
  * file scope
  * block scope
  * function prototype scope
  * function scope

```C++```
  * namespace scope
  * block scope
  * function prototype scope
  * function scope
  * class scope


---
 
```
start(04-02:35:20)
end  (04-02:58:00) CONTINUE!!
```
