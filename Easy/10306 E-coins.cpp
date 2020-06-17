#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<bitset>
using namespace std;
typedef long long int ll;
int n , m , s , con[40] , tech[40] , mars[40][301][301];
int rec(int i,int x,int y)
{
	int mod = x*x+y*y;
	if(mod==s)return 0;
	if(mod>s||i==m)return 1e9;
	int &ret = mars[i][x][y];
	if(~ret)return ret;
	return ret = min(rec(i+1,x,y),1+rec(i,x+con[i],y+tech[i]));
}
int main()
{
	//readf
	scanf("%d",&n);
	while(n--)
	{
		cin >> m >> s;
		s*=s;
        for(int i=0;i<m;i++){
		       cin >> con[i] >> tech[i];
        }
		memset(mars,-1,sizeof(mars));
		int res = rec(0,0,0);
		if(res!=1e9)printf("%d\n",res);
		else puts("not possible");
	}
return 0;    
}
