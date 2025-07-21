// Stack in STL 
// stack_stl_functions.cpp
// Stack Inbuilt Functions - C++ STL

/*
A stack is a linear data structure that follows Last In First Out (LIFO) principle.
The C++ STL provides a built-in stack container adapter that operates on top of other containers like deque or vector.

Declaration:
    #include <stack>
    using namespace std;
    stack<datatype> s; // Creates an empty stack of specified datatype
    
 Common Functions in Stack:
| Function         | Description                                                   |
|------------------|---------------------------------------------------------------|
| s.push(value)    | Inserts an element at the top of the stack                    |
| s.pop()          | Removes the top element (does not return it)                  |
| s.top()          | Returns a reference to the top element                        |
| s.empty()        | Returns true if the stack is empty                            |
| s.size()         | Returns the number of elements in the stack                   |
| stack<T> s2(s1)  | Copy constructor: Copies all elements from s1 to s2           |
| swap(s1, s2)     | Swaps contents of two stacks                                  |
*/

#include <iostream>
#include <stack>
using namespace std;

int main() {

    // Create an empty stack
    stack<int> s; // stack<datatype> s;

    //  s.push(value) - Inserts an element at the top of the stack
    s.push(10);
    s.push(20);
    s.push(30); // Stack: 30 (top), 20, 10

    //  s.top() - Returns a reference to the top element
    cout << "Top element: " << s.top() << endl; // Output: 30

    //  s.pop() - Removes the top element (does not return it)
    s.pop(); // Removes 30
    cout << "After pop, new top: " << s.top() << endl; // Output: 20

    //  s.size() - Returns number of elements in the stack
    cout << "Current size: " << s.size() << endl; // Output: 2

    //  s.empty() - Returns true if stack is empty
    cout << "Is stack empty?: " << (s.empty() ? "Yes" : "No") << endl; // Output: No

    //  Displaying all elements by popping (LIFO order)
    cout << "Stack elements (LIFO): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    //  stack<T> s2(s1) - Copy constructor
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3); // s1: 3 (top), 2, 1

    stack<int> s2(s1); // Create a copy of s1
    cout << "Top of copied stack s2: " << s2.top() << endl; // Output: 3

    //  swap(s1, s2) - Swaps contents of two stacks
    stack<int> s3;
    s3.push(100);
    s3.push(200); // s3: 200 (top), 100

    s1.swap(s3); // Now s1 has 200, 100 and s3 has 3, 2, 1

    cout << "After swap, top of s1: " << s1.top() << endl; // Output: 200
    cout << "After swap, top of s3: " << s3.top() << endl; // Output: 3

    return 0;
}
