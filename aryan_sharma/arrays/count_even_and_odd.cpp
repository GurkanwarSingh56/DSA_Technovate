#include<iostream>
#include<vector>
using namespace std;

void countEvenOdd(vector<int> &arr){
    int evenCount = 0, oddCount = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    cout<<"Even : "<< evenCount<<endl;
    cout<<"Odd : "<< oddCount<<endl;
}

int main(){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    countEvenOdd(arr);

    return 0;
}