# multi
Better multi-dimensional arrays and vectors for C++11 and C++14


Why do this:
```c++
std::array<std::array<int, 2>, 2> cpp11_array = {{ {0,1}, {2,3}  }};
std::vector<std::vector<int>> cpp11_vector = { {0,1}, {2,3}  };
```
When you can do this:
```c++
multi::array<int, 2, 2> new_array = {{ {0,1}, {2,3} }};
multi::vector<int, 2> new_vector = { {0,1}, {2,3}  };
```

Extremely light weight header only implementation using alias templates.

Just use:
```c++
#include <multi/multi.hpp>
```

## Platforms
Tested on clang++-4.6


## Blog
http://blog.brainstembreakfast.com/update/c++/2015/04/15/multi-array-multi-vector-sfinae/
