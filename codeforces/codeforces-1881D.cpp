#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int b;
        cin >> b;
        int c;
        map<int,int> p;
        vector<int> rlist;
        int biggest = 1000;
 
        for(int j=0;j<b;j++){
            cin >> c;
            int pos = 2;
            while(c > 1){
                while(c%pos==0){
                     p[pos] += 1;
                     c /= pos;
                }
                pos += 1;
                if(pos>1000){
                    p[c] += 1;
                    rlist.push_back(c);
                    break;
                }
 
            }
        }
        int cor =1;
        for(int k=0;k<=1000;k++) {
            if(p[k]%b!=0){
            cor = 0;
            cout << "NO\n";
            break;
        }}
        if(cor==1){
            for(int k=0;k<rlist.size();k++) {
            if(p[rlist[k]]%b!=0){
            cor = 0;
            cout << "NO\n";
            break;
        }}
        }
 
 
        if(cor==1) cout << "YES\n";
    }
 
 
 
 
 
}
