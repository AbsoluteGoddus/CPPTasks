# Classes, Structs & Namespaces
## 1. Classes & Structs.
In cpp a class or struct is just a type of variable that the user can define themselves.
This can be used in a multitude of ways, E.g., you could make your own string class or make some struct that contains info about a person.

### 1.1 Basic Syntax

To define a **class** in cpp, you will use
```
class <name> {

};
```

This will **define** an empty class that will do nothing. Name will here denote as before the name of your class.

A **struct** is essentially the same as a class and is defined using the exact same syntax, the only difference being that class will be replaced with struct.

**Typically**, you will use a struct when you just need some kind of type that can **store** data,
whilst a class is **typically** only used if you actually need it to be '**smart**' and be able to modify itslef.
Both can do both, but a class just has a few extra features that make this easier.

Now inside a **class** or struct you can define variables as **members**.
These will act the same as if defined **in scope** but can only be accessed through the instance of your type.
 > ⚠️ Note that you can also access them through references and pointers, but that will be explained later.

Also, important to know are the differences between **private** and **public** members.

Mostly there is just one big difference. A **private** member can only be accessed inside the **instance** of your type,
Whilst **public** members can also be accessed on the outside.

These members can be differentiated through the ```public:``` and ```private:``` **keywords**.

So an example **struct** would look like:
```c++
struct Person {
    std::string name; // = "Thomas"
    int age; // = 42
    float height; // = 180 // in cm
    bool is_alive; // = true
}; // This semicolon is important!!!
```

The above **definition** of a struct will create your own type 'Person' that contains a name, age, height, and a boolean that defines if they're alive or not.
 > ⚠️ Note the comments on the right side of the variables. These can be pasted in to make the struct have Default values. This is important, since otherwise they would mostly just contain whatever the bits they're now occupying had before.

It's important to note that a **struct** will by default always be **public**.

An example class would look like:
```c++
class doubleBool {
public:
    doubleBool();
    ~doubleBool();

    // Note that functions can also be members
    void setA(bool value); // These are called setters
    void setB(bool value);
    
    bool getA(); // These are called getters
    bool getB();

private:
    bool a; // These are the variable members.
    bool b; // Mostly you will call functions as just functions and not members, but technically it's correct.
}; // This semicolon is important!!!
```

That's a lot, but let's dissect it.
First we **define** a **class** with the **name** 'doubleBool,' which will then open up a scope.<br>
Inside that scope we use the ```public:``` **keyword** because a class is, by default, private.<br>
After it, we **declare** a **Constructor** and **Destructor**.<br>
These are special functions that will be called on initialization and destruction of a type. We will discuss this in detail later.<br>
After that, we **declare** a few **getters** and **setters**. These will later be used to modify the internal value of the instance of double bool.
Next, we use the ```private:``` **keyword** do tell the **compiler** that the next values will be accessible to the class only.
Then we define two variables a & b which will act as our actual members.
At last, we will exit the scope and end the **line** with a semicolon.

 > Note that the functions (Constructor, Destructor, Getters & Setters) are only **declared** not **defined**.

### 1.2 Declaration and Definition

Before we continue, we need to speak about **declaration** and **definition**.
If we **declare** or **forward declare** (both mean the same thing, through mostly **forward declaration** is used.) something we only tell the **compiler** about that something should exist.
We do not tell it how it exists, we only tell it that it does, in fact, exist. This can be thought of doing something in a team.
You may assume that something already exists and plan your things to then use it, even though it does not yet exist. Now here is the problem, if it doesn't exist, how can we use it?

That's where a **definition** steps in. A **definition** Actually **defines** whatever we told the compiler exists. This is where we tell it how it should work, how it looks etc.

Now There is a third step that is also important, and that is the **implementation**.
The **implementation** actually **implements** something. E.g., it **defines** what a function actually does.

These can be used for cleaner code.
E.g., instead of writing:

```c++
class doubleBool {
public:
    doubleBool();
    ~doubleBool();

    // Note that functions can also be members
    void setA(bool value); // These are called setters
    void setB(bool value);
    
    bool getA(); // These are called getters
    bool getB();

private:
    bool a; // These are the variable members.
    bool b; // Mostly you will call functions as just functions and not members, but technically it's correct.
}; // This semicolon is important!!!
```

you can write:

```c++
// Forward Declaration of doubleBool
class doubleBool;

// Forward Declaration of Person
struct Person;

// Implementation of main
int main() {
    // [...]
    return 0;
}

// Definition of doubleBool
class doubleBool {
public:
    doubleBool();
    ~doubleBool();

    // Note that functions can also be members
    void setA(bool value); // These are called setters
    void setB(bool value);
    
    bool getA(); // These are called getters
    bool getB();

private:
    Person p; // This is not required at all for this class, but it acts as a usefull tip, 
    // because normally this would not be possible,
    
    // If not for forward declaratoin, since the compiler reads from top to bottom, 
    // if we do not forward declare Person here, 
    // we would need to rewrite the code, 
    // so this comes after the definition / declaration of person, 
    // since otherwise the compiler would not know that Person already exists.
    
    bool a; // These are the variable members.
    bool b; // Mostly you will call functions as just functions and not members, but technically it's correct.
}; // This semicolon is important!!!

struct Person {
    std::string name; // = "Thomas"
    int age; // = 42
    float height; // = 180 // in cm
    bool is_alive; // = true
}; // This semicolon is important!!!
```

