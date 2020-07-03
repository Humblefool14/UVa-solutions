#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
typedef vector<float> vi;
vi distances;
int x[501],y[501];// positions
int squareddistances[505][505];
int P;
int encounteredNum[505];
void DFS(int node, const int maxDist, const int attempt)
{    encounteredNum[node] = attempt;
    for (int i = 0; i < P; ++i)
    {   if (encounteredNum[i] != attempt && squareddistances[node][i] <= maxDist)
            DFS(i, maxDist, attempt);
    }
}
bool connect(int outposts, const int maxDistance, const int attempt)
{
    for (int i = 0; i < P && outposts >= 0; ++i)
    {   if (encounteredNum[i] != attempt)
        {   DFS(i, maxDistance, attempt);
            --outposts;
        }
    }
    return outposts >= 0;
}
int pos(int i,int j){
     return (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
}
int main(){
 int t;
 cin >> t; // test cases
 while(t--){
      int S;  // S-- Satellites
      cin >> S >> P;           // P - no of outposts.
      if(S>P) break;
      int numAttempts =0;
      for(int i=0;i<P;i++){
            cin >> x[i] >> y[i];
            encounteredNum[i] = numAttempts;
            for(int j=0;j<=i;j++){
                squareddistances[j][i]= squareddistances[i][j]= pos(i,j);
                distances.push_back(squareddistances[i][j]);
            }
       }
      sort(distances.begin(),distances.end()); // Next Binary search
      int start=0;
      int end= distances.size();
      while(start!=end){
          int mid= start+(end-start)/2;
          const int alloweddistance= distances[mid];
          if(connect(S,alloweddistance,numAttempts)){
             end = mid;
         }else start= mid+1;
         numAttempts++;
      }
      cout << fixed << setprecision(2) << endl;
      cout << sqrt(distances[start]) << endl;
    }

return 0;}
