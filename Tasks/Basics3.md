# printf(), If-Statements, Switches and Loops (Also with a bit of lists)

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

 > See https://en.cppreference.com/w/c/io/fprintf for all Conversion Specifiers. Also use \n to print a newline (The same as if you would press enter here)

### 1.3 Small challenge
Make a program that prints out the numbers from 1 to 9 and then prints out whatever number **argc** is.

## 2. If-Statements
### 2.1 Basic Idea
While doing the challenges or just thinking on your own, you might have asked yourself if there is a way to make a condition. E.g.,
if some number is 2, then do x. This is essentially what an **If-Statement** does. It uses a boolean value to execute code, only if the boolean is true.

### 2.2 Basic Syntax
An If-Statement is written like the following:
```c++
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

 > Tip: You can also use the else keyword. It will either replace the if-keyword or prefix it. So all possible combinations are if (if the condition is truthy, do something), else if (if the previous condition is false and this condition is true, do something) and else (if the previous condition is false to do something). This means in practise that an else or if-else statement will compleatly skip evaluation if the previous statement is truthy.

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

## 3. Switches
 > Note that you can skip this part if you don't know about how a jump instruction works. It will be explained later, but if you don't know it already, you probably will not need this.
### 3.1 Basic Idea
Whilst an If-Statement is straightforward to use and practical, it's not the fastest. It can get really slow if used too often. Here switch statements come in.<br>
Whilst an If-Statement uses a boolean value to conditionally **jump** to a different address in memory, a switch-statement generally does some math with some magic numbers, which will always result in the perfect address.
So E.g., if an If-Statement needs to check 12 conditions, a switch statement might only need to do three calculations and then jump to the address.
### 3.2 Syntax
A Switch-Statement will typically look like this:
```c++
switch (<intiger-type>) {
    case <value>: { // A case will be executed if the intiger-type is equal to value.
        <statement>;
        break; // THIS IS VERY IMPORTANT, because if not used the next case (in this case 'default') will also be executed.
        } // These '{}' are important if you initialize a variable in the statement.
    default: // This will be executed if none of the above cases match.
        <statement>;
        break;
}
```
A full example is:
```c++
switch (A) {
    case 1:
        printf("A is equal to one");
        break;
    case 2:
        printf("A is equal to two");
        break;
    case 3: {
        int b = A + 1;
        printf("A is equal to three, B is equal to four");
        break;
    default:
        printf("A is equal to %i", A);
        break;
    }
}
```

## 4. Lists
### 4.1 Basic Idea
Have you ever imagined the problem that if you want to store e.g., multiple **instances** of your Person **class**, that you would need to create an incredible number of **named variables**?
Well, Fear not because lists are here to save you. Essentially, a list is a single **named variable**, containing multiple elements of the same type.
### 4.2 Basic Syntax
A list may be initialized like the following: 
```c++
#include <vector>
std::vector<X> myList; // Replace X with the type of your elements.
```
Now, to **push** an element to the list, you would typically use ```std::vector::push_back(<Element>)```. This will append a single element to the list.
To delete an element, you **may** use ```std::vector::pop_back```
To access an element you **may** use the '[]' operator.
A full example would be:
```c++
#include <vector>

int main(int argc, char** argv) {
    std::vector<int> myNumbers;
    myNumbers.push_back(3);
    myNumbers.push_back(1);
    myNumbers.push_back(2);
    
    printf("The %ith element of myNumbers is %i", argc, myNumbers[argc]) // You may need to know that this reads like: print out: "The (argc)th elelment of myNumbers is (myNumbers of argc)"
    return 0;
}
```

## 5. Loops
### 5.1 Basic Idea
A loop is, as the name implies, some sort of mechanism which allows running certain code in a loop.
This is useful for many reasons. For example, you may want to print out many names from a **list**.

### 5.2 Basic Syntax
There are two main types of loops. The first is the while loop, and the second is the for loop.
While loops are most useful when trying to make an **execution loop**, E.g., a game-loop. Whilst for-loops are most useful for **iterative loops**, and thus way more common.
For now a for loop will suffice, so here is the basic syntax:
```c++
for (<initilization>, <condition>, <increment>) {
    <statement>;
}
```
Where Initialization is, as the name implies, some kind of variable initialization, condition is the condition that must be true for the loop to stay running, and increment is some kind of action that should be done after each iteration of the loop.
In practice a loop might look like:
```c++
std::vector<int> numbers;
for (int i = 0; i < 10; ++i) { // Here firstly we initialize a variable i, then be say that the loop will run until i is 10 or more, and each iteration (repitition) we will increment i by one. (++i is the same as i = i + 1).
    numbers.push_back(i); // This will push back i into the list, so e.g., element 1 will be 0, 2 will be 1...
}
```
 > Note that you can also leave out these fields by only typing ;

## 6. Challenge
This time you won't get a simple task. But a true challenge.
 - Include Basic3.hpp
 - make some function std::vector<int> sort(std::vector<int> vec) That should sort vec and return it.
 - call run(sort)

If you did everything correctly, it will exit with exit code 0 and print something to the console.