#include <iostream>
using namespace std;

int main() {
	unsigned long long int T[101];
	for (int n = 1; n <= 100; n++) { //Precalucations
		T[n] = 0;
		for (int i = 1; i <= n; i++)
				T[n] += (n - i + 1) * (n - i + 1);
	}
	int n;
	while (cin >> n,n>0)
		cout << T[n] << endl;
	return 0;
}
//
// If you take any row in nxn grid //
// No. of ways of taking k consecutive grids is n-k+1.//
//similarly, in any column of grid,No. of ways of taking k consecutive grids is n-k+1.//
// Combined (n-k+1)^2
