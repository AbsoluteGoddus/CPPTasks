# printf(), If-Statements, Switches and Loops

## 1. printf()
### 1.1 Basic Idea
In your code you might have wondered how you can print something so that you can actually see what your code does (similar to BasicTask() in the first challenge),
This can be achieved through **printf** and many other ways, but in this tutorial we will focus on **printf**.

The **function signature** (The way the function is built, e.g., Return type, arguments ect.) of printf() is ```int printf(const char* format, ...)``` where ```...``` denotes an unspecified number of arguments.
To use it, you can write ```printf("<The text you want to print here>")```.
### 1.2 Conversion Specifiers
**printf** can also use the args to dynamically modify the text it displays. To do it, you need to use conversion Specifiers.
These are just special combinations of symbols to tell printf what type the respective argument has. E.g., ```%i``` will substitute itself with an integer.
So ```printf("There are ~%i Billion Humans on earth", 8);``` will print: ```"There are ~8 Billion Humans on earth"```.

 > See https://en.cppreference.com/w/c/io/fprintf for all Conversion Specifiers.

### 1.3 Small challenge
Make a program that prints out the numbers from 1 to 9 and then prints out whatever number **argc** is.

## 2. If-Statements
### 2.1 Basic Idea
While doing the challenges or just thinking on your own, you might have asked yourself if there is a way to make a condition. E.g.,
if some number is 2, then do x. This is essentially what an **If-Statement** does. It uses a boolean value to execute code, only if the boolean is true.

### 2.2 Basic Syntax
An If-Statement is written like the following:
```
if (<condition>) {

}
```
Where the statements in the **If-block** are only executed if the condition is true or evaluates to true.

An example is if you want to make a function for your Person class to check if the person is under 18 and if yes, do some action.
This is done like the following:
```c++
if (p.age < 18) {
    printf("You are not an adult!!!");
}
```

 > Tip: You can also use the else keyword. It will either replace the if-keyword or prefix it. So all possible combinations are if (if the condition is truthy, do something), else if (if the previous condition is false and this condition is true, do something) and else (if the previous condition is false to do something).

A full example is:
```c++
if (p.age < 18) {
    printf("age: child / teenager"); // Will only trigger if the age is below 18.
} else if (p.age == 36) {
    printf("age: mid-life-crisis"); // Will only trigger if the age is not below 18 and is equal to 36
} else {
    printf("age: other"); // Will trigger when the age is not below 18 and not 36.
}
```
 > Note if an else-if statement is used in combination with a previous if-statement and both are mutually exclusive, it's faster than writing two if-statements, since sometimes only one needs to be checked.