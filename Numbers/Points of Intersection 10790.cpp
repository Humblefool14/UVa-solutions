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
// Selecting 2 pts from one side and realising no.of lines formed.
// Multiply it with other side. 

