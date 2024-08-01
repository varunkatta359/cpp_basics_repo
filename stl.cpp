#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 3, 1, 4, 2};
    
    std::sort(vec.begin(), vec.end());
    
    for (int num : vec) {
        std::cout << num << " ";
    }


    for (int i=0;i<vec.size();i++){
        std::cout << vec[i] << " ";
    }
    return 0;
}
