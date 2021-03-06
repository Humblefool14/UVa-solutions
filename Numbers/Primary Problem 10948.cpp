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
bitset<1000000> bs;
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
    sieve(1000000);
      int t;
      while(cin >> t,t>0)
      {  bool flag=false;
         for(int i=0;i <= primes.size() && (primes[i] << 1) <= t;i++)
             if(bs[t-primes[i]]){
                     cout << primes[i] << "+ " << t-primes[i] << endl;
                     flag =true;
                     break;}
         if(!flag)
         {
              cout << "No way" << endl;
         }}
        return 0;
  }
