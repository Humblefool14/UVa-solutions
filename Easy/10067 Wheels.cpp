#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int rooster[10000];
int Q[10000];
int D[10000];
int A[4],B[4];
int d[8][4] = {
	0,0,0,1,0,0,0,-1,
	0,0,1,0,0,0,-1,0,
	0,1,0,0,0,-1,0,0,
	1,0,0,0,-1,0,0,0};
int value(int name[4]){
    return name[0]*1000+name[1]*100+name[2]*10+name[3];
}
int bfs(int s,int t){
    if(s==t) return 0;
    int move =0,save =0;
    Q[save++] =s;
    rooster[s] = 1;D[s] = 0;
    while ( move < save ) {
		int now = Q[move];
		for ( int i = 0 ; i < 4 ; ++ i ) {
			A[3-i] = now%10;
			now /= 10;
		}
		for ( int i = 0 ; i < 8 ; ++ i ) {
			for ( int j = 0 ; j < 4 ; ++ j ) {
				B[j] = A[j]+d[i][j];
				if ( B[j] == -1 ) B[j] = 9;
				if ( B[j] == 10 ) B[j] = 0;
			}
			int v = value(B);
			if ( v == t ) return D[Q[move]]+1;
			if ( !rooster[v] ) {
				rooster[v] = 1;
				D[v] = D[Q[move]]+1;
				Q[save ++] = v;
			}
		}
		move ++;
	}
	return -1;
}
int main(){
     int t;
     cin >> t;
     int S[4]; // Start
     int D[4]; // Destination
     int n;
     int blocked[4];
     while(t--){
         cin >> S[0]  >> S[1] >> S[2] >> S[3];
         cin >> D[0]  >> D[1] >> D[2] >> D[3];
         memset(rooster,0,sizeof(rooster));
         cin >> n;
         while(n--){
             cin >> blocked[0] >> blocked[1] >> blocked[2] >> blocked[3];
             rooster[value(blocked)] =1;
         }
        cout << bfs(value(S),value(T)) << endl;
     }
return 0;
}
