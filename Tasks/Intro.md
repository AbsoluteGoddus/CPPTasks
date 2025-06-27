# CPP-Beginner Intro
This file aims to teach any beginner the basics of C++ (CPP).
 > Read carefully, but if you want to skip a longer segment, there will probably be a TL;DR (To long, Didn't Read) to read.
# 1. Statements
## 1.1 Concrete Definition
Statements are lines of code that are compiled and executed in sequence.

## 1.2 Abstract Definition
A Statement is essentially an order / instruction. If you order a pizza, you give specific instructions to the cashier. E.g.,
I want a **peperoni pizza** with **extra** cheese, delivered to **0521 71300 Broderick Dam**.
The cashier may answer with: **Yes**, it will be delivered to you in about **15 min**

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
