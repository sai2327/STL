/*A linear data structure made of nodes.
Each node has:
data: value stored.
next: pointer to the next node.*/
/*Dynamic size (memory allocated at runtime).
Insertion/Deletion at beginning/end is faster than arrays.
Elements are not stored in contiguous memory.
Supports traversal in forward direction only.
*/
push_front(val) – insert at beginning
pop_front() – delete from beginning
insert_after(it, val) – insert after given position
erase_after(it) – delete after given position
begin() / end() – get iterators
front() – first element
empty() – check if list is empty
clear() – delete all nodes
remove(val) – remove all elements equal to val
sort() – sort list
reverse() – reverse list
unique() – remove consecutive duplicates
merge(other_list) – merge sorted lists
assign(n, val) – assign n elements of val
resize(n) – resize list to n elements

#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fl = {10, 20, 30};

    fl.push_front(5);              // insert at front
    fl.pop_front();                // remove from front

    auto it = fl.begin();
    fl.insert_after(it, 15);       // insert 15 after first element
    fl.erase_after(it);            // remove element after first

    cout << "Front element: " << fl.front() << endl;  // access front
    cout << "Empty? " << fl.empty() << endl;          // check empty

    fl.assign(3, 100);             // assign 3 elements with value 100
    fl.remove(100);               // remove all elements == 100

    fl = {10, 20, 10, 30};
    fl.sort();                    // sort list
    fl.unique();                  // remove consecutive duplicates
    fl.reverse();                 // reverse list

    forward_list<int> fl2 = {5, 25};
    fl.sort(); fl2.sort();
    fl.merge(fl2);                // merge sorted lists

    fl.resize(2);                 // resize to 2 elements
    fl.clear();                   // clear all elements

    cout << "Is forward_list empty after clear? " << fl.empty() << endl;

    return 0;
}
