# CPP Basics

## 1. Basic Syntax

### 1.1 Statements

In cpp the general syntax is mostly:
```
<statement>;
```

Here a statement can be almost anything. It can create a variable, modify a value, call a function...

E.g.,
```c++
A = A + 1;
```
Will add one to a variable A (Technically, this assigns the result from A + 1 to A)
 > ⚠️ The code above is invalid, as A is not yet declared in scope.

### 1.2 Includes

If you write:
```c++
#include <someFile.h>
```
 > ⚠️ Note that the include statement is not followed by a semicolon (;), and is relative to the file it is used in.

It will 'Include' ```someFile.h```. This mostly just means copy and pasting the contents of it to replace the **Include Statement**.

Also
```c++
#include <someFile.h>
```

```c++
#include "someFile.h"
```
Can both be used, but using <> makes it search only in the environment, whilst using "" makes it also search in the current directory.
 > Note if you do not know what your environment is, google it. This collection of tutorials and challenges is explicitly designed for coding in cpp, not for setup.

### 1.3 Comments

You can always append ```//``` anywhere in your code to make a comment. A comment will not be read as code and is very usefull for documenting.
E.g.,
```c++
A + 1; // This is a comment
```
Will act the exact same as:
```c++
A + 1;
```

## 2. Variables

### 2.1 Types

A Variable can contain a value. Specifically, it is an instance of some ```type``` and will act as it.
For now, you should know the following types:
 - **int**
 - **float**
 - **std::string**
 - **char**
 - **bool**
 - **void**

 > Note that the reason std::string is used instead of string is that string is in the namespace std. think of it as some kind of folder, for organization purposes. It will be explained in the next tutorial.

Where
**int** Can hold any full integer,<br>
**float** Can hold any real number,<br>
**std::string** Can hold any (ASCII) text but must be included from the string header and<br>
**char** Can hold a single (ASCII) character<br>
**bool** Can only be true or false<br>
**void** Essentially means that there is nothing.

 > ⚠️ Note that there are some limitations though, like that the typical int can only hold 2^32 numbers (2^16 negative and 2^16 - 1 positive numbers to be exact)

### 2.2 Creation

To create a variable, you will typically use:
```
<type> <name>;
```
or
```
<type> <name> = <expression>; // Note that expression can be a value or a function.
```

So let's say we want to create a variable myName and set it to some name, we would write:
```c++
std::string myName; // Note that this could also be written as 'std::string myName = "Thomas" instead'.
myName = "Thomas"; // This assigns "Thomas" to myName. Note that this is called the assignment operator (=)
```

 > ⚠️ Note that std::string myName = "Thomas"; is sometimes called RAII and std::string myName; myName = "Thomas" is sometimes called lazy initialization. Note that they are completely different and depending on type may result in different instances, though most basic types do not have that distinction

If we dissect that code, we will first create a variable with the **type** being **std::string**
Give it the **name**, **myName** and then **set** it to **"Thomas"**
 > ⚠️ Note that "Thomas" is surrounded by quotation marks ("") This is because a string (text) in cpp must always be written like that if not contained in a variable. Essentially what it will do is create a temporary object (r-value) of type const char* and set it to "Thomas."

### 2.3 operators

An operator in cpp is a special way to modify a variable (Technically, it's just a function, but we will come to that later)

Examples of operators are:
 - Assignment (=)
 - Addition (+)
 - Subtraction (-)
 - Multiplication (*)
 - Division (/)
 - Equality (==)
 - Inequality (!=)
 - Lesser (<)
 - Greater (>)
 - Binary AND (&)
 - Binary OR (|)

and many more.

 > ⚠️ Note that the Equality operators (==, !=, ...) will all return a boolean that is true if the condition is met and false otherwise.

These can be used to manipulate a variable, e.g.,
```c++
A + B;
```
Will add b to a and replace itself with the result (Return the result)

### 2.4 L & R-Values
To be short, an L-Value will be on the left of an assignment (E.g., in ```A = 1``` A is the L-Value and 1 the R-Value)
whilst an R-Value is on the right side of an assignment. 
The most basic difference is that an R-Value only really exists in code & compiler and is thus not stored in the program. (Or at least it should be thought of it.)

 > ⚠️ Note that the right side of an operator may not always be an R-Value. The rule of thumb is, if not otherwise specified, a Value is an R-Value if it has no name (e.g., 1, 2, 3, "Thomas", 3.14, ...)

## 3 Functions
### 3.1 Basic Idea
A Function is in programming mostly the same as in mathematics. It takes some input and returns some output.
This can be used to E.g., Add a number or subtract it.

### 3.2 General Syntax
The General syntax for a function **definition** is:
```
<return_type> <name>(<args...>) {
    return <someVariable>;
}
```

If dissected, we get **return_type** which is the **type** of the **variable** the **function** will **return**,
The **name** which is the name of the **function**, the **args...** which may be multiple, a single one or none and last, but not least, the return statement, which will return some variable (value).

 > Note that <Args...> can be any number of **Variables**. E.g., (int A, int B, int C)

An example of a function is the cpp entry point **main**
```c++
int main(int argc, char** argv) {
    return 0;
}
```

This is a function that will be executed when your program runs.

It returns an int, takes two arguments (argc & argv) and returns 0, which in most cases will mean **EXIT_SUCCESS**

### 3.3 calling a function
To call a function, you use the following syntax:
```
<name>(<args...>);
```

## 4. Wrapping things up
Let's say we have some cpp code main.cpp:
```c++
int add(int a, int b) {
    return a + b;
}

int main(int argc, char** argv) {
    return add(1, 1);
}
```
It will do the following:
1. start at line 6 (since main is **always** the function that will be called at the beginning of a cpp program)
2. execute add(1, 1)
   1. set a & b to 1
   2. add them together
   3. return the result
3. return the result

if everything is set up correctly, your program will now exit with exit code 2, as 1 + 1 = 2.

## 5. Additional notes
All code that should be executed must be in a scope (curly brackets '{}')<br>
You do not need to write int argc, and char** argv as arguments into 'main.' You can leave them be.<br>
When a function returns, it **essentially** replaces itself with the result.
Note that () can also act as a function, so in (1 + 2) * 3, (1 + 2) gets evaluated first, since it is required for the multiplication with three

## 6. First Task
1. You should include Basics.hpp
2. You should write some functon ```int add_multiply(int a, int b)``` that will add a & b and then multiply the result with b
3. You should return the result of BasicTask(add_multiply(1, 2)) in 'main.'

 > ⚠️ Note that you should literally write return BasicTask(add_multiply(1, 2))

If it returns exit code 0 and prints out: Evaluating argument... You did it!, you succeeded!

## 7. Challenge

Write the same program, but this time you should write your own version of BasicTask, that **must** be named differently, to check if **your** result is what **you** expect.

## 8. Common mistakes.
Do not switch up '==' and '='.<br>
'=' is an assignment, whilst '==' is a comparison. So '==' acts more like the one in math.<br>
Remember to end most lines with a semicolon (;).<br>
'void' is not a type. 'void' literally is nothing, so a function returning void does not return anything, and thus does not require a return statement.