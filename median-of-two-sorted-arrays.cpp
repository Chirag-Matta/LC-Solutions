class Solution {
public:
    

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        
        
        int n1 = nums1.size();
        int n2 = nums2.size();

        if(n1>n2){findMedianSortedArrays(nums2,nums1);}

        int n = n1+n2;
        int left_cnt = (n1+n2+1)/2;
        
        int low = 0;
        int high = n1;
        while(low<=high){
            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX;
            int mid1 = (low+high) >> 1; 
            //10 = 1010 {8 4 2 1 } & 5 = 101{4 2 1 }

            int mid2 = left_cnt - mid1;
            if(mid1-1>=0)l1 = nums1[mid1-1];
            if(mid2-1>=0)l2 = nums2[mid2-1];
            if(mid1<n1)r1 = nums1[mid1];
            if(mid2<n2)r2 = nums2[mid2];
            if(l1<=r2 && l2<=r1){
                if(n%2==0){
                    return ((double)(max(l1,l2) + min(r1,r2)))/2.0;
                }
                else{
                    return max(l1,l2);
                }
            }
            else if (l1 > r2) high = mid1 - 1;
            else low = mid1 + 1;
        }

        return 0.0;
    }
    
};