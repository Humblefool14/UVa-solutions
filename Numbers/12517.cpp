#include<iostream>
using namespace std;
typedef long long ll;
ll arr[100000001];
ll sum(int n)
{   int k;
    int sum1=0;
    while(n!=0)
    {
        k=n%10;
        n=n/10;
        sum1+=k;
    }
 return sum1;
}
void calculate()
{
    for(int i=0;i<100000001;i++)
    {
        arr[i]=0;
    }
    for(int i=1;i<100000001;i++)
    {
        arr[i]+=arr[i-1]+sum(i);
    }
}
int main()
{
     int M,N;
     calculate();
     while(cin >> M >> N,M!=0 && N!=0)
     {    cout << arr[N]-arr[M-1] << endl;
      }
return 0;
}
