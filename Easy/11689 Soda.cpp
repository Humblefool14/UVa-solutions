#include<iostream>
using namespace std;
int soda(int c, int e, int f)
{
    c =c+e;
    int k=0;
    int count=0;
    while(c>=f){
        k = c%f;
        c=c/f;
        count+=c;
        c=c+k;
    }
return count;
}
int main()
{
    int t,c,e,f;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> c >> e >> f;
        int k= soda(c,e,f);
        cout << k << endl;
    }
return 0;
}
