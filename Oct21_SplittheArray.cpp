// User function template for C++
class Solution {
  public:
    int countgroup(vector<int>& arr) {
        // Complete the function
        int x = 0;
        for(int i : arr)
            x ^= i;
        if(x != 0)
            return 0;
        
        long long a = pow(2, arr.size()-1) - 1;
        long long mod = pow(10, 9)+7;
        
        return a%mod;
    }


};
