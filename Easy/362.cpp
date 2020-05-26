#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int N; // File size in bytes
    size_t k=1;
    while(scanf("%d\n",&N)==1){
     cout << "Output for dataset" << k <<"  " << N << endl;
     int x,i;
     int sum=0;
     for(i =1;;i++)
     {
         cin >> x;
         sum+=x;
         if(i%5==0)
         {
             int rem = N-sum;
             int t = sum/5;
             if(sum == 0)
             {
                 cout << "Time Remaining : stalled" << endl;
             }
             rem = int(rem/t);
             sum =0;
             cout << "Time Remaining  " << rem<< endl;
         }
     }
     cout << "Total time " << i << endl;
     k++;
   }
 return 0;
}
