#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define Max 1000000;
typedef vector<int> vi;
typedef long long ll;
ll n;
ll _sieve_size;
bitset<10000010> bs;   // 10^7 should be enough for most cases
vi primes;   // compact list of primes in form of vector<int>

// first part
void sieve() {          // create list of primes in [0..upperbound]
  _sieve_size = Max+1;                            // add 1 to include upperbound
  bs.set();                                                 // set all bits to 1
  bs[0] = bs[1] = 0;                                     // except index 0 and 1
  for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
    // cross out multiples of i starting from i * i!
    for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
    primes.push_back((int)i);  // also add this vector containing list of primes
} }

int main()
{
    sieve();
    while(cin >> n,n!=0 && n>=6)
    {
        int count =0;
        vector<int>::iterator i;
        for(i=primes.begin();i<=primes.end()&& (*i)<(n/2);i++){
            // check the primes
            if(bs[n-(*i)])
                count++;
        }
        cout << count << endl;
    }
return 0;
}
