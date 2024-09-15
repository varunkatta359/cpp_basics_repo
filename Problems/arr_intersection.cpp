#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr1 = {1, 2, 4, 5,3,4,5};
    std::vector<int> arr2 = {4, 5, 6, 7, 8};

    std::vector<int> intersection;

    for (int i = 0; i < arr1.size(); i++) {
        for (int j = 0; j < arr2.size(); j++) {
            if (arr1[i] == arr2[j]) {
                // Check if the element is already in the intersection vector
                bool found = false;
                for (int k = 0; k < intersection.size(); k++) {
                    if (intersection[k] == arr1[i]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    intersection.push_back(arr1[i]);
                }
            }
        }
    }

    std::cout << "Intersection: ";
    for (int i : intersection) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}