#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
 int l;
 ll arr[82];
 arr[0]=0;
 arr[1]=1;
for(int i=2;i<82;i++)
{
    arr[i]=arr[i-1]+arr[i-2];
}
while(l>0)
{
    cin >> l;
    cout << arr[l] << endl;
}
return 0;
}
