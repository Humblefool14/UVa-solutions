#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
     int NC;
     int Case =0;
     while((scanf("%d\n",&NC)==1),NC>0)
     {
         map< int, vector<int> > AList;
         int u,v;
         for(int i=0;i<NC;i++)
         {
             AList[u].push_back(v);
             AList[v].push_back(u); // Adjacency list for unweighted graph
         }
         // Reading graph completed
         int ttl;
         int query;
         while(cin >> query >> ttl,ttl!=0 && query!=0)
         {
             queue<int> q;
             map<int,int> dist;// Distance
             int visitednodes=1;
             dist[query]=0; // Starting from query position
             q.push(query); // Filling the queue;
             while(!q.empty())
             {
                 int u = q.front(); // Starting position
                 q.pop();           // Clearing out the queue
                 for(size_t i=0;i<AList[u].size();i++)
                 {
                     int v= AList[u][i];
                     if(!dist.count(v))
                     {
                         dist[v]=dist[u]+1; // Increasing the disatance to all present nodes.
                         if(dist[v]<= ttl)
                         {
                             q.push(v);
                             visitednodes++;
                         }
                     }
                 }
             } // BFS algorithm complete
             cout << "Case " << ++Case << ": " << AList.size() - visitednodes << " nodes not reachable from node "
                  << query << " with TTL = " << ttl << "." << endl; // Final presentation.
        }}
return 0;
}
