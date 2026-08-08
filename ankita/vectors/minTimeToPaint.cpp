#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int maxAllowedTime) {
    int painters = 1;
    int time = 0;

    for (int i = 0; i < n; i++) {

        if (time + arr[i] <= maxAllowedTime) {
            time += arr[i];
        }
        else {
            painters++;
            time = arr[i];
        }
    }

    return painters <= m;
}

int minTimeToPaint(vector<int>& arr, int n, int m) {

    int sum = 0;
    int maxVal = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxVal = max(arr[i], maxVal);
    }

    int st = maxVal;
    int end = sum;
    int ans = -1;

    while (st <= end) {

        int mid = st + (end - st) / 2;

        if (isPossible(arr, n, m, mid)) {
            // mid is possible
            ans = mid;
            end = mid - 1;
        }
        else {
            // mid is not possible
            st = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {40, 30, 10, 20};

    int n = 4;
    int m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;

    return 0;
}