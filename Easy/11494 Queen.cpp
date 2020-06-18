#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
     int x1,y1,x2,y2;
     while(cin >> x1 >> y1 >> x2 >> y2,x1&&y1&&x2&&y2){
         if(x1-x2 == 0 && y1-y2==0){
                                        cout << "0" << endl;
                                    }
        else if((x1-x2 == 0)||(y1-y2 == 0)||(x1-x2 == y1 - y2)||(x1-x2 == y2 - y1)||(x2-x1 == y1 - y2)){
              // y=x or y = -x
              // difference of x =0 --> Horizontal
              // difference of y =0 --> Vertical
                                        cout << "1" << endl;
                                    }
                            else{
                                       cout << "2" << endl;
                                }
}
return 0;}
