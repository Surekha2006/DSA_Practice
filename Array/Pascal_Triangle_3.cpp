class Solution {
public:
    vector<vector<int>> pascalTriangleIII(int n) {
        vector<vector<int>>ans;
        ans.push_back({1});
        for(int i=1;i<n;i++)
        {
            ans.push_back(generateRow(i));
        }
      return ans;
    }
private:
    vector<int>generateRow(int r)
    {
        vector<int>row;
        row.push_back(1);
        int k=1;
        for(int i=0;i<r;i++)
        {
           k*=(r-i);
           k=k/(i+1);
           row.push_back(k);
        }
        return row;
    }
};
