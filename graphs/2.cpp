#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //  create a visited array to keep track of the vissited nodes;
    //create a queue;
    //start from any node , and mark it visited and push it in the queue;

    vector<int > bfs(vector<vector<int>> &adjlis){

        queue<int> q; // new queue
        vector<int> result;// for storing the result
        int V =adjlis.size();

        vector<bool> visited(V,false); // to keep a check on the nodes visited;

        q.push(0);
        visited[0]=true;
        while(!q.empty()){
            int front=q.front();
            q.pop();

            result.push_back(front);
            for(auto neighbour: adjlis[front]){
                if(!visited[neighbour]){
                    visited[neighbour]=true;
                    q.push(neighbour);
                }
            }
        }

        return result;

    }




}