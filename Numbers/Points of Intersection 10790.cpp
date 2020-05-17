#include<iostream>
using namespace std;
int main()
{
 int a,b;
 while( cin >> a >> b,a!=0 && b!=0)
 {
  cout << (a*(a-1)*b*(b-1))/4 << endl;
 }
 return 0; 
}
