#include<bits/stdc++.h>
#include <bitset>   // compact STL for Sieve, more efficient than vector<bool>!
#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
ll _sieve_size;
bitset<10000> bs;
vi primes;   // compact list of primes in form of vector<int>

// first part completed

void sieve(ll upperbound) {          // create list of primes in [0..upperbound]
  _sieve_size = upperbound + 1;                   // add 1 to include upperbound
  bs.set();                                                 // set all bits to 1
  bs[0] = bs[1] = 0;                                     // except index 0 and 1
  for (ll i = 2; i <= _sieve_size; i++) if (bs[i])
  {
    // cross out multiples of i starting from i * i!
    for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
    primes.push_back(i);  // also add this vector containing list of primes
  }}
 int main()
 {
   sieve(10000);
   int max[10000];
   for (ll i=0;i<= 10000;i++) max[i] =0; // Setting max array equal to 0;
   for (ll i=0;primes[i]<10000;i++)
   { int sum=0;  /// 2+3+5+.. for 1st i;
    for(ll j=i;primes[j]<10000;j++)
     {
       sum +=primes[j];
       if(sum>10000) break;
       max[sum]++; // max will show us the no.of representations.
   }}
     int t;
     while(cin >> t,t>0)
     {
        cout << max[t] << endl;
     }
      return 0;
 }
