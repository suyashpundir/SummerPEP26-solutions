#include<iostream>
using namespace std;


bool linear_search(int arr[],int size,int  key){
    if(size==0) return false;
    if(arr[0]==key) return true;

    return (arr+1,size-1,key);




}

 int main(){
    int size=6;
    int arr[size]={10,8,5,4,3,2};
    int key=6;
    cout<<linear_search(arr,size,key)<<endl;

    
    



    return 0;

 }