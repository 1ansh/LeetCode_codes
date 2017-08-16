class Solution {
public:
    double median(vector<int> nums1,vector<int> nums2,int m, int n)
    {
        int i,j,k;
        double ans;
        vector<int> merge(m+n);
        i=0;j=0;k=0;
        while(i<m && j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                merge[k] = nums1[i];
                i++;
            }
            else
            {
                merge[k] = nums2[j];
                j++;
            }
            k++;
        }
        while(i<m)
        {
            merge[k] = nums1[i];
            i++;
            k++;
        }
        while(j<n)
        {
            merge[k] = nums2[j];
            j++;
            k++;
        }
        for(i=0;i<(m+n);i++)
        {
            cout<<merge[i]<<" ";
        }
        cout<<endl;
        int key;
        if((m+n)%2 == 0)
        {
            key = (m+n)/2;
            ans = (float(merge[key])+float(merge[key-1]))/2;
        }
        else
        {
            key = ((m+n)/2);
            ans = float(merge[key]);
        }
        cout<<key;
        return ans;
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int m,n;
        m = nums1.size();
        n = nums2.size();
        double ans = median(nums1,nums2,m,n);
        return ans;
    }
};
