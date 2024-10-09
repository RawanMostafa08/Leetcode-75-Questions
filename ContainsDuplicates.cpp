#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

// bool containsDuplicate(vector<int> &nums)
// {
//     map<int, bool> freq;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (freq.find(nums[i]) != freq.end() && freq[nums[i]] == true)
//             return true;
//         else
//         {
//             freq.insert({nums[i], true});
//         }
//     }
//     return false;
// }

bool containsDuplicate(vector<int> &nums)
{
     set<int> freq;
    for (int i = 0; i < nums.size(); i++)
    {
        freq.insert(nums[i]);
    }
    if (nums.size() > freq.size())
        return true;
    else
        return false;
}
int main()
{
    vector<int> nums = {1, 2,3,4};
    cout << containsDuplicate(nums) << endl;
    return 0;
}
