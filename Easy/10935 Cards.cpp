#include<iostream>
#include<queue>
using namespace std;
int main(){
     int n;
     queue<int>carddeck;
     while(cin>>n,n){
         if(n==1){
             cout << "Dispatched card :1" << endl;
             break;
         }
         for(int i=1;i<=n;i++){
             carddeck.push(i);
         }
         while(carddeck.size()!=1){
                cout << carddeck.front() << ", ";  // show first card
                carddeck.pop();                    // Delete first card
                carddeck.push(carddeck.front());   // Takes second card and pushes down queue
                carddeck.pop();                    // Deletes that entry
         }
         cout << "\n Remaining card: " << carddeck.front() << endl;
         carddeck.pop();
    }
return 0;
}
