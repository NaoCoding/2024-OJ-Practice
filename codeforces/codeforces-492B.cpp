```cpp
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int a,b;
    cin >> a >> b;
 
    vector<int> latern(a);
    for(int i=0;i<a;i++)  cin >> latern[i];
 
    sort(latern.begin(),latern.end());
 
    double answer = 0;
 
    for(int i=0;i<latern.size()-1;i++){
        if(answer < latern[i+1] - latern[i]){
            answer = latern[i+1] - latern[i];
        }
    }
 
    answer /= 2;
    if(latern[0] > answer) answer = latern[0];
    if(b - latern[a-1] > answer)  answer  = b - latern[a-1];
    
    cout << fixed << answer;
 
 
 
}
```
