#include<iostream>
#include<vector>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int count =0;
    count++;
    int n,a;
    cin >> n >> a;
    int hjump=0;
    int ljump =0;
    for(int i=1;i<n;i++){
        int nxt;
        cin >> nxt;
        if(nxt >a) hjump++;
        else if(nxt<a) ljump++;
        a= nxt;
    }
cout << "Cases" << count << ":" << hjump << " " << ljump << endl;
}
return 0;
}
