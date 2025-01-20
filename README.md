# justcsv
C++20 CSV(Character Separated Values) headre only writer


## example

code
```c++
#include "justcvs.hpp"
#include <ofstream>
#include <vector>

struct material{
    int id;
    std::string name;
    float density;
    float conductivity;
    float melting;
};

int main(){
    const std::vector<material> materials = {
        {0, "silver"  , 10.5, 62.9,  960},
        {1, "gold"    , 19.3, 42.6, 1063},
        {2, "copper"  ,  8.9, 57.5, 1083},
        {3, "alminium",  2.7, 32.9,  660}
    };
    std::ofstream ofs("out.csv");
    ofs << jcsv::format(materials, jcsv::cfg{.split = ',', .header = true}) << std::endl;
    ofs.close();
}
```

output
```
id,name,density,conductivity,melting
0,silver,10.5,62.9,960
1,gold,19.3,42.6,1063
2,copper,8.9,57.5,1083
3,alminium,2.7,32.9,660

```