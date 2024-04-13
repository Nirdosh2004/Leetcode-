class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
       int copy = x ;    
       int ans = 0;    
       
       while(x != 0) {
           int reminder = x % 10;
           if((ans > INT_MAX/10) || (ans == INT_MAX/10 && x>7))
           return false;
           ans = ans * 10  + reminder;
           x /= 10;
       }
       if(ans != copy){
           return false;
       }
       else {
           return true;
       }
    }
};
