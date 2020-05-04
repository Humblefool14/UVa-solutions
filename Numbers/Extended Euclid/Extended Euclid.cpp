#include<iostream>
using namespace std;
int x,y,d;
void diophantine(int a,int b)
{
  if(b==0){x=1;y=0;d=a; return;} // base case
  diophantine(b,a%b); // Recursion till the end
  int x1 = y;
  int y1 = x-(a/b)*y;
  x = x1;
  y = y1;
  cout << x << "  " << y << endl; // ax+by == d (GCD value)
}
int main()
{
 int a,b,c;
 cin >> a >> b >> c;
 diophantine(a,b); // Void function
 cout << d << endl; // shows values due to global storage
 int k=x; // To make sure the values don't change of x & y through repeat substitution
 int z=y; //
 for(int n=0;n<100;n++)
 {
     x= k*(c/d)+(b/d)*n;
     y= z*(c/d)-(a/d)*n;
    cout << x << "  " << y << endl;
    // Generator and print solutions
    // ax+by = c solutions found.. 
 }
 return 0;
}
