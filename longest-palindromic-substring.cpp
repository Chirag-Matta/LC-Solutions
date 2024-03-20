class Solution {
public:
    string longestPalindrome(string s) {
        int l,r;
        int n = s.size();
        int maxLen = 1;
        string res = "";
        res+=s[0];

        if(n<=1){
            return s;
        }

        for(int i=0;i<n;i++){
            // Odd Pal
            l=i;
            r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1 > maxLen){
                    maxLen = r-l+1;
                    res = s.substr(l,maxLen);
                }
                l--;
                r++;
            }

            // Even Pal
            l=i;
            r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1 > maxLen){
                    maxLen = r-l+1;
                    res = s.substr(l,maxLen);
                }
                l--;
                r++;
            }
        }
        
        return res;
        
    }
};