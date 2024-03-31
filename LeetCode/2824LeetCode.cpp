#include<iostream>
#include<vector>
using namespace std;

//Count Pairs Whose Sum is Less than Target

 int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
         for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] + nums[j] < target)
            count++;
         }
        }
        return count;
    }

 int main()
 {
   vector<int> nums = {-1,1,2,3,1};
   vector<int> nums2 = {-6,2,5,-2,-7,-1,3};

   int target = 2;
   int target2 = -2;

 cout << endl << "Total number of Paris = " << countPairs(nums, target);
 cout << endl << "Total number of Paris = " << countPairs(nums2, target2);



   return 0;
}