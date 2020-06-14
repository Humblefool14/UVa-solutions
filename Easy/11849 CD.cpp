#include<bits/stdc++.h>
#include<iostream>
#include <cstdio>
#include <unordered_set>
using namespace std;
int main() {
	int N, M;
	unordered_set<int> cds;
	while (cin >> N >> M, N!= 0 && M != 0)){
		cds.clear();
		while (N--) {
			int cd;
			scanf("%d", &cd);
			cds.insert(cd);
		}
		int count = 0;
		while (M--) {
			int cd;
			cin >> cd;
			// set.count(element) returns 0 or 1 if element is absent or present;
			if (cds.count(cd)) {
				count ++;
		  }
	  }
		cout << count << endl;
	}
	return 0;
}
