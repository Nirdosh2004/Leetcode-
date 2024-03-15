class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.length();
        int maxLength = 0 , start = 0 , end = 0;
        vector<int> charSet(128 ,-1);
        for(end = 0;end<length;end++){
            if(charSet[s[end]] >= start){
                start = charSet[s[end]] + 1;
            } 
            charSet[s[end]] = end;
            maxLength = max(maxLength , end - start + 1);
        }
        return maxLength;
    }
};
