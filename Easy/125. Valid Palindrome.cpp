class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0 , end = s.length()-1;
        while(start < end){
            while(start < end && !isalnum(s[start])){ //isalnum() used to check that at the index there is number or not 
            // isalpha() is used to check that at the index there is alphabet or not 
                start++;
            }
            while(start < end && !isalnum(s[end])){
                end--;
            }
            while(start < end && tolower(s[start]) != tolower(s[end])){ //tolower() is used to convert uppercase alphabet into lower case alphabet
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
