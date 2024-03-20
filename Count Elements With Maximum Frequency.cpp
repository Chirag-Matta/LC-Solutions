class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxl = INT_MIN;
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
            if(m[i]>maxl){
                maxl = m[i];
            }

        }
        int ans = 0;
        for(auto i:m){
            if(i.second == maxl){
                ans+=maxl;
            }
        }
        return ans;
    }

};