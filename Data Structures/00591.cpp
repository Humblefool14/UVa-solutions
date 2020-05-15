#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
 int t;
 int arr[55];
 while(cin >>t,t>0)
 {     int counter =0;
      int sum=0;
      for(int i=0;i<t;i++)
      {
          cin >>arr[i];
          sum+=arr[i];
      }
      int average = sum/t;
      sum=0;
      for(int i=0;i<t;i++)
      {
          sum+= abs(arr[i]-average);
      }
      sum = sum/2;
      ++counter;
      cout << "Set #" << counter << endl;
      cout << "The min number of moves  "<< sum << endl;
  }
 return 0;
}
