#include <bits/stdc++.h>
using namespace std;

int main() {
    bitset<5> bs(18);
    
    // Set 1st bit
    bs.set(0);
    cout << bs << endl;
    
    // Reset 2nd bit 
    bs.reset(1);
    cout << bs << endl;
    
    // Flip 5th bit
    bs.flip(4);
    cout << bs;
    return 0;
}
