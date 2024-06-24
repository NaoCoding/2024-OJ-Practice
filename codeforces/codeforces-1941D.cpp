#include<bits/stdc++.h>
#define int long long
// Andy Lu's CPP file
using namespace std;
 
template<class T> using pq = priority_queue<T>;
template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
typedef vector<long long> vi;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<vector<char>> vvc;
typedef vector<vector<long long>> vvi;
typedef vector<vector<vector<long long>>> vvvi;
typedef vector<vector<vector<vector<long long>>>> vvvvi;
typedef vector<vector<double>> vvd;
 
#define append push_back
#define cin_cout ios_base::sync_with_stdio(0); cin.tie(0);
#define all(p) p.begin(),p.end()
#define for4(i,a,b,c) for(int i=a;i<b;i+=c)
#define for3(i,a,b) for(int i=a;i<b;i++)
#define for2(i,a) for(int i=0;i<a;i++)
#define fora(i,a) for(auto i:a)
#define len(x) ((int)x.size())
int isPrime(int target);
int gcd(int a,int b){return b>0 ? gcd(b,b%a):a;} // big,small
int lcm(int a,int b){return((a*b)/gcd(a,b));}
int sum(vi target);
int sum(vvi target);
void print(vi a);
void prints(vi a);
void printn(vi a);
void print(int a);
void prints(int a);
void printn(int a);
void printvvi(vvi a);
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define printl cout << endl;
#define printcase(t) cout << "Case #" << t << ": ";
#define MOD 1e9 + 7;
#define MAX 1e5 + 5;
#define INF 1e9;
 
 
signed main(){
 
    int t;
    cin >> t;
    for2(i,t){
 
        int n,m,x;
        cin >> n >> m >> x;
        vector<int> now(1,x);
        for2(j,m){
            int p;
            string cmd;
            cin >> p >>cmd;
            //cout << p << endl;
            if(cmd=="0"){
                for(int k=0;k<now.size();k++){
                    now[k] += p;
                    if(now[k]>n)now[k]-=n;
                }
            }
            else if(cmd=="1"){
                for(int k=0;k<now.size();k++){
                    now[k] -= p;
                    if(now[k]<=0)now[k]+=n;
                }
            }
            else{
                map<int,int> qq;
                for(int k=0;k<now.size();k++){
                    int l=now[k] + p;
                    int r = now[k] - p;
                    if(l>n)l-=n;
                    if(r<=0)r+=n;
                    qq[l] += 1;
                    qq[r] += 1;
                }
                now.clear();
                for(auto a:qq)now.push_back(a.first);
            }
        }
        map<int,int> ans;
        int total = 0;
        for(int j=0;j<now.size();j++){
            if(ans[now[j]])continue;
            ans[now[j]] = 1;
            total += 1;
        }
        cout << total << endl;
        for(auto a:ans)cout << a.first << " ";
        cout << endl;
 
    }
 
 
}
 
 
 
 
 
 
 
 
 
 
 
void printvvi(vvi a){
    for(auto b:a){
        for(auto c:b)cout << c << " ";
        cout << endl;
    }
}
 
int sum(vi target){
    int ans = 0;
for(auto a:target) ans += a;
return ans;}
 
int sum(vvi target){
    int ans = 0;
for(auto a:target)for(auto b:a)ans += b;
return ans;}
 
void printn(vi a){
for(auto g:a)cout << g << " ";
cout << endl;}
void printn(int a){
cout << a << endl;}
 
void print(int a){
cout << a;}
void prints(int a){
cout << a << " ";}
 
void print(vi a){
for(auto g:a)cout << g;}
void prints(vi a){
for(auto g:a)cout << g << " ";}
 
 
int isPrime(int target){
    if(target<=1) return 0;
    for(int i=2;i<=sqrt(target);i++){
        if(target%i==0) return 0;
    }
    return 1;
}
