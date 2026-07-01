#include<iostream>
using namespace std;


bool bs(int arr, int target,int high,int low){
    if(low>high) return false;

    int mid=(high+low)/2;
    if(target==mid) return true;
    if(target>mid) return bs(arr,target,mid+1,high);
    else{
        return bs(arr,target,low,mid-1);
    }
}


 