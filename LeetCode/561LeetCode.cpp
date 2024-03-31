#include<iostream>
#include<vector>
using namespace std;

// Array Position 

 int arrayPairSum(vector<int>& nums) {

    int n = nums.size();
     for(int i = 1; i < n; i++)
     {
        bool swaped = false;
        for(int j = 0; j < n - i; j++)
        {
            if(nums[j] > nums[j + 1]){
                swap(nums[j] , nums[j + 1]);
                swaped = true;
            }
        }
        if(!swaped)
         break;
     }
         
         int sum = 0;
      for(int i = 0; i < n; i++)
        {
            if(i % 2 != 0){
                    sum += min(nums[i - 1],nums[i]);
            }
        }     
        cout << endl << " the Maximum sum = " << sum;        
       return 0;
    }

int main()
{
        vector<int> nums = {6, 2, 6, 5, 1, 2};


        arrayPairSum(nums);


        return 0;
}