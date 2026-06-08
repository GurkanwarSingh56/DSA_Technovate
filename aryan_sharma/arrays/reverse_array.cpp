/*
Problem Statement 5
Title: Reverse an Array
Description:
Write a program to reverse the elements of an array.
*/

#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>&arr){
    int start = 0;
    int end = arr.size() - 1;
    int temp;

    while(start < end){
        temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;

        start++;
        end--;
    }
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    reverseArray(arr);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}