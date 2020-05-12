#include<iostream>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while(t--)
 {
   int L,W,H;
   cin >> L >> W >> H;
   if(L<=20 && W <= 20 && H <=20)
   {
     cout << "good"<< endl;
   }
   else  cout << "bad" << endl;
 }
 return 0;
}
