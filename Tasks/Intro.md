# CPP-Beginner Intro
This file aims to teach any beginner the basics of C++ (CPP).
 > Read carefully, but if you want to skip a longer segment, there will probably be a TL;DR (To long, Didn't Read) section to read.
# 1. Statements
## 1.1 Concrete Definition
Statements are lines of code that are compiled and executed in sequence.

## 1.2 Abstract Definition
A Statement is essentially an order / instruction. If you order a pizza, you give specific instructions to the cashier. E.g.,
"I want a **peperoni pizza** with **extra** cheese, delivered to **0521 71300 Broderick Dam**."
The cashier may answer with: "**Yes**, it will be delivered to you in about **15 min**"

If we dissect this, we get the following **Instructions** / **Statements**:<br>
You:
 - Make a pizza with the **type** being pepperoni.
 - **Add** extra cheese.
 - **Deliver** it to 0521 71300 Broderick Dam.

Cashier:
 - Yes, we can do that,
 - It **will be ready** in about 15 minutes.
 - Once it's ready, it **will be delivered** to your address.

As you can see, **Statements** can be extracted from everyday speech, and that's the same with C++ Statements.
If you program enough, you might even be able to fluently speak C++, making lines of code, no different to normal English to you.

### TL;DR
**Statements** are used in everyday speech and can be extracted from it.

## 1.3 Syntax
A statement is written like this:
```c++
<body>;
```

Where:
 - ```<body>``` is the logic to be executed.
 - Semi-Colon ( ' **;** ' ) Indicates an End-Of-Line for the compiler. Note that it **must** be written at the end of the line.

## 1.4 Use-Cases

Here are some common use-cases of **statements** in C++:

1. **Variable declarations**:
   **statements** can represent variable **initializations** / **declarations**:
    ```c++
    int a = 0;
    ```

2. **Expressions**:
   **statements** can represent **expressions** such as **assignments** or **increments**:
    ```c++
    a = f(a);  // Assigning the result of f(a) to a
    ```
    ```c++
    a++;  // Incrementing the value of a
    ```

3. **Return statements**:
   **statements** can even represent the **return value** of functions:
    ```c++
    return EXIT_SUCCESS;
    ```

### TL;DR
The majority of C++ code consists mainly of **statements**.

## 1.5 Notes
 - You can write all of your code in a single line, Since the cpp compiler will treat each **Statement**, followed by a Semi-Colon as its own Line. so E.g., ```int a = 0; a++; return a;``` is valid C++.
 - To read more about statements, see [cppreference](https://en.cppreference.com/w/cpp/language/statements.html)

## 1.6 Common Errors
 - Forgetting the **Semi-Colon**. Remember it. It is mandatory for most lines.
 - Writing to many **Semi-Colons**. Some lines do not require it. Some compilers will simply ignore them then, but some will not, so read carefully if a Semi-Colon is not required.

## 1.7 Learning-Tasks
1. Write a small dialog (10 sentences max.) and **extract** the **Statements** from it (Similar to how I did it in [1.2](#12-abstract-definition))
2. **Compress** them even more and add a Semi-Colon.
3. **Repeat** until you can intuitively **dissect speech** into its **Statements**.

## 1.8 Challenge-Task
Nothing here yet :)

## 1.9 Naming-Conventions
There are no Naming-Conventions for **statements**, as there is no other way to write them.

# 2. Preprocessor
## 2.1 Concrete Definition
The **preprocessor** is a **program** executed, by the compiler, to evaluate **preprocessor directives**.

## 2.2 Abstract Definition
The Preprocessor is essentially like an assistant.
You may tell the assistant that whenever you say drink, that they should pour you and your guest a bottle of sparkling water, or that if it is Saturday and you say drink, that they should pour you and your guest a wine.

The Preprocessor is the same.
E.g., to replicate the above logic using preprocessor directives, you would typically write:
```c++
#ifdef Saturday
#define Drink "Wine"
#else
#define Drink "Sparkling Water"
#endif
```

## 2.3 Syntax
A **Preprocessor Directive** **must** always be started with a Hash ( ' **#** ' ),
Followed by the directive name. Some directives also require an **Argument**.

## 2.4 Use-Cases
These are some of the Directives:
### ```#define```
**Defines** a name to be **replaced** by some other value.
E.g., if we write:
```c++
#ifdef Saturday
#define Drink "Wine" // #define requires any text as an argument. It can even be multiple. You need to make sure that it is followed by a line brake though.
#else
#define Drink "Sparkling Water"
#endif

Drink 
```
The Preprocessor will always replace ```Drink``` with ```"Sparkling Water"```

### ```#undef```
Undefines a name to not be **replaced** by some other value.

### ```#include```
Copies a file and replaces itself with the contents of it.
The argument must either be a file name encased in double-quotes ( ' **"** ' ) or must be encased in ( ' **<>** ' ).
In the case of double-quotes, the filename must be relative to the file location, otherwise it must be relative to the environment root.
 > This tutorial is not setup, thus if you don't know what your C++ environment is, then google it.

> See [cppreference](https://en.cppreference.com/w/cpp/preprocessor.html) for all directives.

## 2.5 Notes
 - A Preprocessing Directive **cannot** be followed by another.
 - A Preprocessing Directive **must** be followed by a line break. 

## 2.6 Common Errors
 - Trying to use #define and putting other Preprocessor Directives inside it.
 - A Macro (And no other name) in cpp can have a space, since the second part will then count as a different token. Use underscore ( ' **_** ' ).

## 2.7 Learning-Tasks
Nothing here yet :)

## 2.8 Challenge-Task
Nothing here yet :)

## 2.9 Naming-Conventions
Mostly **Replace Macros** (How the names of #define are called) are written in all-caps. E.g., instead of ```Drink``` you'd normally write ```DRINK```.

# 3. Comments
## 3.1 Concrete Definition
A comment is a section of code that will not be compiled and completely ignored.

## 3.2 Abstract Definition
It's the exact same thing in everyday speech. E.g., if you have some assignment and put on a note, that just explains what you did, that's a comment.
In C++ the exact same thing happens. A comment is simply ignored. It can be deleted and nothing will change.

## 3.3 Syntax
There are two versions of comments in C++.
### C-Style Comments
```c++
/*
 * This is a C-Style Comment.
 * This is also called a multi-line comment
 * [...]
 */
```
The rules for C-Style Comments are:
1. A C-Style Comment **must** always begin with a ```/*```
2. A C-Style Comment **must** always end with a ```*/```
3. Every line of a C-Style Comment must be prefixed with a ```*```.

### C++-Style Comments
```c++
// This is a C++-Style Comment.
// These can also be used as multi-line comments.
// You will most likely used and see this way more, since they are easier to type.
```
The rule for C++-Style Comments is:
Every C++-Style Comment must be prefixed with a ```//```

## 3.4 Use-Cases
Comments are mostly used to explain code. E.g., What it does, how it works, why it works, fixes that are required...
So E.g., one might write the following:
```c++
#ifdef Saturday // Check if Saturday is Defined (Wich it is not, thus execute else)
#define Drink "Wine" // Define drink as "Wine"
#else
#define /* This will not get read as code. Because of how C-Style Comments work you can make these inline comments this will just get deleted before preprocessing though. (Note that the file will not change, only what the preprocesser reads.) */ Drink "Sparkling Water" // Define drink as "Sparkling Water"
#endif

Drink // This will get replaced with "Wine" if Saturday is defined and "Sparkling Water" otherwise.
```

## 3.5 Notes
 - You should use comments as much as possible. This is important if you later want to actually understand your code.
 - Note that you can also **document** your code using E.g., **doxygen** style, bust that is a topic for later.

## 3.6 Common Errors
 - If you write ```//``` everything on the right of it, until a line-break 

## 3.7 Learning-Tasks
Nothing here yet :)

## 3.8 Challenge-Task
Nothing here yet :)

## 3.9 Naming-Conventions
 - There are some 'Special' Words that you can use at the beginning of a comment for extra features in some environments. These are the most frequent: 'WARNING:', 'TODO:', 'FIX:'