# GlobalDef
 > ⚠️ This file is only a general explanation of terms and does not include any challenge / tutorial.
 > ⚠️ Note that this file strictly follows **my** coding conventions

## General GlobalDef Syntax
'_<**x**>_' denotes something that **must** be replaced, where any value in category **x** can be placed in it.
<br>'_!(**x**)_' denotes something that **may** be used, but is not required, where **x** **is** a collection of the above and below statements.
<br>'_![**x**]_' denotes something that **may** be used and which place **may** be changed, where **x** **is** a collection of the above and below statements.

## Statement
### Definition
A General Word for Expression. Can be anything from calling a function to assigning a value.

### Syntax & Example
Syntax:
```
<statement>;
```
Example:
```c++
int age = 31;
```

## Definition
### Definition
Code, detailing the members and functions of some class or structure.
<br>Code, that in general **defines** something.

### Syntax & Example
Syntax:
```
<object-type> <name> !(: <access-keyword> <parent>) {
![<access-keyword>:] // e.g., public, private, friend, protected
    ![<type> <prefix>_<name><initialization-method>;] // Member definitions
    ![<type> <name>(<args...>);] // Function Forward-Declaration
    ![<Constructor / Destructor>]
    ![Struct / Class Definition]
};
```
Example:
```c++
class someClass {
public:
    someClass() = default;
    int* get_member();
private:
    int _some_member = 0;
}
```

## Forward Declaration (Declaration)
### Definition
A line of code detailing that some structure, class or function does exist but is not yet defined.

### Syntax & Example
Syntax:
```
<definition>;
```
Example:
```c++
int time();
```

## Variable
### Definition
A **named** object of some **type** with some **value**

### Syntax & Examples
Syntax:
```
<type> <name><initialization>;
```
Examples:
```c++
int age = 31;
```

```c++
int age(31);
```

## Initialization
### Definition
The process of converting an invalid-undefined value into a valid-defined value.

### Syntax & Example
Syntax:
```
<Variable Definition>
```

Example:
```c++
int a; // A is unset, and thus undefined
a = 0; // A is initialized here
```