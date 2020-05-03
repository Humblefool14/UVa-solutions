#include<bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;
int redux(int x)
{
    while(x%2==0)
    {
        x=x/2;
    }
    while(x%3==0)
    {
        x=x/3;
    }
    while(x%5==0)
    {
        x=x/5;
    }
 return x;
}
int main()
{
    int n=5;
    int i;
    for(i=6;;i++)
    {
        int x = i;
        x= redux(x);
        if(x==1 && n<1501)
        {
            n++;
        }
        if(n>1501)
        {
            cout << i << endl; 
            break;
        }
    }
return 0;
}
