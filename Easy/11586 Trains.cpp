#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t; // test cases
    while(t--){                   // Not looking for how to arrange them. But is there a way ? 
         string connector;
         getline(cin,connector);
         string :: iterator i;
         int count=0;
         for(i=connector.begin();i<connector.end();i++){
             if(*i=='F'){
                 count++;                        // Assime +1 for F pieces
             }
             if(*i=='M'){
                 count--;                        // Assume -1 for M pieces
             }
         }                   // youtube : https://www.youtube.com/watch?v=mYAahN1G8Y8
         if(count==0 && connector.size()>3){   // Altleast 3 pieces should be there for forming a loop
             cout << "Loop possible"<< endl;
         }
         else cout << "No loop"<< endl;
    }
return 0;
}
