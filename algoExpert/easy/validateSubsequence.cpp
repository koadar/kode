
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

