class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        int d = 0;
        priority_queue<int> brick;
        
        for(int i=0;i<h.size()-1;i++){

            if(h[i] >= h[i+1]) continue;

            b -= h[i+1] - h[i];
            brick.push(h[i+1] - h[i]);

            if(b<0){
                b += brick.top();
                brick.pop();
                l -= 1;
            }
            if(l<0) return i;
        }
        return h.size() - 1;
    }
};
