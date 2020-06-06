#include<bits/stdc++.h>
#include<iostream>
#include <cstdio>
using namespace std;
int main() {
  int b, r = 0, s, i, max_here, max_sum, n;
  int max_i, max_j, i_here; //.................................Initiation
  cin >> b;
  for(;r<b;r++){ // start of data inputting
    cin >> s;   // Subcases
    max_j = max_i = i_here = 0; //.............................. Start point
    for(max_sum = max_here = i = 0; i < s - 1; i++) {
      scanf("%d", &n);
      /// Kadane Algorithm's start
      max_here += n;    // Sum
      if(max_here < 0) {
        max_here = 0;  // Reset to 0 and implies don't care abt this subsequence
        i_here = i + 1; // Set to next position
      }
      if(max_here > max_sum
         || (max_here == max_sum && i - i_here > max_j - max_i)) {
        max_sum = max_here; // Update
        max_i = i_here;    // Update of positions
        max_j = i;
      }
    }
    if(max_sum == 0) {
      printf("Route %d has no nice parts\n", r);
    } else {
      printf("The nicest part of route %d is between stops %d and %d\n", r, max_i+1, max_j+2);
    }
  }
  return 0;
}
