#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int lli;
int main(){
    int n,k;
    while(cin >> n,n>0)
    {
        // base is <100;
        for(int base =1;base<100;base++){
        // convert the number
            k=n;
            lli count=0;
            lli sum =0;
            while(k>0)
            {
                sum = sum + (k%10)*pow(base,count); // Conversion
                k=k/10;
                count++;
            }
        // check for sqaures
            if(sqrt(sum)== int(sqrt(sum)))
            {
                cout << base << endl;
                break;
            }
        }
    }
return 0;
}
