/*
Problem Statement:
Find the minimum element in an array.

Input:
First line: integer n (size of array)
Second line: n space-separated integers

Output:
Print the minimum element in the array
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to find minimum element in array
int findMinElement(const vector<int>& arr) {
    int minElement = arr[0];
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    
    return minElement;
}

int main() {
    int n;
    cin >> n;

    // Edge case: if array is empty
    if (n == 0) {
        return 0;
    }

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findMinElement(arr);
    cout << result;

    return 0;
}


/*
Input:
5
16 10 3 22 19
Output:
3
*/