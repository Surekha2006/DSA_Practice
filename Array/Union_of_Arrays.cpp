class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        
        vector<int>Union;
        int i=0;
        int j=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j])
            {
                if(Union.empty()||Union.back()!=nums1[i])
                {
                Union.push_back(nums1[i]);
                }
                i++;
            }
            else{
                if(Union.empty()||Union.back()!=nums2[j])
                {
                Union.push_back(nums2[j]);
                }
                j++;
            }
        }
        while(i<n1)
        {
            if(Union.back()!=nums1[i])
            {
            Union.push_back(nums1[i]);
            }
            i++;
        }
        while(j<n2)
        {
            if(Union.back()!=nums2[j])
            {
            Union.push_back(nums2[j]);
            }
            j++;
        }
        return Union;
    }
};
