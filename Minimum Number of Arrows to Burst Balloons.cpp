class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        vector<vector<int>> v;
        int n = points.size();
        sort(points.begin(),points.end());
        v.push_back(points[n-1]);
        for(int i=n-2;i>=0;i--){
            if(v.empty() || v.back()[0] > points[i][1]){
                v.push_back(points[i]);
            }
            else{
                v.back()[1] = min(v.back()[1],points[i][1]);
            }
        }
        return v.size();
    }
};