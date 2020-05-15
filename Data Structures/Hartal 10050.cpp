#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--)
     {
          int N;
          cin >> N;
          int parties;
          cin >> parties;
          int arr[parties];
          for(int i=1;i<=parties;i++)
          {
              cin >> arr[i];
          }
          int check[N];// calendar set
          for(int i=1;i<=N;i++)
              {check[i]=0;
              }
          for(int i=1;i<=parties;i++)
          {
              int k=arr[i];
              for(;k<=N;)
              {
                  check[k]=1;
                  if(k%7 ==0 || k%7==6)
                  {
                      check[k]=0;
                  }
                  k+=arr[i];
              }
          }
          // Checking the number of Hartal days
          int count =0;
          for(int i=1;i<=N;i++)
          {   if(check[i])
              {
                  cout << i << endl;
                  count++;
              }
          }
          cout << count << endl;
     }
return 0;
}
