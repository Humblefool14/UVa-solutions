#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n && n)
        cout << (int)(log(n) / log(2));
    return 0;
}
