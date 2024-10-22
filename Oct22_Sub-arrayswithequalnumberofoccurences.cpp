

class Solution {
  public:
    int sameOccurrence(vector<int> &arr, int x, int y) {
        // code here
        int n = arr.size();
        unordered_map<int, int> mp;
        int a = 0, b = 0;
        int ans = 0;
        
        mp[0] = 1;
        
        for(int i = 0; i < n; i++){
            if(arr[i] == x) a++;
            if(arr[i] == y) b++;
            
            ans += mp[a - b];
            
            
            mp[a - b]++;
            
        }
        
        return ans;
    }
};
