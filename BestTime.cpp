#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    if (prices.size() == 0)
        return 0;
    int l = 0;
    int maxProfit = 0;
    for (int r = 1; r < prices.size(); r++)
    {
        int currProfit = prices[r] - prices[l];
        if (currProfit < 0)
        {
            l = r;
        }
        else maxProfit = max(maxProfit, currProfit);

    }

    return maxProfit;
}
int main()
{
    vector<int> prices = {10,8,7,5,2};
    cout << maxProfit(prices) << endl;
    return 0;
}



