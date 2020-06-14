#include <iostream>
#include <algorithm>
using namespace std;
char grade(int count) {
    if (count >= 90) return 'A';
    if (count >= 80) return 'B';
    if (count >= 70) return 'C';
    if (count >= 60) return 'D';
    return 'F';
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int count = 0, test1, test2, final, attendance, int1, int2, int3;
        cin >> test1 >> test2 >> final >> attendance >> int1 >> int2 >> int3;
        count = test1 + test2 + final + attendance;
        int mini = min(int1, min(int2, int3)); // Best out of 3
        count += (int1+int2+int3-mini)/2;
        cout << "Case"<< i << ":"<< grade(count) << endl;
    }
    return 0;
}
