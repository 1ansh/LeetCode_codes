class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans=0;
        while(x!=0 || y!=0)
        {
            int rx = x%2;
            int ry = y%2;
            if(rx != ry)
            {
                ans++;
            }
            x = x/2;
            y = y/2;
        }
        return ans;
    }
};
