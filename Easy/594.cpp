#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int conv = 0;
        for (int i = 0; i < 4; i++)
            conv |= ((n>>(8*i))&255) << (8*(3-i));
      cout << n << "converts to  " << conv << endl;
    }
    return 0;
}
