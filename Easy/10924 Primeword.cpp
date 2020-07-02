#include<iostream>
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
bitset<10000010> bs;   // 10^7 should be enough for most cases
vi primes;   // compact list of primes in form of vector<int>
// first part
void sieve(ll upperbound) {          // create list of primes in [0..upperbound]
  _sieve_size = upperbound + 1;                   // add 1 to include upperbound
  bs.set();                                                 // set all bits to 1
  bs[0] = bs[1] = 0;                                     // except index 0 and 1
  for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
    // cross out multiples of i starting from i * i!
    for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
    primes.push_back((int)i);  // also add this vector containing list of primes
}}
int count(string word)
{   int count = 0;
    for (unsigned int i = 0; i< word.size();i++)
        if (word[i] > 'Z')
            count += word[i]-'`';
        else
            count += word[i]-'A' + 27;
    return count;
}
int main(){
    sieve(10000000);
    string word;
    while(cin >> word)
    {
        if (bs[count(word)])
            cout << "It is a prime word." << endl;
        else
            cout << "It is not a prime word." << endl;
    }
return 0;
}
