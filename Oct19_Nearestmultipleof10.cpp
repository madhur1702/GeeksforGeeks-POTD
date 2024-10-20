
class Solution {
  public:
    string roundToNearest(string str) {
        int i = str.length()-1;
        if(str[i]-48 <= 5){
            str[i] = '0';
        }else{
            str[i] = '0';
            i--;
            while(str[i] == '9' and i > -1){
                str[i] = '0';
                i--;
            }
            if(i == -1){
                str = '1'+str;
            }else{
                str[i] = str[i]+1;
            }
        }
        return str;
    }
};

