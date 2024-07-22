STL: vector

1. Declare a vector with Initialization and print the elements.
2. Declare a vector without initialization, insert some elements and print
3. Write a function to print the element of a vector and take input from the user.
4. Write a program to Copy one vector’s elements to another vector.
5. Find largest and smallest elements in a vector
6. Write a program to reverse vector elements
7. Write a program to find sum of vector elements
8. Write a program to find common elements between two vectors.
9. Write a program to Push and print elements in a float vector
10. Write a program to check whether an element exists in a vector or not.

Solution:-

1. #include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "Vector elements: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

2. #include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    std::cout << "Vector elements: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

3. #include <iostream>
#include <vector>

void printVector(const std::vector<int>& vec) {
    std::cout << "Vector elements: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec;
    int n, element;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> element;
        vec.push_back(element);
    }

    printVector(vec);

    return 0;
}

4. #include <iostream>
#include <vector>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = vec1;  // Copy elements from vec1 to vec2

    std::cout << "Elements of vec2: ";
    for (const auto& elem : vec2) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

5. #include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 5, 25, 15};

    auto minMaxPair = std::minmax_element(vec.begin(), vec.end());

    std::cout << "Smallest element: " << *minMaxPair.first << std::endl;
    std::cout << "Largest element: " << *minMaxPair.second << std::endl;

    return 0;
}

6. #include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::reverse(vec.begin(), vec.end());

    std::cout << "Reversed vector elements: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

7. #include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    int sum = std::accumulate(vec.begin(), vec.end(), 0);

    std::cout << "Sum of vector elements: " << sum << std::endl;

    return 0;
}

8. #include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {3, 4, 5, 6, 7};
    std::vector<int> commonElements;

    std::sort(vec1.begin(), vec1.end());
    std::sort(vec2.begin(), vec2.end());

    std::set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::back_inserter(commonElements));

    std::cout << "Common elements: ";
    for (const auto& elem : commonElements) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

9. #include <iostream>
#include <vector>

int main() {
    std::vector<float> vec;

    vec.push_back(1.1f);
    vec.push_back(2.2f);
    vec.push_back(3.3f);

    std::cout << "Float vector elements: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

10. #include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int elementToFind = 3;

    if (std::find(vec.begin(), vec.end(), elementToFind) != vec.end()) {
        std::cout << "Element " << elementToFind << " exists in the vector." << std::endl;
    } else {
        std::cout << "Element " << elementToFind << " does not exist in the vector." << std::endl;
    }

    return 0;
}
