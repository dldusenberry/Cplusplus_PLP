# C++ Control Flow

**What are the Boolean values in your language?**

- C++ Boolean values are lowercase true or false, 0 (zero) for false, and any non-zero integer as being true. However, using 1 for true is advised.
   
- “You can insert Boolean values into an output stream. However, the default behavior is to treat a Boolean as an integer. If you want cout to output bool values with string names, then insert the manipulator ‘boolalpha’ in to the stream; this will make the stream print true or false to the console. The default behavior can be achieved by using the ‘noboolalpha’ manipulator.” [1] Grimes.

**What types of conditional statements are available in your language? (if/else, if/then/else, if/else if/else). 
Does your language allow for statements other than “if” (for example, Perl has an “unless” statement, which does the opposite of “if”!)? What operators are used to act on Booleans?**

C++ has two kids of conditional statements: 

- (if/else if/ else): If the condition is true, the true statement is executed. If the condition is false, and an else statement exists, the false statement is executed.

- (switch): Testing a variable for equality against a set of other values is common. So, instead of using a chain of many if-else statements, C++ provides the switch statement. The switch statement evaluates an expression, and if its value is equal to any of the case label values, the statements for the matching case label are executed. One caveat is that switch statements can only evaluate integral types (int, bool, char) and enumerated types. Unless they can be converted to an integral type, other data types cannot be evaluated in a switch expression.  (default) If the switch expression value does not match any case label values, and if a default label exists, then the statements after the default label are executed instead. The default label is optional, and if the value does not match any of the case labels, and a default case does not exist, then no statements inside the switch are executed and execution continues after the switch block. 

Operators used to act on Booleans: 

- Comparison operators used to test if a condition is true or false are [ >,>=, <, <=, ==, != ].
- Logical operators are used to test multiple conditions and C++ supports the use of either keywords or symbols.
- The logical operators are the logical NOT [ !, not ], the logical AND [ &&, and ], and the logical OR [ ||, or ].


**How does your programming language deal with the “dangling else” problem?**

- In C++ a “dangling else” is paired up with the last unmatched if-statement in the same block if there are no curly brackets {}. The program will still compile and run but execution may produce incorrect output. 

- For nested if-else if statements, it is recommended to explicitly enclose inner if-else statements within a block using curly brackets {} to avoid a “dangling else” problem. 

**If your language supports switch or case statements, do you have to use “break” to get out of them? 
Can you use “continue” to have all of them evaluated?**

- (break/return) Each case label’s set of statements should end with either a break or a return to exit the switch block, including the default label. Without a break or return, execution will “fallthrough” to the following cases, and all case statements after the matching case label will execute. A break is used at the end of each case to exit the switch (preventing fallthrough) without exiting the entire function and execution continues at the next line of code after the switch block. A return is used to exit the entire function that the switch is located in, and execution continues at the point the function was called from.

- Sort of…? In C++ the keyword ‘continue’ is used in the scope of a loop and there is nothing to continue in a switch because it is not a loop. If the switch block is inside a loop, you can use ‘continue’ to start the next iteration of the loop, but this does not mean that all cases will be evaluated. Even though it will compile and run, the use of ‘continue’ in a switch is not recommended and can cause an infinite loop or incorrect output.

- What about a fallthrough?  We know from the answer above, that without a break or a return at the end of each case causes a fallthrough and executes the rest of the statements in a switch. However, even though each statement has been executed, this does not mean that each case has been evaluated. The program just basically barrels through the rest of the switch block statements after the matched case statement is executed. Not to mention the compiler will usually throw a warning if a fallthrough occurs.

- There is another C++ option, the ‘goto’ statement that can jump to the statement label called as long as the label called appears in the same function. So, you can write for each case to ‘goto next case’ to be evaluated. This works and is completely legal in C++, however, goto statements are rarely used and are also highly discouraged. Best practice is to write more thorough loops. 

**Lastly, and perhaps most importantly: it is time to start thinking about what your programming project is going to actually be. In future sessions, we will be breaking down your project into individual milestones for weekly check-ins. But for now, just write a short paragraph about what it is you are planning to code in your language of choice. Remember that it should be a substantial program - a game, app, calendar, website, etc. (I'll try to dig up some examples to share before the next class)**

Project:

***Malware Detection & Analysis Scanner***

- My interests are in cybersecurity, more specifically digital forensics, and threat detection. I have been trying to think of cybersecurity related projects for a few weeks to start a professional portfolio. With this is mind, I chose to learn C++ for my PLP because I knew I wanted to make some sort of security related application with a simple GUI, I just didn't know what yet. Searching 'cybersecurity project ideas' gave a lot of ideas that I considered to be either too easy or wayyy beyond the scope of my knowledge.
If I am honest this project may be an overly ambitious idea, but what I like about this project is that I can grow this project slowly as I learn and implement new features creating different scanning and debugging tools as I learn. This project can grow as my knowledge grows even beyond this university course.



## Sources:
[1] Beginning C++ Programming - Richard Grimes

[2] Boolean Operators [cppreference.com](https://en.cppreference.com/w/cpp/language/operator_logical)

[3] Switch Statements [learncpp.com](https://www.learncpp.com/cpp-tutorial/switch-statement-basics/)
