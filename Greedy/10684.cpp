#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int N;
int arr[10000];
int main()
{
  while(cin>> N,N>0)
  {
      for(int i=0;i<N;i++)
      {
           cin>>arr[i];
      }

      int sum=0;
      int ans=0;
      for(int i=0;i<N;i++)
      {
          sum+=arr[i];
          ans=max(ans,sum);
          if(sum<0) sum=0;
      }
    if(ans) cout << "The winning streak is "<< ans << endl;
    else cout<< "Losing streak" << endl;
  }
 return 0;
}
