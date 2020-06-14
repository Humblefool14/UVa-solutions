#include<iostream>
#include<queue>
#include<sstream>
using namespace std;
int main(){
    char n;
    string str;
    queue<char> q;
    while(cin >> n >> str,n!='0' && str !="0"){
         int k = str.length();
         for(int i=0;i<k;i++){
             bool first = true;
             if(str[i]!=n){
                 if (!(first && str[i] == '0')) {
                    first = false;
                    q.push(str[i]);
                }
            }
        }
        if (q.empty()) printf("0");
        while (!q.empty()) {
            printf("%c", q.front());
            q.pop();
        }
        printf("\n");
    }
    return 0;
}
