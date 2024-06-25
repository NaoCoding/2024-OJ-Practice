class Solution {
public:
    int minFlips(string target) {
        int ans = 0;
        if(target[0] == '1') ans += 1;
        for(int i=1;i<target.size();i++){
            if(target[i] == target[i-1]) continue;
            ans += 1;
        }
        return ans;
    }
};
