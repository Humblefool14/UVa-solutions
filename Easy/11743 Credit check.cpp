#include<iostream>
#include <cstdio>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		int sum = 0;
		for (int j = 0; j < 16; j++){
			int n;
			cin >> n;
			if (j % 2 == 0) sum += n;
			else sum = sum+ (n*2)%9;
		}
		if (sum % 10 != 0) cout << "Invalid \n";
		else cout << "Valid \n";
	}
	return 0;
}
