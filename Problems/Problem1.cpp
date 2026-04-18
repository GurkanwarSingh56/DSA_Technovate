#include <iostream>
#include <vector>
using namespace std;

void func(int n){
    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    cout << "Maximum element: " << max << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    func(n);
    return 0;
}

// Output :
// Enter the number of elements: 5 
// Enter elements: 8 5 3 7 2 
// Maximum element: 8
