class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> result;
        if(matrix.empty()) return result;
        int k=0,l=0,m,n,ind=0,i;
        m = matrix.size();
        n = matrix[0].size();
        while(k<m && l<n)
        {
            for(i=l;i<n;i++)
            {
                result.push_back(matrix[k][i]);
            }
            k++;
            for(i=k;i<m;i++)
            {
                result.push_back(matrix[i][n-1]);
            }
            n--;
            if(k<m)
            {
                for(i=n-1;i>=l;i--)
                {
                    result.push_back(matrix[m-1][i]);
                }
                m--;
            }
            if(l<n)
            {
                for(i=m-1;i>=k;i--)
                {
                    result.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return result;
    }
};
