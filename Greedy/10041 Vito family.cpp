#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
typedef unsigned long long int ll ;
int main (void) {
	int n;
	int a,b;
	vector<int>streets;
	cin >> n;
	for(int i=0;i<n;i++){
		streets.clear();
		cin >> a;
		for (int i = 0; i < a; i++) {
			cin >> b;
			streets.push_back (b);
		}
		ll mini= 5000*30000;
		for (int i = 0; i < a; i++) {
			ll dist = 0;
			for (int j = i; j < a; j++) {
				dist += abs(streets[i]-streets[j]);
			}
			if (dist<mini)mini = dist;
		}
		cout << mini << endl;
	}
	return 0;
}
