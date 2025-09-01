insert, emplace, erase, clear, swap
find, count, lower_bound, upper_bound
begin, end, rbegin, rend
size, empty

1. set<int> s; //Declares an empty set of integers (stores unique elements in sorted order).

--- Modifiers ---
2. s.insert(value); //Inserts value if not present. Duplicate values are ignored.
3. s.emplace(value); //Constructs and inserts value (faster than insert for complex types).
4. s.erase(value); //Removes value if it exists, does nothing if not found.
5. s.erase(iterator); //Removes element at given iterator position.
6. s.erase(first, last); //Removes all elements in range [first, last).
7. s.clear(); //Removes all elements, making the set empty.
8. s.swap(other_set); //Swaps contents with another set in O(1) time.

--- Lookup ---
9. s.find(value); //Returns iterator to value if found, else returns s.end().
10. s.count(value); //Returns 1 if value exists, else 0.
11. s.lower_bound(value); //Returns iterator to first element >= value, else s.end().
12. s.upper_bound(value); //Returns iterator to first element > value, else s.end().
13. s.equal_range(value); //Returns pair of iterators {lower_bound, upper_bound}.

--- Iterators ---
14. s.begin(); //Iterator to first (smallest) element.
15. s.end(); //Iterator to position after last element (invalid to dereference).
16. s.rbegin(); //Reverse iterator to last (largest) element.
17. s.rend(); //Reverse iterator to position before first element.
18. s.cbegin(); //Constant iterator to first element (read-only).
19. s.cend(); //Constant iterator to position after last element.
20. s.crbegin(); //Constant reverse iterator to last element.
21. s.crend(); //Constant reverse iterator to before first element.

--- Capacity ---
22. s.size(); //Returns number of elements in the set.
23. s.empty(); //Returns true if set is empty, false otherwise.
24. s.max_size(); //Returns maximum elements the set can theoretically hold.

--- Observers ---
25. s.key_comp(); //Returns comparison function used for ordering keys.
26. s.value_comp(); //Returns comparison function used for ordering values (same as key_comp).

--- Allocator ---
27. s.get_allocator(); //Returns the allocator object used by the set.


C++ STL Set Functions
----------------------
A set is an ordered container that stores unique elements.
Internally implemented as a Balanced Binary Search Tree (Red-Black Tree).
Elements are automatically sorted in ascending order.
Duplicates are NOT allowed (unlike multiset).

#include <iostream>
#include <set> // Required for set
using namespace std;

int main() {
    
    1. Create an empty set of integers
    set<int> s; // initially empty


    2. insert(): Adds elements to the set
    // Note: If an element already exists, duplicate insertion is ignored.
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10); // duplicate → ignored
    cout << "Set after insertions: ";
    for (auto x : s) cout << x << " "; // Output: 5 10 20 (sorted automatically)
    cout << endl;


    3. size(): Returns number of elements present in the set
    cout << "Size of set: " << s.size() << endl;


    4. empty(): Checks whether set is empty
    cout << "Is set empty? " << (s.empty() ? "Yes" : "No") << endl;


     5. erase(value): Removes element if present
    s.erase(10); // deletes 10
    cout << "After erase(10): ";
    for (auto x : s) cout << x << " "; // Output: 5 20
    cout << endl;


    6. erase(iterator): Removes element at given iterator
    auto it = s.begin(); // s.begin() points to smallest element (5 here)
    s.erase(it); // removes 5
    cout << "After erase(iterator to 5): ";
    for (auto x : s) cout << x << " "; // Output: 20
    cout << endl;


    7. erase(start, end): Removes elements in range [start, end)
    s.insert(15);
    s.insert(25);
    s.insert(30);
    cout << "Before erase range: ";
    for (auto x : s) cout << x << " "; // Output: 15 20 25 30
    cout << endl;
    s.erase(s.begin(), s.find(25)); 
    // removes elements from beginning till element before 25
    cout << "After erase range: ";
    for (auto x : s) cout << x << " "; // Output: 25 30
    cout << endl;


    8. clear(): Removes all elements
    s.clear();
    cout << "Size after clear(): " << s.size() << endl; // Output: 0

    // Re-inserting elements for next operations
    s.insert(100);
    s.insert(50);
    s.insert(200);
    s.insert(150);


 9. find(value): Returns iterator to element if found, else s.end()
    auto it2 = s.find(150);
    if (it2 != s.end())
        cout << "Found 150 in set" << endl;
    else
        cout << "150 not found" << endl;


    10. count(value): Since set stores unique values, result is either 0 or 1
    cout << "Count of 200: " << s.count(200) << endl; // Output: 1 (present)
    cout << "Count of 300: " << s.count(300) << endl; // Output: 0 (absent)


    11. begin() and end(): Iterators for traversal
    cout << "Elements using iterators: ";
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it << " "; // Output: 50 100 150 200
    cout << endl;


    12. rbegin() and rend(): Reverse iterators
    cout << "Elements in reverse: ";
    for (auto it = s.rbegin(); it != s.rend(); ++it)
        cout << *it << " "; // Output: 200 150 100 50
    cout << endl;


    13. lower_bound(value): Returns first element >= value
    auto lb = s.lower_bound(120);
    if (lb != s.end())
        cout << "Lower bound of 120: " << *lb << endl; // Output: 150
    else
        cout << "No element >= 120 found" << endl;


    14. upper_bound(value): Returns first element > value
    auto ub = s.upper_bound(150);
    if (ub != s.end())
        cout << "Upper bound of 150: " << *ub << endl; // Output: 200
    else
        cout << "No element > 150 found" << endl;

    
    15. swap(): Swaps contents of two sets
    set<int> s2 = {1, 2, 3};
    cout << "Before swap - s size: " << s.size() << " s2 size: " << s2.size() << endl;
    s.swap(s2); // exchange elements between s and s2

    cout << "After swap - s: ";
    for (auto x : s) cout << x << " "; // Output: 1 2 3
    cout << endl;

    cout << "s2: ";
    for (auto x : s2) cout << x << " "; // Output: 50 100 150 200
    cout << endl;

    return 0;
}

