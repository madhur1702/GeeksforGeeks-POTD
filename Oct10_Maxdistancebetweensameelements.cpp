class Solution {
  public:
    
int maxDistance(vector<int> &arr) {
        unordered_map<int, int> memo;
        int ans = -1; int n = arr.size();
        for(int i = 0; i < n; i++){
            (memo.find(arr[i]) == memo.end()) ? memo[arr[i]] = i + 1 : ans = max(ans, abs(i+1 - memo[arr[i]]));
        }
        return ans;
    }
    
    
};
