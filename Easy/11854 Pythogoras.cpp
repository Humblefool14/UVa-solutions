#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  while(cin>>a >>b >>c,a&&b&&c){
    if(a*a+b*b==c*c) cout << "right" << endl;
    else if(c*c+b*b==a*a) cout << "right" << endl;
    else if(a*a+c*c==b*b) cout << "right" << endl;
    else cout << "wrong" << endl;
  }
return 0;
}
