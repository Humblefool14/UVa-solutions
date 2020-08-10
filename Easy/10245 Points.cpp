#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
};
point P[10000];
bool cmp(point a,point b){
    return a.x < b.x;
}
double distance(point a,point b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
double mindistance(int a, int b){ // a is smaller than b
    if(a>b) return 100000;
    int l = (a+b)/2,mid =(a+b)/2,r=(a+b)/2;
    double d = min(mindistance(a,mid-1),mindistance(b,mid+1));
    while(l>=a && d>P[mid].x-P[l].x) l--;
    while (r<=b && d>P[mid].x-P[r].x) r++;

    for ( int i = l+1 ; i < r ; ++ i )
	for ( int j = i+1 ; j < r ; ++ j )
		d = min(d,distance(P[i],P[j]));
	return d;
}
int main(){
 int t;
 while(cin >> t){
     for(int i=0;i<t;i++)
         cin >> P[i].x >> P[i].y;
     sort(P,P+t,cmp);
     double d = mindistance(0,t-1);
     setprecision(4);
     if(d>=10000){
         cout << "INFINITY" << endl;
     }
     else cout << d << endl;
  }
return 0;
}
