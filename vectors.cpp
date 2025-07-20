//vector inbuilt functions
//vector is like a dynamic memory allocation of an array that can resize itself
vector<datatype>vec; //This declares an empty vector vec that can hold elements of datatype. Its initial size is 0.
vector<datatype>vec(n,0); //This declares a vector vec of size n, and initializes all n elements to 0. You can replace 0 with any other default value you want.
for(auto it:vec) cout<<it<<endl;
cout<<vec.front();  //gets the first element of the vector or can store in another variable by using front()
Example: int first_val=vec.front();
cout<<vec.back();   //gets the last element from the vector
Example: int lastval=vec.back();
//at() will throw an std::out_of_range exception, which can help in debugging. vec[index] does not perform bounds checking, leading to undefined behavior if the index is invalid.
cout<<vec.at(index); //it is same as the vec[index] it is also used to change the access.
vec.push_back(value) //adds the value at the last of vector  If the vector's current capacity is not enough to accommodate the new element, push_back() will automatically reallocate memory
vec.pop_back();    //Removes the last element from the vector. This reduces the vector's size by one. Note that it doesn't return the removed element
vec.size();       //Returns the number of elements currently in the vector.
vec.capacity();   //Returns the total number of elements the vector can hold without reallocating memory. This value is often greater than or equal to size()
vec.empty();      //Returns true if the vector has no elements and false otherwise.
vec.clear();    //Removes all elements from the vector, making it empty. The capacity() typically remains unchanged, but the size() becomes 0
vec.erase(position); //Removes the element at position. position is an iterator. This can also be computationally expensive.
vec.erase(vec.begin() + index) //removes one element at that index.
vec.erase(start, end) //removes a range: from start to just before end.
//erase function can't be used by index at a position but by vec.begin()+index value
vec.insert(position,value); //Inserts value before the element at position. position is an iterator. This can be computationally expensive as it may require shifting all subsequent elements.
vec.begin();     //Returns an iterator to the first element of the vector. Used for iterating through the vector.
vec.end();       //Returns an iterator to the theoretical element after the last element of the vector. Used to mark the end of iteration.
//while using begin() and end() functions we use auto as data type as it is used to as a pointer in cpp and the functions return address of elements
Example: auto it = vec.begin(); // points to first element in the vector
for(auto it = vec.begin(); it != vec.end(); ++it)  cout << *it << " ";
assign(count, value): //Assigns count copies of value to the vector, replacing its current contents. where it takes the integer values as count and value
assign(first, last): //Assigns elements from an iterator range [first, last) to the vector, replacing its current contents. where it takes the pointers as first and last
    vector<int> vec;
    vec.assign(5, 10); // assigns five 10s: {10, 10, 10, 10, 10}
    
    vector<int> source = {1, 2, 3, 4, 5};
    vector<int> vec;
    vec.assign(source.begin() + 1, source.begin() + 4); // {2, 3, 4}
vector<int> v1 = {1, 2, 3};

// resize(5): Increases size to 5. New elements are initialized to 0.
v1.resize(5);           // v1 becomes: {1, 2, 3, 0, 0}
// resize(7, 9): Increases size to 7. New elements initialized to 9.
v1.resize(7, 9);        // v1 becomes: {1, 2, 3, 0, 0, 9, 9}
vector<int> v2 = {10, 20};
// swap(): Exchanges contents of v1 and v2.
v1.swap(v2);            // Now v1 = {10, 20}, v2 = {1, 2, 3, 0, 0, 9, 9}
// emplace_back(): Constructs and inserts an element at the end.
// More efficient than push_back for complex types.
v1.emplace_back(30);    // v1 becomes: {10, 20, 30}

#include <iostream>
#include <vector>
using namespace std;

// VECTOR INBUILT FUNCTIONS

int main() {

    // 1. Empty vector
    vector<int> vec1;
    vec1.push_back(5);
    vec1.push_back(10);
    cout << "vec1: ";
    for(auto x : vec1) cout << x << " "; // Output: 5 10
    cout << endl;

    // 2. Vector of size n initialized to 0
    vector<int> vec2(4, 0); // {0, 0, 0, 0}
    cout << "vec2: ";
    for(auto x : vec2) cout << x << " ";
    cout << endl;

    // 3. front() and back()
    cout << "Front: " << vec1.front() << endl; // 5
    cout << "Back: " << vec1.back() << endl;   // 10

    // 4. at(index) vs []
    cout << "vec1.at(1): " << vec1.at(1) << endl; // 10
    cout << "vec1[0]: " << vec1[0] << endl;       // 5

    // 5. push_back and pop_back
    vec1.push_back(15); // {5, 10, 15}
    vec1.pop_back();    // back to {5, 10}

    // 6. size(), capacity(), empty()
    cout << "Size: " << vec1.size() << endl;
    cout << "Empty?: " << vec1.empty() << endl;

    // 7. clear()
    vec2.clear(); // now vec2 is empty
    cout << "vec2 size after clear: " << vec2.size() << endl;

    // 8. erase(index) and erase(start, end)
    vector<int> vec3 = {1, 2, 3, 4, 5};
    vec3.erase(vec3.begin() + 2); // erase element at index 2 (3)
    cout << "After erase index 2: ";
    for(auto x : vec3) cout << x << " "; // Output: 1 2 4 5
    cout << endl;

    vec3.erase(vec3.begin(), vec3.begin() + 2); // erase first 2 elements
    cout << "After erase first 2 elements: ";
    for(auto x : vec3) cout << x << " "; // Output: 4 5
    cout << endl;

    // 9. insert()
    vec3.insert(vec3.begin() + 1, 99); // Insert 99 at index 1
    cout << "After insert: ";
    for(auto x : vec3) cout << x << " "; // Output: 4 99 5
    cout << endl;

    // 10. begin() and end()
    cout << "Using iterators: ";
    for(auto it = vec3.begin(); it != vec3.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // 11. data()
    vector<int> vec4 = {7, 8, 9};
    int* ptr = vec4.data();
    cout << "Using data(): ";
    for(int i = 0; i < vec4.size(); ++i)
        cout << *(ptr + i) << " "; // Output: 7 8 9
    cout << endl;

    // 12. assign(count, value)
    vector<int> vec5;
    vec5.assign(4, 100); // {100, 100, 100, 100}
    cout << "After assign(count, value): ";
    for(int x : vec5) cout << x << " ";
    cout << endl;

    // 13. assign(first, last)
    vector<int> source = {1, 2, 3, 4, 5};
    vec5.assign(source.begin() + 1, source.begin() + 4); // {2, 3, 4}
    cout << "After assign(first, last): ";
    for(int x : vec5) cout << x << " ";
    cout << endl;

    return 0;
}
