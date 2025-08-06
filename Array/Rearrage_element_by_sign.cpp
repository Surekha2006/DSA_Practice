class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        int j=1;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
              ans[k]=nums[i];
              k+=2;
            }
            else{
              ans[j]=nums[i];
              j+=2;
            }
        }
        return ans;
    }
};
