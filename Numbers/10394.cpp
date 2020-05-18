#include<bits/stdc++.h>
#include <bitset>   // compact STL for Sieve, more efficient than vector<bool>!
#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;

ll _sieve_size;
bitset<20000010> bs;   // 10^7 should be enough for most cases
vi primes;   // compact list of primes in form of vector<int>
vi twinprimes; // Only captures the first half of twin primes.
// first part

void sieve(ll upperbound) {          // create list of primes in [0..upperbound]
  _sieve_size = upperbound + 1;                   // add 1 to include upperbound
  bs.set();                                                 // set all bits to 1
  bs[0] = bs[1] = 0;                                     // except index 0 and 1
  for (ll i = 2; i <= _sieve_size; i++) if (bs[i])
  {
    // cross out multiples of i starting from i * i!
    for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
    primes.push_back(i);  // also add this vector containing list of primes
  }
   for (ll i=0;i <= primes.size(); i++)
  {   if(primes[i+1]-primes[i]==2)
       { twinprimes.push_back((primes[i]));
       }}
  }/// Or use a pair here instead of vector //

int main() {
  // first part: the Sieve of Eratosthenes
  sieve(20000010);                       // can go up to 10^7 (need few seconds)
  int n;
  while(cin>> n)
  {
     cout << "<" << twinprimes[n-1] << " , " << twinprimes[n-1]+2 << ">" << endl;
  }
return 0;
}
