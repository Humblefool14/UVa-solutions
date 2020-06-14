#include<iostream>
#include<cmath>
using namespace std;
typedef long long int ll;
int main()
{
 int a,b,c,d;
     ll qa,qb,qc,qd;
 for(a=6;a<=300;a++){qa=pow(a,3);
     for(b=1;b<a;b++){qb=pow(b,3);
         for(c=b+1;c<a;c++){qc = pow(c,3);
             for(d=c+1;d<a;d++){qd= pow(d,3);
                 if(qa == qb+qc+qd){
                     cout << a << " " << b << " " << c << "  " << d << endl;
                 }}}}}
 return 0;
}
