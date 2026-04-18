#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Maximum element: " << max << endl;
    return 0;
}



// Output of Program :
// Enter the number of elements: 5
// Enter element 1: 6
// Enter element 2: 4
// Enter element 3: 2
// Enter element 4: 8
// Enter element 5: 1
// Elements: 6 4 2 8 1 
// Maximum element: 8
