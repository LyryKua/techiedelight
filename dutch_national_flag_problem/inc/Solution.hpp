#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    void sortArray(vector<int> &nums);

private:
    void fillArray(vector<int> &nums, int start, int end, int val);
};
