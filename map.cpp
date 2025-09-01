map stores elemts in key : value based pairs
elements are accessible by  keys not by iterators (index) each key is unique
automatically stores in a sorting way (ascending order) 
#include<map> is the stream for the maps and unordered maps

| Function              | Use                        |
| --------------------- | -------------------------- |
| insert                | Insert key-value pair      |
| \[]                   | Access/modify value by key |
| at                    | Access value safely        |
| begin/end             | Forward iteration          |
| rbegin/rend           | Reverse iteration          |
| empty                 | Check if map is empty      |
| size                  | Number of elements         |
| max\_size             | Max elements possible      |
| clear                 | Remove all elements        |
| erase                 | Remove by key/iterator     |
| find                  | Locate element             |
| count                 | Check existence            |
| lower\_bound          | First ≥ key                |
| upper\_bound          | First > key                |
| emplace               | Insert efficiently         |
| emplace\_hint         | Insert with position hint  |
| swap                  | Swap two maps              |
| key\_comp/value\_comp | Key/value comparator       |
