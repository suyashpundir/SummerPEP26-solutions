// Distributed Database Sharding

// A database contains N records.

// To improve scalability, the system recursively shards the database:

// //Each database is split into:
// one shard containing 2/3 of the records
// one shard containing 1/3 of the records
// Creating a shard incurs a synchronization cost of
// n
// 2

// where n is the current shard size.

// The recursion stops when a shard contains ≤ k records.

// If the initial database size exceeds ML, print

// Max limit reached
// Your Tasks
// Draw the recursion tree.
// Derive the recurrence relation.
// Write the recursive solution.
// Find the total synchronization cost for
// N = 81
// k = 3
// ML = 100
// State the time complexity of your recursive implementation.//
// //


#include<iostream>
using namespace std;
int computeCost(int w,int k,int ml){
    if(w>ml){
        cout<<"'max limit reached";
        return 0;

    }
    if(w<=k){
        return 0;
    }
    return w*w +computeCost(w/2,k,ml) +computeCost(w/3,k,ml)+computeCost(w/6,k,ml);

}
int main(){



    int w,k,ml;
    cin>>w>>k>>ml;
    cout<<computeCost(w,k,ml)<<endl;    
    return 0;

}

