//string is a inbuilt data type in cpp 
//string is used as a character in c but in cpp it is treated as a inbuilt function
//It is included in cpp header file as #include<string>
//intitialisation 
string s;
Common Functions in String:
1. length() or size() : returns the number of characters in the string
2. empty() : returns true if the string is empty
3. clear() : clears all characters from the string
4. append() : appends another string to the end
5. + (operator) : concatenates two strings
6. push_back(char) : appends a character at the end
7. pop_back() : removes the last character
8. front() : returns the first character
9. back() : returns the last character
10. at(index) : returns the character at the given index
11. substr(pos, len) : returns a substring from position pos of length len
12. insert(pos, str) : inserts the string str at position pos
13. erase(pos, len) : erases len characters starting from position pos
14. replace(pos, len, str) : replaces part of the string with str
15. find(str) : returns index of the first occurrence of str
16. rfind(str) : returns index of the last occurrence of str
17. compare(str) : compares two strings lexicographically (returns 0 if equal)
18. swap(str2) : swaps the contents with str2
19. resize(n) : changes the size of the string to n
20. reserve(n) : reserves internal storage (capacity) of at least n
21. shrink_to_fit() : reduces the capacity to match the current size

example for above functions 

#include <iostream>
#include <string>
using namespace std;
int main() {
    // Declare string
    string str = "Hello";
    string str2 = "World";
    // 1. length() or size(): returns number of characters
    cout << "Length: " << str.length() << endl;  // Output: 5
    cout << "Size: " << str.size() << endl;      // Output: 5
    // 2. empty(): checks if string is empty
    cout << "Is empty?: " << str.empty() << endl; // Output: 0 (false)
    // 3. clear(): removes all characters
    str2.clear();
    cout << "str2 after clear: '" << str2 << "'" << endl; // Output: (empty string)
    // Reset str2
    str2 = "World";
    // 4. append(): adds another string to end
    str.append(" " + str2); // "Hello World"
    cout << "After append: " << str << endl;
    // 5. + operator: string concatenation
    string combined = str + "!!!"; // "Hello World!!!"
    cout << "After + : " << combined << endl;
    // 6. push_back(char): add character to end
    str.push_back('!');
    cout << "After push_back: " << str << endl;
    // 7. pop_back(): removes last character
    str.pop_back();
    cout << "After pop_back: " << str << endl;
    // 8. front(): first character
    cout << "First char (front): " << str.front() << endl; // Output: H
    // 9. back(): last character
    cout << "Last char (back): " << str.back() << endl; // Output: d
    // 10. at(index): character at index with bounds checking
    cout << "Character at index 1 (at): " << str.at(1) << endl; // Output: e
    // 11. substr(pos, len): substring from pos of length len
    cout << "Substring from index 6, length 5: " << str.substr(6, 5) << endl; // Output: World
    // 12. insert(pos, str): insert string at index
    str.insert(5, ",");
    cout << "After insert: " << str << endl; // Output: Hello, World
    // 13. erase(pos, len): remove substring from pos
    str.erase(5, 1);
    cout << "After erase: " << str << endl; // Output: Hello World
    // 14. replace(pos, len, str): replace substring with another
    str.replace(6, 5, "C++"); // Replace "World" with "C++"
    cout << "After replace: " << str << endl; // Output: Hello C++
    // 15. find(str): index of first occurrence
    cout << "find('C++'): " << str.find("C++") << endl; // Output: 6
    // 16. rfind(str): index of last occurrence
    cout << "rfind('l'): " << str.rfind("l") << endl; // Output: 3
    // 17. compare(str): compare two strings
    string a = "apple", b = "banana";
    cout << "Compare apple vs banana: " << a.compare(b) << endl; // Output: negative value (because apple < banana)
    // 18. swap(str2): exchange contents with another string
    string s1 = "first", s2 = "second";
    s1.swap(s2);
    cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << endl; // Output: s1 = second, s2 = first
    // 19. resize(n): change string size (truncate or pad with null chars)
    str.resize(5); // Shorten "Hello C++" to "Hello"
    cout << "After resize: " << str << endl;
    // 20. reserve(n): reserve memory (no visible effect)
    str.reserve(100); // Allocate space for at least 100 characters
    cout << "Reserved capacity (not printed directly)." << endl;
    // 21. shrink_to_fit(): reduce capacity to size
    str.shrink_to_fit();
    cout << "Shrunk capacity to fit size (not printed directly)." << endl;
    return 0;
}
sorting of a number in string format

sort(nums.begin(), nums.end(), [](string &a, string &b) {
            if (a.size() != b.size()) return a.size() < b.size();
            return a < b;
        });
