#include<iostream>
using namespace std;
int reverse(int n)
{
   int x=0;
   while(n>0)
   {
      x=x*10+n%10;
      n=n/10;
   }
  return x;
}
int main()
{
  int a,b;
  int n;
  cin >> n;
  for(int i =1;i<=n;i++)
  { cin >> a >>b;
    a= reverse(a);
    b= reverse(b);
    a = reverse(a+b);
    cout << a << endl;
  }
return 0;
}
