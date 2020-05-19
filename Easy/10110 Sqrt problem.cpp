#include<iostream>
#include<cmath>
using namespace std;
typedef long long int ll;
int main() {
	ll n;
	while (cin>>n,n>0) {
		if (sqrt(n) == int(sqrt(n)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}
