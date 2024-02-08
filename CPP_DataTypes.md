# C++ Data Types and Naming Conventions

## Primitive Data Types

| Types |  Category    |
|-----:|---------------|
| float | Floating Point        | 
| double |                      |
| long double |                 |
|---------------|---------------|
| bool  | Integral(Boolean)    |
|---------------|---------------|
| char | Integral(Character)    |
| wchar_t |                     |
| char8_t |                     |
| char16_t |                    |
| char32_t |                    |
|---------------|---------------|
| short int |Integral(Integer)  | 2
| int |                         |
| long int |                    |
| long long int |               |
|---------------|---------------|
| std::nullptr_t | Null Pointer |


**Examples**

```
float someFloatNum = 4.45;
double someDoubleNum  = 8.99;
bool someBoolean = true;
char someCharacter = 'D';
int someInteger = 8;
```

## C++ Compound Types

- Functions
- Arrays
- Pointer Types:
  - Pointer to object
  - Pointer to function
- Pointer to Member Types:
  - Pointer to data member
  - Pointer to member function
- Reference Types:
  - L-value references
  - R-value references
- Enumerated Types:
  - Unscoped enumerations
  - Scoped enumerations
- Class Types:
  - Sructs
  - Classes <- (string is actually a class type!)
  - Unions


**Strings:** `std::string` Holds a sequence of characters

You must include the `<string>` type header to use
```
#include <string> // allows use of std::string

int main()
{
    std::string someString = "Hello World!"; 
    return 0;
}
```


**Containers:**  Holds zero or more items if the same data type

3 main types: `std::array`, `std::vector`, and C-style arrays
```
#include <array>  // for std::array
#include <vector> // for std::vector

int main()
{
  std::array<int, 5> a {};  // a std::array of 5 ints

  std::vector<int> primes{ 2, 3, 5, 7 };      
  std::vector vowels { 'a', 'e', 'i', 'o', 'u' };
}
```
```
// C-style array (no include required)
int main()
{
  int testScore[30] {};       
  int numArr[4] = {1, 2, 3, 4};
}
```


**Pointers:** Represents a memory address as its value
```
int x = 5;
int* ptr = &x; // ptr initialized to point to the address of x
std::cout << *ptr << '\n'; // prints the value at the address being pointed to (x's address)
```


**Reference:** References an existing object (variable alias)
```
int x = 2;
int& ref = x; // int& is and lvalue reference to x
std::cout << x << '\n';  // prints the value of x (5)
std::cout << ref << '\n'; // prints the value of x via ref (5)
```
Above, `int&` is an lvalue reference to the integer `x`.
Now `int&` and `x` can be used synonymously.


**Struct:** Holds multiple variables together into a single type
```
struct testScores
{
  int score1 {};
  int score2 {};
  int score3 {};
  // ...
  int score30 {};
}
```


## Naming Conventions

C++ variable names must start with an alphabetic character or an underscore. 
They can contain alphanumeric characters and underscores but not white spaces. 
C++ names are case sensitive and using the `camelCase` naming is the most common convention.
While you can start a name with and underscore, you cannot use two underscores or 
and underscore and a capital letter, as these are reserved by C++. 
Also you cannot use other reserved words by C++ like built-in name types. 

## Converting Between Types

Depending on the situation the compiler may perform a widening or narrowing conversion between types.
```
int x = 5;
double y = 2.2;
int sum1 = x + y;
double sum2 = x + y;

std::cout << sum1 << '\n'; // Prints 7 (With an error message about data loss)
std::cout << sum2 << '\n'; // Prints 7.2

```
But if it is not that simple the compiler with throw either an error that this action
cannot be performed, or a warning that there may be potential data loss. 



## Other Information

C++ is a strongly typed language, meanig you have to declare the type of each variable you use.
The reason for this is that the compiler needs to know how much memory to allocate for the variable, 
and it can determine that by the variable type.

C++ is also statically typed, meaning the variable types are fixed at compilation time.

## Sources:
[1] Beginning C++ Programming by Richard Grimes

[2] cplusplus.com

[3] learncpp.com
