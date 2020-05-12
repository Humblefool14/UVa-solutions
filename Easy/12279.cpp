#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int x;
 while(x!=0)
 {
   int t;
   cin >> t;
   int k = t;
   int x;
   int sum =0;
   while(t--)
   { cin >> x;
    if(x==0)
    {sum++;}
    }
    cout << k-2*sum << endl;
   }
return 0;
}
