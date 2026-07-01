class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n,1);
        
        int left_prod=1;
        for(int i = 0;i<n;i++){
            ans[i]=left_prod;
            left_prod*=arr[i];
        }

        int right_prod=1;
        for(int i = n-1;i>=0;i--){
            ans[i]*=right_prod;
            right_prod*=arr[i];
        }

            
        return ans;
    }
};