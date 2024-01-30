# C++ Data Types and Naming Conventions

## Primitive Data Types

Integer

Float

Double

Boolean

Charaters

String

### Examples

```
int someInteger = 8;
float someFloatNum = 4.45;
double someDoubleNum  = 8.99;
bool someBoolean = true;
char someCharacter = 'D';
string = someString = "Hello World!";
```

## Other C++ Types

Array: Zero or more items if the same data type
```
int numArr[4] = {1, 2, 3, 4};
```

Pointer: Represents a memory address 
```
string name = "Anna";
string *ptr = &name;
```

Reference: References a variable name as an alias
```
int x = 2, int y = 3;
int& rx = x;
rx = y;
```

Structure (instance)

Class object(instance)

## Naming Conventions

C++ variable names must start with an alphabetic character or an underscore. 
They can contain alphanumeric characters and underscores but not white spaces. 
C++ names are case sensitive and using the `camelCase` naming is the most common convention.
While you can start a name with and underscore, you cannot use two underscores or 
and underscore and a capital letter, as these are reserved by C++. 
Also you cannot use other reserved words by C++ like built-in name types. 

## Converting Between Types

Depending on the situation the compiler may performa widening conversion between types like:
```
int x = 1;
int y = 2.2;
sum = x + y;

output: 3.2
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
