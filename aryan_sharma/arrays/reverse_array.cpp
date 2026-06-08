/*
Problem Statement 5
Title: Reverse an Array
Description:
Write a program to reverse the elements of an array.
*/

#include<iostream>
#include<vector>
using namespace std;

//Function to reverse an array
void reverseArray(vector<int>& arr){
    int start = 0;
    int end = arr.size() - 1;

    while(start < end){
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;

        start++;
        end--;
    }
}

int main(){
    int n;
    cin>>n;

    // Input array elements
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    // Function call
    reverseArray(arr);

    // Printing the reversed array
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}