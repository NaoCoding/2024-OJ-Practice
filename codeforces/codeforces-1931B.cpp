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
typedef vector<vector<double>> vvd;
 
#define append push_back
#define cin_cout ios_base::sync_with_stdio(0); cin.tie(0);
#define all(p) p.begin(),p.end()
#define for4(i,a,b,c) for(int i=a;i<b;i+=c)
#define for3(i,a,b) for(int i=a;i<b;i++)
#define for2(i,a) for(int i=0;i<a;i++)
#define fora(i,a) for(auto i:a)
int isPrime(int target);
int sum(vi target);
int sum(vvi target);
void print(vi a);
void prints(vi a);
void printn(vi a);
void print(int a);
void prints(int a);
void printn(int a);
void printvvi(vvi a);
void yes(){cout << "YES\n";}
void no(){cout << "NO\n";}
void printl(){cout << endl;}
 
signed main(){cin_cout
 
    int p;
    cin >> p;
    while(p--){
        int n;
        cin >> n;
        vi a(n);
        int p = 0;
        for2(i,n){
        cin >> a[i];
        p += a[i];}
        if(p%n!=0){
            no();
            continue;
        }
        else p = p/n;
        int o = 0,g = 1;
        fora(i,a){
        if(i>=p) o += i-p;
        else{
            if(i+o>=p){
                o -= p - i;
            }
            else{
                no();
                g = 0;
                break;
            }
        }}
        if(g)yes();
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
