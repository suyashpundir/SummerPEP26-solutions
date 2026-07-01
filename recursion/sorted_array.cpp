#include<iostream>
using namespace std;



bool isArraySorted(int arr[],int size){
    if(size==0) return false;

    if(arr[0]<arr[1]) return true;
    isArraySorted(arr+1,size-1);
}