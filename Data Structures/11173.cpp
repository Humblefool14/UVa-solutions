#include<iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
 {
   int n,k;
   scanf("%d %d",&n,&k);
   printf("%d\n", k^(k>>1));
  }
 return 0;
}
