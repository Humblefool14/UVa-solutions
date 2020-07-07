#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double r, n;
    while(cin >> r >> n){
        cout << n*r*r*sin(2*acos(-1)/n)/2 << endl;
    }
    return 0;
}
