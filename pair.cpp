//A pair is a container that holds two values (possibly of different data types).
1. p.first      // Access first element
2. p.second     // Access second element
3. make_pair(a, b) // Utility function to create a pair
int main() {
    // Declare a pair
    pair<int, string> p = {1, "Alice"};

    // Access elements
    cout << p.first << " " << p.second << endl; // Output: 1 Alice

    // Modify elements
    p.first = 2;
    p.second = "Bob";
    cout << p.first << " " << p.second << endl; // Output: 2 Bob
  
    // Using make_pair()
    auto q = make_pair(10, 3.14);
    cout << q.first << " " << q.second << endl; // Output: 10 3.14
}
//vecotr pairs:Useful when storing multiple pairs together (like coordinates, graph edges, etc.).

1. vp.push_back({a, b});   // Insert a pair
2. vp.emplace_back(a, b);  // Faster insertion (constructs in-place)
3. vp[i].first             // Access first element of ith pair
4. vp[i].second            // Access second element of ith pair
5. for(auto &it : vp)      // Range-based loop to iterate over pairs

    // Declare vector of pairs
    vector<pair<int,int>> vectorpair;

    // Insert elements
    vectorpair.push_back({1, 2});
    vectorpair.push_back({3, 4});
    vectorpair.emplace_back(5, 6);

    // Access elements
    cout << "First pair: " << vectorpair[0].first << ", " << vectorpair[0].second << endl;

    // Iterate through vector of pairs
    cout << "All pairs:\n";
    for(auto &it : vectorpair) {
        cout << it.first << " " << it.second << endl;
    }
