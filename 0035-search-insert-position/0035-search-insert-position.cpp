class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(),l=0,h=n-1;
        int mid= l+(h-l)/2;

        while(l<=h){
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target){
                l=mid+1;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }
            mid=l+(h-l)/2;

        }

        return mid;

    }
};