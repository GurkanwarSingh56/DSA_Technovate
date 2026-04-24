/*
Problem Statement:
Count Even and Odd Numbers

Input:
First line: integer n (size of array)
Second line: n space-separated integers

Output:
Print the count of even and odd numbers in the array
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to calculate sum of array elements
int calculateEvenOdd(const vector<int>& arr) {
    int evens = 0;
    int odds = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
    }
    
    cout <<"Even: "<< evens << endl << "Odd: " << odds;
    return 0;
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

    calculateEvenOdd(arr);

    return 0;
}


/*
Input:
6
1 2 3 4 5 6
Output:
Even: 3
Odd: 3
*/