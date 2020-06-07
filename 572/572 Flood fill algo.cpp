#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
using namespace std;
#define FOI(i, A, B) for(i=A; i<=B; i++)
#define FOD(i, A, B) for(i=A; i>=B; i--)

int N, M;
char adjMat[105][105];

void floodFill(int X, int Y){
	if ( X < 0 || Y < 0 || X >= M || Y >= N )
		return;
	if ( adjMat[X][Y] == '*' )
		return;
	adjMat[X][Y] = '*';//// Real update & avoiding the double count

	int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0}; // The positions to b checked on rows side
	int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};  // The pos to b checked on column side
	int j;
	FOI(j, 0, 7)
		floodFill(X + dx[j], Y + dy[j]); // Do it for all the positions.
}
int main(int argc, char **argv){
	//freopen("testI.txt", "r", stdin);
	//freopen("testO.txt", "w", stdout);
	while( true ){
		scanf( "%d%d", &M, &N );
		if( M == 0 )
			break;
		int i, j;
		int oil = 0;
		FOI(i, 0, M-1)
			scanf("%s", adjMat[i]);
		FOI(i, 0, M-1)
			FOI(j, 0, N-1)
			if (adjMat[i][j] == '@' ){
				oil++;
				floodFill(i, j);
			}
		printf("%d\n", oil);
	}
	return 0;
}
