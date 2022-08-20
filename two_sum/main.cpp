/*

Given an unsorted integer array, find a pair with the given sum in it.

• Each input can have multiple solutions. The output should match with either one of them.

Input : nums[] = [8, 7, 2, 5, 3, 1], target = 10
Output: (8, 2) or (7, 3)

• The solution can return pair in any order. If no pair with the given sum exists, the solution should return the pair (-1, -1).

Input : nums[] = [5, 2, 6, 8, 1, 9], target = 12
Output: (-1, -1)

*/

#include <iostream>
#include <utility>
#include <vector>

using namespace std;

class Solution
{
public:
	pair<int, int> findPair(vector<int> const &nums, int target)
	{
		pair<int, int> ret_val;

		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i + 1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					ret_val.first = nums[j];
					ret_val.second = nums[i];
					return ret_val;
				}
			}
		}
		ret_val.first = -1;
		ret_val.second = -1;
		return ret_val;
	}
};

int main(int argc, char *argv[])
{
	pair<int, int> p1;
	int target;
	vector<int> v1;
	Solution s;

	if (argc < 2)
	{
		cerr << "usage: " << argv[0] << " target num0 num1 num2 ..." << endl;
		return 1;
	}
	target = atoi(argv[1]);
	for (int i = 2; i < argc; i++)
		v1.push_back(atoi(argv[i]));
	p1 = s.findPair(v1, target);
	cout << "(" << p1.first << ", " << p1.second << ")" << endl;

	return 0;
}
