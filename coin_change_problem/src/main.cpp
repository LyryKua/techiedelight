#include "Solution.hpp"

int main(int argc, char *argv[])
{
    vector<int> v1;
    int target;
    Solution s1;

    if (argc < 3)
    {
        cerr << "usage: " << argv[0] << " target num0 num1 num2 ..." << endl;
        return 1;
    }

    target = atoi(argv[1]);
    for (int i = 2; i < argc; i++)
        v1.push_back(atoi(argv[i]));

    cout << s1.findMinCoins(v1, target) << endl;

    return 0;
}
