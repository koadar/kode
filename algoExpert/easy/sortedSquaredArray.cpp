class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        
        vector<int> result ;
        int i =0;
        while (1)
        {
            if (nums[nums.size()-1]<0)
            {
                i=nums.size();
                break;
            }
            if (nums[i] >=0)
            {
                break;
            }
            i++;
        }
        
        int f = i-1;
        int e = i;
        
        int a ;
        int b;
        while (f>=0 && e <= nums.size()-1 )
        {
            a = nums[e]*nums[e];
            b = nums[f]*nums[f];
            if (b>a)
            {
                result.push_back(a);
                e++;
            }
            else
            {
                result.push_back(b);
                f--;
            }
        }
        
        while(f!=-1)
        {
                result.push_back(nums[f]*nums[f]);
                f--;
        }
        
        while(e!=nums.size())
        {
                result.push_back(nums[e]*nums[e]);
                e++;
        }
        
        return result;
    }
};
