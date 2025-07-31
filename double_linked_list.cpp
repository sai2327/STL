//it is often used more than forword_list in cpp
     Function         Description                      
| --------------- | ------------------------------------ |
| push_back(val)  | Insert at end                        |
| push_front(val) | Insert at front                      |
| pop_back()      | Remove from end                      |
| pop_front()     | Remove from front                    |
| insert(it, val) | Insert before iterator               |
| erase(it)       | Erase element at iterator            |
| size()          | Number of elements                   |
| empty()         | Check if list is empty               |
| clear()         | Remove all elements                  |
| front()         | First element                        |
| back()          | Last element                         |
| remove(val)     | Remove all elements with given value |
| sort()          | Sort elements                        |
| reverse()       | Reverse order of elements            |
| unique()        | Remove consecutive duplicates        |
| merge(list2)    | Merge two sorted lists               |
| swap(list2)     | Swap contents with another list      |

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {10, 20, 30};

    // 1. push_back() – add at end
    l.push_back(40); // {10, 20, 30, 40}

    // 2. push_front() – add at front
    l.push_front(5); // {5, 10, 20, 30, 40}

    // 3. pop_back() – remove from end
    l.pop_back(); // {5, 10, 20, 30}

    // 4. pop_front() – remove from front
    l.pop_front(); // {10, 20, 30}

    // 5. insert() – insert before iterator
    auto it = l.begin();
    advance(it, 1); // move iterator to second position
    l.insert(it, 15); // {10, 15, 20, 30}

    // 6. erase() – remove element at iterator
    it = l.begin();
    advance(it, 2); // move to 20
    l.erase(it); // {10, 15, 30}

    // 7. size() – number of elements
    cout << "Size: " << l.size() << endl;

    // 8. empty() – check if list is empty
    cout << "Is empty? " << l.empty() << endl;

    // 9. clear() – removes all elements
    list<int> temp = l;
    temp.clear();
    cout << "After clear(), size: " << temp.size() << endl;

    // 10. front() – get first element
    cout << "Front: " << l.front() << endl;

    // 11. back() – get last element
    cout << "Back: " << l.back() << endl;

    // 12. remove(val) – remove all matching values
    l.push_back(15);
    l.remove(15); // remove all 15s → {10, 30}

    // 13. sort() – sort elements
    l.push_back(25);
    l.push_back(5);
    l.sort(); // {5, 10, 25, 30}

    // 14. reverse() – reverse list
    l.reverse(); // {30, 25, 10, 5}

    // 15. unique() – remove consecutive duplicates
    l.push_back(5);
    l.push_back(5);
    l.unique(); // {30, 25, 10, 5, 5} → {30, 25, 10, 5}

    // 16. merge(list2) – merge sorted lists
    list<int> l2 = {1, 2, 35};
    l.sort();     // {5, 10, 25, 30}
    l2.sort();    // {1, 2, 35}
    l.merge(l2);  // l = {1, 2, 5, 10, 25, 30, 35}, l2 = empty

    // 17. swap(list2) – swap contents
    list<int> l3 = {100, 200};
    l.swap(l3); // l = {100, 200}, l3 = {1, 2, 5, 10, 25, 30, 35}

    //  Display final lists
    cout << "List l: ";
    for (int x : l) cout << x << " ";
    cout << "\nList l3: ";
    for (int x : l3) cout << x << " ";
    cout << endl;
    return 0;
}
