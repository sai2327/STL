map stores elemts in key : value based pairs
elements are accessible by  keys not by iterators (index) each key is unique
automatically stores in a sorting way (ascending order) 
#include<map> is the stream for the maps and unordered maps
====================================================
A map is like a dictionary in real life:
  - Each word (key) has a definition (value).
  - Keys are unique and automatically stored in sorted order.
  - Implemented internally using a balanced binary search tree (Red-Black Tree).

Syntax: map<Key, Value> name;
Example: map<int,string> mp;   // key=int, value=string
=====================================================
| Function              | Use                        |
| --------------------- | -------------------------- |
| insert                | Insert key-value pair      |
| []                    | Access/modify value by key |
| at                    | Access value safely        |
| begin/end             | Forward iteration          |
| rbegin/rend           | Reverse iteration          |
| empty                 | Check if map is empty      |
| size                  | Number of elements         |
| max_size              | Max elements possible      |
| clear                 | Remove all elements        |
| erase                 | Remove by key/iterator     |
| find                  | Locate element             |
| count                 | Check existence            |
| lower_bound           | First ≥ key                |
| upper_bound           | First > key                |
| emplace               | Insert efficiently         |
| emplace_hint          | Insert with position hint  |
| swap                  | Swap two maps              |
| key_comp/value_comp   | Key/value comparator       |




#include <iostream>
#include <map>
using namespace std;

int main() {

    1. Creating an empty map
    map<int,string> mp;  // keys are int, values are string
    // Using operator[] to insert values (this also creates a new key if it doesn’t exist)
    mp[1] = "one";   // adds key=1 with value "one"
    mp[2] = "two";   // adds key=2 with value "two"
    cout << "Initial map (mp): ";
    for(auto p : mp) cout << p.first << " -> " << p.second << " ";
    cout << endl;
    // Output: 1->one  2->two


    2. insert() function
    mp.insert({3,"three"});   // safe way to insert
    mp.insert({4,"four"});
    cout << "After insert(): ";
    for(auto p : mp) cout << p.first << "->" << p.second << " ";
    cout << endl;
    // Output: 1->one  2->two  3->three  4->four


    3. operator[] (access and modify)
        
    mp[5] = "five";    // adds a new key=5
    mp[2] = "TWO";     // modifies existing key=2 value
    cout << "After operator[] modifications: ";
    for(auto p : mp) cout << p.first << "->" << p.second << " ";
    cout << endl;
    // Notice: key=2 now has value "TWO"


    4. at() function (safe access with bounds checking)
    cout << "Value at key 3 (using at): " << mp.at(3) << endl;
    // If you try mp.at(10), it will throw an error (std::out_of_range)
    // whereas mp[10] would silently create a new entry with empty string.


    5. begin() / end() - forward iterators
    cout << "Iterating using begin() and end(): ";
    for(auto it = mp.begin(); it != mp.end(); ++it)
        cout << it->first << "->" << it->second << " ";
    cout << endl;
    // This prints from the smallest key to the largest.


    6. rbegin() / rend() - reverse iterators
    cout << "Iterating in reverse (rbegin to rend): ";
    for(auto it = mp.rbegin(); it != mp.rend(); ++it)
        cout << it->first << "->" << it->second << " ";
    cout << endl;


    7. size() and empty()
    cout << "Size of map: " << mp.size() << endl;   // number of elements
    cout << "Is map empty? " << (mp.empty() ? "Yes":"No") << endl;


     8. count() - check if a key exists
    cout << "Does key=2 exist? " << (mp.count(2)?"Yes":"No") << endl;
    cout << "Does key=9 exist? " << (mp.count(9)?"Yes":"No") << endl;


    9. find() - locate an element
    auto it = mp.find(4); // returns iterator to key=4 if found
    if(it != mp.end())
        cout << "Found key=4 with value: " << it->second << endl;


    10. lower_bound() - first element >= key
    auto lb = mp.lower_bound(3);
    if(lb != mp.end())
        cout << "Lower bound of 3: " << lb->first << " -> " << lb->second << endl;


    11. upper_bound() - first element > key
    auto ub = mp.upper_bound(3);
    if(ub != mp.end())
        cout << "Upper bound of 3: " << ub->first << " -> " << ub->second << endl;


    12. erase() - delete by key
    mp.erase(2); // removes element with key=2
    cout << "After erase(key=2): ";
    for(auto p : mp) cout << p.first << "->" << p.second << " ";
    cout << endl;


    13. emplace() - like insert, but constructs directly (faster)
    mp.emplace(6,"six");
    cout << "After emplace(6,\"six\"): ";
    for(auto p : mp) cout << p.first << "->" << p.second << " ";
    cout << endl;


    14. emplace_hint() - suggest a position to optimize insertion
    mp.emplace_hint(mp.begin(),7,"seven");
    cout << "After emplace_hint(7,\"seven\"): ";
    for(auto p : mp) cout << p.first << "->" << p.second << " ";
    cout << endl;


    15. swap() - exchange contents of two maps
    map<int,string> mp2;
    mp2[10] = "ten"; mp2[20] = "twenty";
    mp.swap(mp2);
    cout << "After swap, mp contains: ";
    for(auto p : mp) cout << p.first << "->" << p.second << " ";
    cout << endl;


    16. clear() - erase all elements
    mp.clear();
    cout << "After clear(), size = " << mp.size() << endl;


    17. key_comp() - comparator used for ordering keys
    map<int,string> demo;
    demo[1] = "A"; demo[3] = "C"; demo[2] = "B";
    auto comp = demo.key_comp();
    cout << "Iterating with key_comp(): ";
    int last = demo.rbegin()->first; // get largest key
    for(auto it = demo.begin(); comp(it->first,last); ++it)
        cout << it->first << "->" << it->second << " ";
    cout << endl;
    // It prints until the largest key is reached, using comparator logic.

    return 0;
}

