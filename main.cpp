#include<iostream>
using namespace std;



// int main(){

// //column wise
//     int arr[3][4];
//     for(int j=0;j<4;j++){
//         for(int i=0;i<3;i++){
//             cin>>arr[j][i];
//         }
//     }
// //row wose
//     int arr[3][4];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cin>>arr[i][j];

//         }
//     }
// }

// //even rows print

// for(int i=0;i<n;2*i){
//     for(int j=0;j<m;j++){
//         cout<<arr[i][j];
//     }
// }



void 2darray(int arr[][4],int m,int n){
    for(int i=0;i<m;i+=2){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
    }


}

int main(){

}