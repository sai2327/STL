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
 */   
|       Function           | **Description**                                                                   |
| ------------------------ | --------------------------------------------------------------------------------- |
| s.push(value)          | Inserts `value` at the **top** of the stack.                                      |
| s.pop()                | Removes the **top** element (does **not** return it).                             |
| s.top()                | Returns a **reference** to the top element of the stack.                          |
| s.empty()              | Returns `true` if the stack is **empty**, else `false`.                           |
| s.size()               | Returns the **number of elements** in the stack.                                  |
| stack<T> s;            | Creates an **empty stack** of type `T`.                                           |
| stack<T> s2(s1);       | **Copy constructor** – creates a new stack `s2` as a copy of `s1`.                |
| s1 = s2;               | **Copy assignment** – assigns contents of `s2` to `s1`.                           |
| stack<T> s(move(s1));  | **Move constructor** – moves contents from `s1` to `s`. *(C++11+)*                |
| s1 = move(s2);         | **Move assignment** – moves `s2` into `s1`. *(C++11+)*                            |
| s.emplace(args...)     | Constructs and inserts an element at the top **in-place**. *(C++11+)*             |
| s1.swap(s2)            | Swaps contents of two stacks. *(Member function)*                                 |
| swap(s1, s2)           | Swaps two stacks using the **non-member** function from `<utility>`.              |
| stack<T, Container> s; | Declare a stack using a specific **underlying container** (`deque`, `list`, etc.) |

#include <iostream>
#include <stack>      // for stack
#include <utility>    // for std::swap
using namespace std;

int main() {
    // 1. Declare a stack
    stack<int> s;

    // 2. push(value) - Insert elements
    s.push(10);
    s.push(20);
    s.push(30);

    // 3. top() - Access top element
    cout << "Top element: " << s.top() << endl; // Output: 30

    // 4. pop() - Remove top element
    s.pop();
    cout << "Top after pop: " << s.top() << endl; // Output: 20

    // 5. size() - Current size of the stack
    cout << "Size of stack: " << s.size() << endl; // Output: 2

    // 6. empty() - Check if stack is empty
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl; // Output: No

    // 7. emplace(value) - Construct element in-place
    s.emplace(40);
    cout << "Top after emplace: " << s.top() << endl; // Output: 40

    // 8. Copy constructor
    stack<int> copyStack(s);
    cout << "Top of copyStack: " << copyStack.top() << endl; // Output: 40

    // 9. Copy assignment
    stack<int> assignedStack;
    assignedStack = copyStack;
    cout << "Top of assignedStack: " << assignedStack.top() << endl; // Output: 40

    // 10. Move constructor (C++11)
    stack<int> movedStack(move(copyStack));
    cout << "Top of movedStack: " << movedStack.top() << endl; // Output: 40

    // 11. Move assignment (C++11)
    stack<int> moveAssigned;
    moveAssigned = move(assignedStack);
    cout << "Top of moveAssigned: " << moveAssigned.top() << endl; // Output: 40

    // 12. swap() - Member function
    stack<int> stackA, stackB;
    stackA.push(1); stackA.push(2);
    stackB.push(100); stackB.push(200);

    stackA.swap(stackB);
    cout << "Top of stackA after swap(): " << stackA.top() << endl; // Output: 200

    // 13. std::swap() - Non-member function
    std::swap(stackA, stackB);
    cout << "Top of stackA after std::swap(): " << stackA.top() << endl; // Output: 2

    return 0;
}
    
❌ Not Applicable:
begin(), end(), [], insert(), erase() — These are not available in std::stack since it's a container adapter, not a sequence container.
