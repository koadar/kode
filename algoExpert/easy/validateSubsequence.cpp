
//time : O(n) space : O(n)
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
	
	auto it   = sequence.begin();
	auto it2  = array.begin();
	
	while (it != sequence.end() )
	{
		if (*it == *it2)
			{
				it++;
				it2++;
			}
		else
			{
				it2++;
				if (it2 == array.end() || it2-1 ==array.end())
				{
					return false;
				}
			}
	}
  return true;
}





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