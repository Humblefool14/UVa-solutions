#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int arr[105];
void precalculate()
{
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<105;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=1;i<10;i++)
    {
        cout << arr[i]<< endl;
    }
}
int fib(int a) // convert fibnary numbers to decimals
{
    int k;
    int i=1;
    int sum = 0;
    while(a>0)
    {
        k = a%10;
        a = a/10;
        sum+= k*arr[i];
        i++;
    }
    cout << sum << endl;
 return sum;
}
int main()
{
    precalculate();
    int a;
    while(cin >> a)
    {
      fib(a);
    }  
return 0;
}
