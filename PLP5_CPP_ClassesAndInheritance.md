# C++ Classes and Inheritance 

**Does your language support objects or something similar (e.g., structs)?**

Yes, C++ has the user-defined types: classes, structs, unions, and enums.

**Classes** -— is a user-defined type that creates objects that can have many member variables of different data types and a set of well-defined member functions(methods). By default, members of a class are private.

Example:

```
class Employee {
  int employee_id {};
  int employee_age {};
  double employee_wage {};
};
```

Class members: can be data members, member functions, member typedefs, member enumerations, nested classes, and friend classes. (Some of these are discussed below)

**Structs** -- is a user-defined type that allows us to bundle multiple variables together into a single type. Structs are almost identical to classes but by default, members of a struct are public. 

Example:

```
struct Employee { 	// type definition
  std::string name {};
  int id_num {};
  double payrate {};
};

Employee joe{};	// Employee is the type, joe is the variable name
```

Naming Conventions: Start with a capital letter and don’t use a suffix.
Yes: `Fraction`. No: `fraction`, `Fraction_t`, `fraction_t`  

Member variables: To access member variables, use the dot operator `.`.

**Unions** -- A user-defined type like a struct that can store multiple members of multiple types except a struct stores members in which all members share the same memory location. This definition means that at any given time, a union can contain no more than one object from its list of members. By default, members of a union are public.

-	No example because it appears unions are sort of a dead leftover relic of the C language. They can be used but it’s rare because we now have better options.

**Enums** (unscoped and scoped) -— a user-defined type whose values are restricted to a set of named constants. Each of the constants has an integral value (0, 1, 2, to n) respectively.

Example: Unscoped enum

```
enum Color {	// define enumeration
  red,  	// define enumerators
  green, 
  blue,	// trailing comma is optional but recommended
}; 	// ends with a semicolon

int main() {
  Color shirt { red };
  Color pants { blue };
  Color hat { green };
}
```

Example: Scoped enum (use `::` to access enumerators)

```
int main() {
  enum class Color {
    red, 
    green, 
    blue,	//trailing comma is optional but recommended
  }; 	// ends with a semicolon

  Color shirt { Color::red };
  Color pants { Color::blue };
  Color hat { Color::green };
}
```

-	The enumerators ` red,`, `green,`,  and `blue,` define the specific values that the type `Color` is restricted to, and only one can be used at a time.


**Are there naming conventions for objects, instance variables, or functions that people writing in your language should be aware of?**

C++ is quite flexible when it comes to naming conventions, there are only a few rules:

-	Can not be a reserved [keyword]( https://www.learncpp.com/cpp-tutorial/keywords-and-naming-identifiers/)
-	Can only be composed of letters(upper/lowercase), numbers, or an underscore. No other symbols or whitespace is allowed.
-	Must begin with a letter(upper/lowercase) or an underscore. Cannot start with a number.
-	C++ is case-sensitive. 

As long as the above rules are met, C++ allows you to name however you want. However, even though you can, doesn’t mean that you should. 

Here are some recommended best practices:

- Variables- begin with a lowercase letter.
- Functions- begin with a lowercase letter. (some debate on this)
- User-defined types- begin with an uppercase letter. (classes, structs, and enums)
- It is also recommended to not use all-caps because this is typically reserved for preprocessor macros.


**Does your language have standard methods for functions that serve a similar purpose across all objects? For example, toString() in Java and __str__ in Python allows information about the objects to be printed. Are there similar functions in your language?**

-	The short answer is technically no. In C++ all functions need to be defined somewhere in your code or included in a header (e.g. `#include <string>`). 
-	Many functions are commonly used in C++ classes like `string`, but these functions are not specific to classes and can be used anywhere in your code.
-	C++ does have a few special constructor methods but three of them are generated automatically by default, and the other three can be used from using symbol syntax.

Constructor Special Methods: 

-	Default constructor- is a special member function that is used for initializing objects of that class and is automatically called with the use of `()`. (Most similar to `__init__()` constructor in python).
-	Copy constructor- automatically used when you pass an object by value.
-	Move constructor- when a temporary object is used to create another object, using `&&`.
-	Destructor- when objects are passed by value they are automatically destroyed when the called function completes. Or you can use `delete` but be careful using it.
-	Copy assignment- automatically used when an existing object is assigned the value of another one and creates a new object.
-	Move assignment- when a temporary object is used to be assigned to an existing object, using `&&`.


**How does inheritance work (if it does)? Does your language support multiple inheritance?**

-	**base class** is the parent class
-	**derived class** is the child class
-	To inherit from a class use the `:` symbol.
-	Bases of a struct are inherited publicly by default, whereas bases of a class are inherited privately by default. However, the programmer has the option to specify differently.
  
Inheritance Example:

```
// Base class (parent)
class Auto {
  public:
    string make = “Jeep”;
};
// Derived class (child)
class Car: public Auto {	// use ‘:’ to inherit attributes from Auto class
  public:
    string model = “Cherokee”;
};

Car myCar; 	// Create myCar object
cout << myCar.make + " " + myCar.model;
```

C++ supports multilevel inheritance and multiple inheritance.
-	Multilevel inheritance means that a class can be derived from a class that has been derived from another class. Parent -> child -> grandchild
  
Adding to the example above:

```
// Derived class (grandchild)
class Owner: public Car {
  public:
    string ownerName = “Demi Dusenberry”;
    string phoneNumber = “555-555-5555”;
};
```

-	Multiple inheritance means a class can also be derived from more than one base class, using a comma-separated list.
  
```
// Base class (parent 1)
class FirstParent {
  public:
    void myFunction() {
     // some code }
};

// Base class (parent 2)
class SecondParent {
  public:
    void mySecondFunction() {
     // some code }
};

// Derived class (child)
class ChildClass: public FirstParent, public SecondParent {	
};

// Create object and use base class members
ChildClass myObj;
myObj.myFunction();
myObj.mySecondFunction();
```


**If there is inheritance, how does your language deal with overloading method names and resolving those calls?**


**Is there anything else that’s important to know about objects and inheritance in your language?** (I know this question is vague, but objects are where languages can vary a lot, so it’s hard to ask questions that will apply to everyone.)

-	Virtual members: Virtual functions are member functions whose behavior can be overridden in derived classes. As opposed to non-virtual functions, the overriding behavior is preserved even if there is no compile-time information about the actual type of the class. That is to say, if a derived class is handled using pointer or reference to the base class, a call to an overridden virtual function would invoke the behavior defined in the derived class. Such a function call is known as virtual function call or virtual call. Virtual function call is suppressed if the function is selected using the scope resolution operator `::`).
  
-	Access Specifiers: public, private, protected (can be accessed through inheritance or the keyword `friend`.
-	Friend classes: Code for the entire class, `class2`, can have access to the private members (data and methods) of the `class1` class.
  
Friend Example:

```
class cartesian_vector; 	// forward declaration – class defined later
class point {
  double x; double y;
public:
  point(double x, double y) : x(x), y(y){}  // 
  friend class cartesian_point;	// friend declaration gives access to other class’s members
}; 
```

-	Variable scoping with `static` or `static_cast`
  
-	`__thiscall`, `this->` is a pointer of the class type to the current instance, and use `*this` to dereference to get access to the object.
-	User-defined namespaces.
  
I am positive there are more things to know about C++ objects/classes and inheritance, but it is beyond the scope of my beginner level of knowledge. 

## Sources:
[1] Beginning C++ Programming - Richard Grimes

[2]  [cppreference.com](https://en.cppreference.com/)

[3]  [learncpp.com](https://www.learncpp.com/)


