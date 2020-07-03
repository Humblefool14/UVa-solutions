#include<iostream>
#include<cmath>
using namespace std;
typedef long long int ll;
int main(){
 int x;
 cin >> x;
 while(x--){
   int n;
   cin >> n;
   ll sum = n*(n-1)*(n-2)*(n-3)/24 +n*(n-1)/2+1;
   cout << sum << endl;
 }
return 0;
}
