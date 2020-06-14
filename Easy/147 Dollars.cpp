#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<bitset>
using namespace std;
typedef long long int ll;
ll coins[11]={5,10,20,50,100,200,500,1000,2000,5000,10000},store[11][30000];
ll ways(int i,int x)
{
	if(x==0)return 1;
	if(x<0||i==12)return 0;
	if(~store[i][x])return store[i][x];
	return store[i][x] = ways(i,x-coins[i])+ways(i+1,x);
}
int main()
{
	float x;
	memset(store,-1,sizeof(store)); // clearing the array
	while(cin >>x,x!=0.00){
        x=x*100;
		cout << ways(0,x) << endl;
	}
return 0;
}
