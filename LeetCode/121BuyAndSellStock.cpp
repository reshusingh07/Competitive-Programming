#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
      int buy = prices[0];
      int sell = prices[1];

     for(int i = 1; i < prices.size(); i++)  
      {
          if(buy >= prices[i])
          {
               buy = prices[i];
           }
            else if((i + 1) < prices.size())
            {

               if(sell < prices[i + 1])
              {
                  sell = prices[i + 1];
             
              }
            }
          
      }
      if(sell > 0)
        return (sell - buy);
        else
            return 0;
        }


int main()
{
    vector<int> nums = {7,6,4,3,1};
    vector<int> nums2{2,4,1};


    cout << endl << " Profit = " << maxProfit(nums);
    cout << endl << " Profit = " << maxProfit(nums2);


    return 0;
}