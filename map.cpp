map stores elemts in key : value based pairs
elements are accessible by  keys not by iterators (index) each key is unique
automatically stores in a sorting way (ascending order) 
#include<map> is the stream for the maps and unordered maps

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

declaration of the the maps: map<key:value>mp;
1. insert() -> mp.insert({1,"one"}); //inserting using operator
2. [] operator-> mp[2]="two"; //insering using operator

