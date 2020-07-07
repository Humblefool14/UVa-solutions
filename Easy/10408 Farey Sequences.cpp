#include<iostream>
using namespace std;
int main(){
    int n, k;
    while(cin >> n >> k){
        int a, b, pa, pb, ta, tb,t;
        pa = 0, pb = 1, a = 1, b = n;
        limit =n;
        while(k--) {
            t = (n+pb)/b;
            ta = tk*a - pa;
            tb = tk*b - pb;
            pa = a, pb = b;
            a = ta, b = tb;
        }
        cout << a << b << endl;
    }
    return 0;
}
