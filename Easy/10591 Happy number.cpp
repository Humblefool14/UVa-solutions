#include<iostream>
using namespace std;
int happy[10]={-1,1,-1,-1,-1,-1,-1,1,-1,-1};
int squares(int x){
    if(x<10) return happy[x];
    int k,sum=0;
    while(x>0){
        k = x%10;
        sum+=k*k;
        x=x/10;
    }
    return squares(sum);
}
int main()
{
 int t,n;
 cin >> t;
 for(int i=1;i<=t;i++){
    cin >>n;
    int k=squares(n);
    if(k>0){
         cout << "Case #" << i << " " << n << " is a happy number" << endl;
    }
    else cout << "Case #" << i <<  " " << n << " is an unhappy number" << endl;
 }
 return 0;
}
