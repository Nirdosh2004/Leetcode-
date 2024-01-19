class Solution {
public:
    int maxPower(string s) {
        if(s.empty()){
            return 0;
        }
        int count = 1;
        int ans = 1;
        for(int i=1;i<=s.length() ;i++){
            if(s[i] == s[i-1]){
                count++;
            }
            else{
                ans = max(ans , count);
                count = 1;
            }
        }
        return ans;
    }
};
