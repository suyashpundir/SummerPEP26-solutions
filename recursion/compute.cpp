#include<iostream>
using namespace std;



int computeCost(int w,int k,int ml){
    if(w>ml) return 0;
    int cost=0;
    int level=1;
    while(w>k){
        w=w/2;
        cost =cost+ level*(w*w);
        level=level*2;
        

    }

    return cost;

}
int main(){



    int w,k,ml;
    cin>>w>>k>>ml;
    cout<<computeCost(w,k,ml)<<endl;    
    return 0;

}