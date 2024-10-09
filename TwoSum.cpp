#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
// vector<int> twoSum(vector<int> &nums, int target)
// {
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 return {i, j};
//             }
//         }
//     }
//     return {};
// }

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result; 
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
          int diff=target-nums[i];
          auto iter=map.find(diff);
          if(map.size()!=0 && iter!=map.end()) //found
          {
            result.push_back(iter->second);
            result.push_back(i);
            return result;
          }
          else{ //not found
            map[nums[i]]=i;
          }
        }
        return result;
    }
int main()
{
    vector<int> nums = {2,7,8,9,2,7};
    vector<int> res = twoSum(nums, 11);
    if (!res.empty())
    cout << res[0] << " " << res[1] << endl;
    return 0;
}
