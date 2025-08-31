insert, emplace, erase, clear, swap
find, count, lower_bound, upper_bound
begin, end, rbegin, rend
size, empty

#include <iostream>
#include <set> // Required for set
using namespace std;

// SET INBUILT FUNCTIONS
// A set is a container that stores unique elements in a sorted order.
// Internally implemented as a balanced binary search tree (usually Red-Black Tree).

int main() {
    // 1. Create an empty set of integers
    set<int> s;

    // 2. insert(): Adds elements to the set (duplicates are ignored)
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10); // duplicate, will not be added
    cout << "Set after insertions: ";
    for (auto x : s) cout << x << " "; // Output: 5 10 20
    cout << endl;

    // 3. size(): Returns number of elements in set
    cout << "Size of set: " << s.size() << endl;

    // 4. empty(): Returns true if set is empty
    cout << "Is set empty? " << (s.empty() ? "Yes" : "No") << endl;

    // 5. erase(value): Removes a specific value
    s.erase(10); // removes 10
    cout << "After erase(10): ";
    for (auto x : s) cout << x << " "; // Output: 5 20
    cout << endl;

    // 6. erase(iterator): Removes element at position
    auto it = s.begin(); // points to 5
    s.erase(it);
    cout << "After erase(iterator to 5): ";
    for (auto x : s) cout << x << " "; // Output: 20
    cout << endl;

    // 7. erase(start, end): Removes range of elements
    s.insert(15);
    s.insert(25);
    s.insert(30);
    cout << "Before erase range: ";
    for (auto x : s) cout << x << " "; // Output: 15 20 25 30
    cout << endl;
    s.erase(s.begin(), s.find(25)); // erase all elements before 25
    cout << "After erase range: ";
    for (auto x : s) cout << x << " "; // Output: 25 30
    cout << endl;

    // 8. clear(): Removes all elements
    s.clear();
    cout << "Size after clear(): " << s.size() << endl; // Output: 0

    // Re-inserting for further examples
    s.insert(100);
    s.insert(50);
    s.insert(200);
    s.insert(150);

    // 9. find(value): Returns iterator to value if exists, else s.end()
    auto it2 = s.find(150);
    if (it2 != s.end())
        cout << "Found 150 in set" << endl;
    else
        cout << "150 not found" << endl;

    // 10. count(value): Returns 1 if value exists, 0 if not
    cout << "Count of 200: " << s.count(200) << endl; // Output: 1
    cout << "Count of 300: " << s.count(300) << endl; // Output: 0

    // 11. begin() and end(): Iterators for traversal
    cout << "Elements using iterators: ";
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it << " "; // Output: 50 100 150 200
    cout << endl;

    // 12. rbegin() and rend(): Reverse iterators
    cout << "Elements in reverse: ";
    for (auto it = s.rbegin(); it != s.rend(); ++it)
        cout << *it << " "; // Output: 200 150 100 50
    cout << endl;

    // 13. lower_bound(value): Returns iterator to first element >= value
    auto lb = s.lower_bound(120); 
    if (lb != s.end()) cout << "Lower bound of 120: " << *lb << endl; // 150

    // 14. upper_bound(value): Returns iterator to first element > value
    auto ub = s.upper_bound(150);
    if (ub != s.end()) cout << "Upper bound of 150: " << *ub << endl; // 200

    // 15. swap(): Swaps contents of two sets
    set<int> s2 = {1, 2, 3};
    cout << "Before swap - s size: " << s.size() << " s2 size: " << s2.size() << endl;
    s.swap(s2);
    cout << "After swap - s: ";
    for (auto x : s) cout << x << " "; // s now has {1,2,3}
    cout << endl;
    cout << "s2: ";
    for (auto x : s2) cout << x << " "; // s2 now has {50,100,150,200}
    cout << endl;

    return 0;
}
