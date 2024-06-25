class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factors;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i == 0){
                factors.push_back(i);
                if(i!=sqrt(n)) factors.push_back(n/i);
            }
        }
        sort(factors.begin(),factors.end());
        return (factors.size() >= k ? factors[k-1] : -1);
    }
};
