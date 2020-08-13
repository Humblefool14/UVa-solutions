#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> vi;
vi sales,second;
int main(){
 int n;
 cin >> n;
 while(n--){
   sales.clear();
   int t;
   cin >> t;
   sales.assign(t,0);
   for(int i=0;i<t;i++){
       cin >> sales[i];
   }
   second.clear();
   sales.assign(t,0);
   second[0]=1;
   for(int j=1;j<t-1;j++){
       for(int i=0;i<j;i++){
           if(sales[j]>= sales[i]){
               second[j]++;
           }
       }
    }
    int sum=0;
    for(unsigned int i=0;i<second.size();i++){
        sum+=second[i];
    }
    cout << sum  << endl;
  }
return 0;
}
