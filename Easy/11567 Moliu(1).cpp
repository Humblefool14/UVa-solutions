#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    ll n,step;
    while(cin>>n)
    {
        step = 0;
        while( n != 0)
        {
            if (n % 2 == 0){
                n /= 2;
                step++;
            }
            else {
                if ((((n-1) / 2) % 2 == 0) || (n-1 == 2)){
                   n--;
                   step++;
                }
                else {
                    n++;
                    step++;
                }
            }

        }
        cout<<step<<endl;
    }
    return 0;
}
