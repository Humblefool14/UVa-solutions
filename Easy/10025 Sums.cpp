#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
typedef long long int ll ;
int main(){
int cases;
cin >> cases;
ll x;
while(cases--){
     cin >> x;
     if(x<0) x =-x;
     int i;
     for(i=1; ;i++){
          if(i*(i+1)/2 >= x && ((i*(i+1)/2-x)%2==0)){
              break;
          }
     }
      cout << (x == 0 ? 3 : i) << endl;
      if(cases) cout << endl;
}
return 0;
}
