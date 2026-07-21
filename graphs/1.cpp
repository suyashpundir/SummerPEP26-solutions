#include<bits/stdc++.h>
using namespace std;



int main(){


    int n,m;

    cout<<"enter number of vertices";
    cin>>n;
    cout<<"enter the number of edges";
    cin>>m;

    unordered_map<int, vector<int>> adjList;
    for(int i=0;i<m;i++){
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);

    }
    for(auto i: adjList){
        cout<<i.first<<"->";
        for(auto j: i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;

}