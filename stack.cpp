// Stack in STL 
// stack_stl_functions.cpp
// Stack Inbuilt Functions - C++ STL

A stack is a linear data structure that follows Last In First Out (LIFO) principle.
The C++ STL provides a built-in stack container adapter that operates on top of other containers like deque or vector.

Declaration:
    #include <stack>
    using namespace std;
    stack<datatype> s; // Creates an empty stack of specified datatype

1. stack<int> s;              // Declares an empty stack of integers (LIFO: Last In, First Out)

--- Modifiers ---
2. s.push(value);             // Inserts an element at the top of the stack
3. s.emplace(value);          // Constructs and inserts an element at the top (faster for complex types)
4. s.pop();                   // Removes the top element (does not return it)
5. s.swap(other_stack);       // Member function: Swaps contents with another stack in O(1)
6. std::swap(stackA, stackB); // Non-member function: Also swaps contents of two stacks

--- Element Access ---
7. s.top();                   // Returns reference to the top element (can be read or modified)

--- Capacity ---
8. s.size();                  // Returns the number of elements in the stack
9. s.empty();                 // Returns true if stack is empty, false otherwise

--- Constructors / Assignments ---
10. stack<int> copyStack(s);               // Copy constructor: Creates a new stack as a copy of another
11. assignedStack = copyStack;             // Copy assignment: Copies one stack into another
12. stack<int> movedStack(move(copyStack));// Move constructor: Transfers contents (C++11)
13. moveAssigned = move(assignedStack);    // Move assignment: Moves contents into another stack (C++11)

#include <iostream>
#include <stack>   // Required for using stack
using namespace std;

int main() {

    1. Declare a stack (LIFO: Last In, First Out)
    stack<int> s;

    2. push(value) - Insert elements into the stack (goes to the "top")
    s.push(10); // Stack: [10]
    s.push(20); // Stack: [10, 20]
    s.push(30); // Stack: [10, 20, 30]


    3. top() - Access the element at the top (last inserted)
    cout << "Top element: " << s.top() << endl; // Output: 30


    4. pop() - Remove the top element (last inserted one goes out first)
    s.pop(); // Removes 30 → Stack: [10, 20]
    cout << "Top after pop: " << s.top() << endl; // Output: 20


    5. size() - Get the current number of elements in the stack
    cout << "Size of stack: " << s.size() << endl; // Output: 2


    6. empty() - Check whether the stack is empty or not
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl; // Output: No


    7. emplace(value) - Insert element directly at top (more efficient than push for complex types)
    s.emplace(40); // Stack: [10, 20, 40]
    cout << "Top after emplace: " << s.top() << endl; // Output: 40


    8. Copy constructor - Creates a new stack with same elements
    stack<int> copyStack(s); 
    cout << "Top of copyStack: " << copyStack.top() << endl; // Output: 40


    9. Copy assignment - Assigns one stack to another
    stack<int> assignedStack;
    assignedStack = copyStack; 
    cout << "Top of assignedStack: " << assignedStack.top() << endl; // Output: 40


    10. Move constructor (C++11) - Moves elements from one stack to another
    stack<int> movedStack(move(copyStack)); 
    cout << "Top of movedStack: " << movedStack.top() << endl; // Output: 40


    11. Move assignment (C++11) - Moves elements using assignment
    stack<int> moveAssigned;
    moveAssigned = move(assignedStack); 
    cout << "Top of moveAssigned: " << moveAssigned.top() << endl; // Output: 40


    12. swap() - Swap elements of two stacks (member function)
    stack<int> stackA, stackB;
    stackA.push(1); stackA.push(2);       // stackA: [1, 2]
    stackB.push(100); stackB.push(200);   // stackB: [100, 200]

    stackA.swap(stackB); 
    // Now stackA: [100, 200], stackB: [1, 2]
    cout << "Top of stackA after swap(): " << stackA.top() << endl; // Output: 200

    
    13. std::swap() - Another way to swap two stacks (non-member function)
    std::swap(stackA, stackB); 
    // Now stackA: [1, 2], stackB: [100, 200]
    cout << "Top of stackA after std::swap(): " << stackA.top() << endl; // Output: 2

    return 0;
}

    
❌ Not Applicable:
begin(), end(), [], insert(), erase() — These are not available in std::stack since it's a container adapter, not a sequence container.
