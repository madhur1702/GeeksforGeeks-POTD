
class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        int z = arr.size();
        int count =0 ;
        while(count < z/2){    //   size/2   times 
            int x = arr[arr.size()-1];  // Last ele
            arr.insert(arr.begin()+0,x);
            arr.pop_back();    //  last_ele is inserted at begin, so remove it from last
            arr.erase(arr.begin() + arr.size()-count - 1);    // idx of delete ele from begin
            count++;
        }
        return arr[0];
    }
};
