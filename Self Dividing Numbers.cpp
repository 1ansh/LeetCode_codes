class Solution {
public:
    vector<int> selfDividingNumbers(int l, int r) 
    {
        vector<int> ans;
        int i,tnum,temp;
        bool flag = true;
        for(i=l;i<=r;i++)
        {
            flag = true;
            tnum = i;
            while(tnum != 0)
            {
                temp = tnum%10;
                tnum = tnum/10;
                if(temp == 0)
                {
                    flag = false;
                    break;
                }
                if(i%temp != 0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
