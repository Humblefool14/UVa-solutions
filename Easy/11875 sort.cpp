#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int T;
	int players[11];
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		int N;
		scanf("%d", &N);
		for (int j = 0; j < N; j++) scanf("%d", &players[j]);
		sort(players, players+N); // sort the players and get the middle one. 
		printf("Case %d: %d\n", i, players[N/2]);
	}
	return 0;
}
