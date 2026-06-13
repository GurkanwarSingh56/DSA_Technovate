/*
Problem Statement:
Calculate Sum of Array Elements.

Input:
First line: integer n (size of array)
Second line: n space-separated integers

Output:
Print the sum of all elements in the array
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to calculate sum of array elements
int calculateSum(const vector<int>& arr) {
    int sum = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    
    return sum;
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

    int result = calculateSum(arr);
    cout << result;

    return 0;
}


/*
Input:
4
10 20 11 30
Output:
71
*/