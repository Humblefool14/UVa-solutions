#include<iostream>
using namespace std;
string arr;
int m(int x)
{   int k=0;
    while(x>0)
    {
        k+= x%10;
        x=x/10;
    }
    return k;
}
int count(int x){
    if(x==9) return 1;
    else return 1+count(m(x));
}
int main()
{
     for(;;){
         getline(cin,arr);
         if(arr[0]=='0'){
             break;
         }
         int k=arr.length();
         int sum=0;
         for(int i=0;i<k;i++)
         {
             sum+=arr[i]-'0';
         }
         if(sum%9==0){
            cout << count(sum)<< endl;
        }
        else
         cout<< arr << "is not a multiple of 9" << endl;
     }
return 0;
}
