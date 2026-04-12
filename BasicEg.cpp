/*Wap to take input of array using classes*/
#include <iostream>
#include <vector>
using namespace std;

class Array {
private:
    std::vector<int> arr;
public:
    void input() {
        int n;
        std::cout << "Enter the number of elements: ";
        std::cin >> n;
        arr.resize(n);
        std::cout << "Enter the elements: ";
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
    }
    void display() {
        std::cout << "Elements in the array are: ";
        for (const auto& element : arr) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
};
int main() {
    Array myArray;
    myArray.input();
    myArray.display();
    return 0;
}