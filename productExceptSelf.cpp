#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> ans(nums.size(), 1);
    vector<int> prefix(nums.size(), 1);
    vector<int> postfix(nums.size(), 1);

    int acc = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        prefix[i] = acc;
        acc *= nums[i];
    }
    acc = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        postfix[i] = acc;
        acc *= nums[i];
        ans[i] = prefix[i] * postfix[i];
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    //    prefix        1, 1, 2, 6
    //    postfix       24,12,4,1
    //    ans           24,12,8,6
    vector<int> ans;
    ans = productExceptSelf(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
