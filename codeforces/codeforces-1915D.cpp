
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int a,b;
    cin >> b;
    string c;
    for(int i=0;i<b;i++){
        cin >> a;
        cin >> c;
        int idx = 0;
        while(idx<a){
            if(idx+3<a){
                if(c[idx+3] == 'a' || c[idx+3]=='e'){
                    cout << c[idx] << c[idx+1] << '.';
                    idx += 2;
                }
                else{
                    cout << c[idx] << c[idx+1] <<c[idx+2]<< '.';
                    idx += 3;
                }
            }
            else{
                for(int j=idx;j<a;j++)cout << c[j];
                idx  = a;
            }
 
        }
        cout << endl;
    }
 
 
 
}
