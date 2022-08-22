#include "Solution.hpp"

int error(char *name)
{
    cerr << "usage: " << name << " [012] [012] [012] ..." << endl;
    return 1;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
        return error(argv[0]);

    vector<int> nums;
    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "0") && strcmp(argv[i], "1") && strcmp(argv[i], "2"))
            return error(argv[0]);

        nums.push_back(atoi(argv[i]));
    }

    Solution s1;

    s1.sortArray(nums);

    for (auto num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}
