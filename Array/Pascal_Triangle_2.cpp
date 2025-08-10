class Solution {
public:
    vector<int> pascalTriangleII(int r) {
         vector<int>tri;
         tri.push_back(1);
         int ans=1;
         for(int i=0;i<r-1;i++)
         {
            ans*=(r-i-1);
            ans=ans/(i+1);
            tri.push_back(ans);
         }
         return tri;
    }
};
