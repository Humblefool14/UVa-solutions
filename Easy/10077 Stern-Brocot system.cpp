#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a, int b)
{ return b == 0 ? a : gcd(b, a % b); }
int main()
{
     int a,b,c,d,e,f;
     int A,B;
     while(cin >> A >> B)
     {
         if(A==1 && B==1)
         {
             break;             // End of the sequence
         }
         int g = gcd(A,B);  // Addition if the numbers r not co-primes.
         A = A/g;
         B = B/g;           // dissolve the prime factors

         a=0;
         b=1;
         c=1;
         d=0;e=1;f=1;
        for(;;){
            if(e==A && f== B){
                break;               // Final solution found
            }
            if(e * B > f * A) {
                 cout << "L";       // Committing to left side of the node.
                 b = e, d = f;      // Increasing denominators d and keep b constant
             } else {
                 cout << "R";       // commiting to the right side of the node
                 a = e, c = f;      // Increasing numerators a and keep c constant
             }
             e = a + b; f = c + d;  // Update of the fraction.
        }
        cout<< endl;
     }
return 0;
}
