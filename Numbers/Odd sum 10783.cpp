#include<bits/stdc++.h>
#include<iostream>

using namespace std;
#define MAX_N 1000
int arr[51];
//void precalculate()
//{
    //int k=1;
    //for(int i=0;i<51;i++)
    //{
    //    arr[i]=0;
    //}
 //for(int i =1; i<101;)
 //{
     //arr[k] =arr[k-1]+i;
    // k++;
    // i=i+2;
 //}
 //for(int i=0;i<10;i++)
    // cout << arr[i] << endl;
//}

int main()
{
  //precalculate();
  int cases;
  cin>> cases;
 int a,b;
 while(cases--)
 {
  cin >> a >> b;
  int sum =0;
  for(int i=a;i<=b;)
  {
      sum+=i;
      i+=2;
  }
  cout << sum << endl;
 }
 return 0;
}
