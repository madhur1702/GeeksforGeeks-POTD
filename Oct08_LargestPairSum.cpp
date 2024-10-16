
class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int n = arr.size();
        int i=0, k = n-1, maxi = INT_MIN;
        while(i < k) {
            maxi = max(maxi, arr[i]+arr[k]);
            if(arr[i] <= arr[k])i++;
            else k--;
        }
        return maxi;
    }
};
