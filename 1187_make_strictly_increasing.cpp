#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {
		if (arr1.size() <= 1)
			return 0;

		sort(arr2.begin(), arr2.end());

        for (int i = 1; i < arr1.size(); i++)
		{
		    if (arr1[i-1] >= arr1[i])
			{
			    arr1[i] = successor;
			}
		}
    }
};
