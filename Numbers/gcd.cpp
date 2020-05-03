#include<iostream>
using namespace std;
int gcd(int a, int b)
{ return b == 0 ? a : gcd(b, a % b); }
int main()
{
 int a,b;
 cin >> a >> b;
int k = gcd(a,b);
int lcm = a*b/k;
cout << k << endl;
cout<< lcm << endl;

return 0;
}
