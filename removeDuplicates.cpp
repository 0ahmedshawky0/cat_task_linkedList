#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    list<int> nums;
    int x;
    cout << " Enter element in list ";
    while (cin >> x)
    {
        nums.push_back(x);
    }
    nums.unique();
    cout << " list after remove deplicates element ";
    for (auto it = nums.begin(); it != nums.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
