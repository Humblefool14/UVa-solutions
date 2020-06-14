#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<bitset>
using namespace std;
typedef long long int ll;
int coins[5]={1,5,10,25,50},store[5][7490];
int ways(int i,int x)
{
	if(x==0)return 1;
	if(x<0||i==5)return 0;
	if(~store[i][x])return store[i][x];
	return store[i][x] = ways(i,x-coins[i])+ways(i+1,x);
}
int main()
{
	int x;
	memset(store,-1,sizeof(store)); // clearing the array
	while(cin >>x)
		cout << ways(0,x) << endl;
return 0;        
}
