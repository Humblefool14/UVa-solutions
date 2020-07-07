#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Count[100000];
int main(){
   int x,y,stones[12];
   while(cin >> x){
       cin >> y;
       for(int i=0;i<y;i++)
            cin >> stones[i];             // Input set of stones
       memset(Count,0,sizeof(Count));      // setting all of count to 0
       for(int i=1;i<=x;i++){ // Start from stones 1 to end x;
           for(int j=0;j<y;j++){
               if(i-stones[j]>=0){
                   if(Count[i-stones[j]]==0){
                       Count[i]=1;
                       break;
                   }
               }
           }
       }
       if(Count[x]){
           cout << "Stan wins" << endl;
       }else cout << "Ollie wins"<< endl;
   }
return 0;
}
