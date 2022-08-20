#include "Solution.hpp"

int main(int argc, char *argv[])
{
    vector<int> v1;
    Solution s1;

    if (argc < 2)
    {
        cerr << "usage: " << argv[0] << " num0 num1 num2 ..." << endl;
        return 1;
    }
    for (int i = 1; i < argc; i++)
        v1.push_back(atoi(argv[i]));
    cout << (s1.hasZeroSumSubarray(v1) ? "true" : "false") << endl;
    return 0;
}
