# CPP Loops and Functions


**Does your language include multiple types of loops (while, do/while, for, foreach)? If so, what are they and how do they differ from each other?**

a.	**While loop:** while the condition checked is true, the statements inside the loop are executed and the loop repeats until the condition is false.

Format: `while (condition) {statement;}`

Example: 
```
int count= 0;
while (count <= 10)
{
  std::cout <<  count;
}
```

b.	**Do-while loop:** is just like a while loop except the statement executes at least once. After the statement has been executed the condition is checked and the loop repeats and executes statements while the condition is true.

Format: `do {statement;} while (condition);`

Example: 
```
int i=5;
do
{
  std::cout <<  i-- ;
} while ( i > 0);
```

Note the syntax: the semicolon `;` after the while clause. This is required.
   
**What’s the difference?**
  1.	In a `while` loop the condition is checked before the loop is executed. If the condition initially evaluates false, the program may never enter the loop and execute the statements.
    
  2.	In a `do-while` loop the condition is checked after the loop statements, which means the loop statements are executed at least once.
   
d.	**For loop (Iteration):** inside the parentheses, a loop variable is initialized, the condition is checked, and if it is true the statements are executed. Then the end-expression `++i` is evaluated which usually increments or decrements the loop variable. After that execution returns to the second step and the condition is checked again. This repeats until the condition is false.

Format: `for (init-statement; condition; end-expression) {statement;}`

Example: 
```
for (int i = 0; i< 10; ++i)
{
  std::cout <<  i;
}
```

Note scope: the loop variable is scoped to the `for` statement, so you can only use it in the for-expressions or the loop statements inside the loop.
Note the syntax: There are three expressions inside the parentheses and they are separated by a semicolon `;`.

e.	**For-each loop (range-based):** allows traversal of a container without having to do explicit indexing. Inside the parentheses, you declare the loop variable, which is of the type of the items in the collection being traversed. Then the second expression gives access to the collection.

Format: `for (element-declaration : container_object) {statement;}`

Example: 
```
std::vector data_nums{1, 2, 3, 4, 5};
for (int i : data_nums)
{
  std::cout << year << “  ”;
}
```

4.	Note the syntax: there are only two expressions and they are separated by a colon `:`.
   
**What’s the difference?**
  1.	An iteration `for` loop declares a counter variable that is incremented or decremented and repeats the loop executing statements until the condition is false.
  2.	A range-based `for` loop declares an array-element variable and iterates over each element of the collection given executing statements until the end of the collection. This type of `for` loop does not require us to use the array’s length or to explicitly index the array. 

**What is the syntax for declaring a function in your language?**

Format: 
```
returnType functionName(parameters)  // Function Header
{
  statements;                    // Function Body
  return statement;
}
```

**Are there any rules about where the function has to be placed in your code file so that it can run?**

a.	Functions must be defined exactly once in a file.

b.	Functions cannot be defined inside of other functions. (Outside of the `main()` function)

c.	Functions can be defined in a few locations. C++ is read from top to bottom and for the caller to have access to the function it must be either explicitly defined or a function prototype is declared before it is called.

  1.	Header files: Many library functions are provided in header files, and you can use those functions by including the headers at the top of your file. `#include <iostream>`
  
  2.	Explicit function definition: The entire function code is defined above the function that is calling it. 
  
  3.	Function prototype declaration: You do not have to define the function before it is used as long as the function prototype is defined before it is called. A declaration tells the compiler about an existence of a function, check that it is a valid declaration, and then continue execution.
     
Example: 

```
int add(int, int); 	// fxn prototype
int main() 
{
  add(4, 5);		//fxn is called
}
int add(int x, int y)   // fxn defined
{
  return x+y;    
}
```

**Does your language support recursive functions?**

a.	Yes, C++ supports recursive functions. 

**Can functions in your language accept multiple parameters? Can they be of different data types?**

a.	Yes, functions can accept multiple parameters and C++ even allows you to write functions with a variable number of parameters (which I do not understand fully yet).

b.	Yes, the parameters can be of different data types. 

**Can functions in your language return multiple values at the same time? How is that implemented? If not, are there ways around that problem? What are they?**

a.	No, functions can only return a single value to the caller each time it is called. And `void` functions can return nothing.

b.	Yes, there are ways to get around this. One can make use of a vector, pair, tuple, struct, etc., collections that hold several values and are passed-by-reference. 

**Is your language pass-by reference or value? Check your code against outside sources in case there is anything tricky going on (like in Perl).**

a.	By default, parameters are passed by value and a copy is made.

b.	However, C++ allows the option for the programmer to choose to pass-by-reference rather than pass-by-value with pointers or C++ references.

**Are there any other aspects of functions in your language that aren't specifically asked about here, but that are important to know in order to write one? What are they?**

a.	For a novice C++ programmer, no, that should just about cover the basics to write successful functions.

b.	For an advanced C++ programmer, absolutely yes, there are several function features not yet mentioned. 

1.	Function templates
2.	Inline functions
3.	Using namespaces
4.	Function overloading
5.	Lambdas (anonymous functions)
6.	Virtual functions
7.	Pass by lvaue and rvalue references
8.	Pass by address
9.	In and out parameters
    
c.	As I am a C++ novice I cannot begin to explain the above topics but I am aware they exist and possibly (probably) many more function features. 

## Sources:
[1] Beginning C++ Programming - Richard Grimes

[2] cppreference.com [cppreference.com](https://en.cppreference.com/)

[3] learncpp.com [learncpp.com](https://www.learncpp.com/)