This can be beneficial for cleaner code.

 > Note that Forward Declaration and Definition can always be combined.

### 1.3 Implementation of doubleBool
Now that we have declared and defined 'doubleBool,' we still need to implement it. Specifically, this refers to implementing the functions that it contains.
To do that, we simply add:
```c++
doubleBool::doubleBool() : a(false) {
    b = false;
}

doubleBool::~doubleBool() {
    a = false // This is not required.
    b = false // This simply serves as an example.
}

void doubleBool::setA(bool value) {
    a = value;
}

void doubleBool::setB(bool value) {
    b = value;
}

bool doubleBool::getA() {
    return a;
}

bool doubleBool::getB() {
    return b;
}
```

Here in the setters we set a or b respectively to the 'value,' in the getters we return their respective values, in the destructor we set their values to false, which is not required, this only serves as a demonstration, and lastly, we define the constructor.
You may've noticed that the function syntax for a Constructor is slightly different from other functions. This is not always like this, but should be used.
The difference is that we use ```: a(false)```. What this does is that when the Constructor is called, it will first call the constructor of a (Most types have a Constructor) and input false as an argument. This will just set the value of 'a' to false, but it is in some cases faster than the assignment that comes after.

With that our double bool class is finished. You see that it is **way** more code to define a class, as it should have all **members** private instead of public, making us required to implement getters and setters. We also defined a Constructor and Destructor (which should always be done, but is not required.)

### 1.4 Accessing public members.
To now access public members, we simply use a dot.
So to access the name of the person, we could write:
```
Person p;
p.name = "Willi";
```

 > Note that the above code first defines a variable 'p' of type Person and then assigns "Willi" to p.name.

## 2. Namespaces

### 2.1 Basic Idea

As previously discussed, a namespace is similar to a folder. Essentially, this just acts as a way to write cleaner code.

### 2.2 Syntax

To create a namespace, we use:

```
namespace <name> {

}
```

Where name can either be one, or multiple namespaces.
So you could write myNamespace, but you could also write my::Namespace, which will count as two namespaces.
The double-double-colon is also what you use to access namespaces. E.g., if we move our person struct into the myNamespace namespace, it will only be accessible through myNamespace::Person.

Another example would be math::tan(). It now does not block the tan name in the global namespace, so you could still name a function tan, but now you can also access specifically math::tan, which indicates that it is the tangent function out of geometry.

Now, to put it all together, we get:

```c++
// Forward Declaration of doubleBool
class doubleBool;

// Forward Declaration of Person
namespace myNamespace {
    struct Person;
}

// Implementation of main
int main() {
    myNamespace::Person p;
    p.name = "Willi";
    
    // I addded the following to show examples of using doubleBool.
    
    doubleBool db(); // Note that db is mostly used as an abriviation of Database, but is used here as an abriviation for doubleBool.
    // Note that () behind the db. this calls the constructor.
    
    db.setA(true);
    db.setB(true);
    
    return db.getA();
}

// Definition of doubleBool
class doubleBool {
public:
    doubleBool();
    ~doubleBool();

    // Note that functions can also be members
    void setA(bool value); // These are called setters
    void setB(bool value);
    
    bool getA(); // These are called getters
    bool getB();

private:
    Person p; // This is not required at all for this class, but it acts as a usefull tip, 
    // because normally this would not be possible,
    // if not for forward declaratoin, since the compiler reads from top to bottom, 
    // if we do not forward declare Person here, 
    // we would need to rewrite the code, 
    // so this comes after the definition / declaration of person, 
    // since otherwise the compiler would not know that Person already exists.
    
    bool a; // These are the variable members.
    bool b; // Mostly you will call functions as just functions and not members, but technically it's correct.
}; // This semicolon is important!!!

namespace myNamespace {
    struct Person {
        std::string name; // = "Thomas"
        int age; // = 42
        float height; // = 180 // in cm
        bool is_alive; // = true
    }; // This semicolon is important!!!
}
```

## 3. Task
Your task is to:
 - Make your own class doubleInt (Which should contain and manage two ints)
 - Add constructors, destructors, getters, and setters
 - Set the first int to 18 and the second to 2^16
 - Return the second int of your class.

 > Note that to raise any number x to any power y you need to include <math> and use pow(x, y)

 > Read the challenge first before running your script.

## 4. Challenge

Predict the output of your program (The return code)

## 5. Tease
In the next tutorial you will get the last few basic pieces of knowledge. Loops, conditionals, and printf. Then you will finally be able to write Turing Complete.