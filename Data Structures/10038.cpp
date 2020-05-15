#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool s[3001];
int main()
{
     int n;
     int arr[3015];
     for(int i=0;;i++)
     {
         cin >> n;
         for (int j=0;j<n;j++) cin >> arr[j];
         for(int k=1;k<n;k++) s[k]=false;
         for(int k=0;k<n;k++)
         { int pivot =arr[k];
                for(int j=k+1;j<n;j++)
                 {  int difference = abs(arr[j]-pivot);
                    s[difference]=true;
                 }
          }
          // check the flags and print solution.
     }
return 0;
}
