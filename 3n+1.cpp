#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int x,y;
cin >> x >> y;
int max1 =0;

 for(int j =x; j <= y; j++)
{  int count=0;
   int i =j;
   while(i!=1)
   {
       if(i%2 ==1)
       {
           i = 3*i+1; count++;
       }
       else
       {      i=i/2;
            count++;
        }
    }
    max1 = max(max1,count);
}
cout << x << y <<max1+1 << endl;
return 0;
}
// FOr Ackerman problem remember the j value which gets the biggest through
// array or pair. 
