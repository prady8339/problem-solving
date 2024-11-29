class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
       unordered_set<int> seen;
       for(auto &e : edges){
        seen.insert(e[1]);
       }
       int ans = -1;
       for(int i = 0 ; i < n ; i++){
        if(seen.count(i)) continue;
        else{
            if(ans != -1) return -1;
            ans = i;
        }
       }
       return ans;
    }
};