// Problem Statement 4
// Title: Count Even and Odd Numbers
// Description:
// Given an array, count how many even and odd numbers are present.
 

#include<iostream>
#include<vector>
using namespace std;

// function to count even and odd numbers
void countEvenOdd(const vector<int> &arr){
    int evenCount = 0, oddCount = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }

    // Print the result
    cout<<"Even : "<< evenCount<<endl;
    cout<<"Odd : "<< oddCount<<endl;
}

int main(){
    
    int n;
    cin>>n;
    
    // Input array elements
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    // Function call
    countEvenOdd(arr);

    return 0;
}