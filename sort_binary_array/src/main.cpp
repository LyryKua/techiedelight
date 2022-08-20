#include "Solution.hpp"

int error(char *name)
{
    cerr << "usage: " << name << " [01] [01] [01] ..." << endl;
    return 1;
}

int main(int argc, char *argv[])
{
    vector<int> v1;
    Solution s1;

    if (argc < 2)
        return error(argv[0]);

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "0") && strcmp(argv[i], "1"))
            return error(argv[0]);

        v1.push_back(atoi(argv[i]));
    }

    s1.sortArray(v1);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << endl;

    return 0;
}
