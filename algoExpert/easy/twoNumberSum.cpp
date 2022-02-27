

//time : O(n) space : O(n)
#include <algorithm> 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        
        //nums1 = mergeSort(nums);
        vector<int> nums1 = nums;
        sort(nums1.begin(), nums1.end());
        auto it = nums1.begin();
        int sec = 0;
        for ( ; it != nums1.end() ; it++)
            {
                sec = target - *it;
                if (binarySearch(nums1 , sec))
                {
                    break;
                }
            }
        vector<int> indices ;
        for (int i= 0 ; i<nums.size() ; i++)
        {
            if (*it == nums[i]  || sec == nums[i])
            {
                indices.push_back(i);
            }
        }
        return indices;
    }
    
    bool binarySearch(vector<int> &nums ,int target)
    {
        int l=0;
        int m =0;
        int r = nums.size()-1;
        while(l<=r)
        {
            m = ( l+r ) / 2 ;
            if (nums[m]==target)
                return true;
            else if (nums[m]>target)
                r=m-1;
            else
                l=m+1;
            
        }
        
        return false;
        
    
    }
    

};






//time : O(nlogn) space : O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        
        vector<int> nums1 = nums;
        sort(nums1.begin(), nums1.end());
        auto l = 0;
        auto r = nums1.size()-1;
        int currentSum;
        while(l<=r)
        {
            currentSum = nums1[l]+nums1[r];
            if (currentSum == target)
                break;
            else if (currentSum < target)
                l++;
            else
                r--;
        }
        
        vector<int> indices ;
        for (int i= 0 ; i<nums.size() ; i++)
        {
            if (nums1[l] == nums[i]  || nums1[r] == nums[i])
            {
                indices.push_back(i);
            }
        }
        return indices;
    }
        
        
        
    
};