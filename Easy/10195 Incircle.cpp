#include<iostream>
#include<cmath>
using namespace std;
int main(){
     int a,b,c;
     cin >> a >> b >> c;
     int x,y,z;
     x= (a+b-c)/2;
     y= (b+c-a)/2;
     z= (c+a-b)/2;
     cout << sqrt(x*y*z/(x+y+z)) << endl;
return 0;
}
