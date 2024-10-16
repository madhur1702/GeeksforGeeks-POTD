// User function template for C++

class Solution {
  public:
long long findSmallest(vector<int> &arr) {
        // Your code goes here.
        int n=arr.size();
        long long ans;
        long long cnt=0;
         long long sum = 0;

        if(arr[0]>1){
            return 1;
        }
        for (int i = 0; i < arr.size(); i++) {
          
            if (arr[i] > sum + 1) {
                return sum + 1;
            }
            
            sum += arr[i];
        }
        return sum + 1;
    }
};
