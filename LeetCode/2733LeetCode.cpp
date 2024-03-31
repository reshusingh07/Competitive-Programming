//  Neither Minimum nor Maximum
#include<iostream>
#include<vector>
using namespace std;

 int findNonMinOrMax(vector<int>& nums) {

            if(nums.size() == 2)
            return -1;
        int max = nums[0], min = nums[0],n = nums.size(), maxIndex = 0,minIndex = 0;
        for(int i = 1; i < nums.size(); i++){

                if(max < nums[i]){
                        maxIndex = i;
                        max = nums[i];
                }
                if(min > nums[i]){
                    minIndex = i;
                    min = nums[i];
                }
        }
        cout << endl << " The Maxmium Number = " << max << " index = " << maxIndex;
        cout << endl << " The Minmium Number = " << min << " index = " << minIndex;
    //   nums.erase(nums.begin() + maxIndex);
      nums.erase(nums.begin() + minIndex);
    //    return nums[0];
    cout << endl;
    for(int i = 0; i < nums.size(); i++)
    cout << " " << nums[i];
    }

int main()
{
    // vector<int> nums = {3, 2, 1, 4};
    // vector<int> nums2 = { 1, 2 };
    // vector<int> nums3 = { 2, 4, 25 };
    vector<int> nums4 = { 10, 27, 3 };  


//     cout << endl << " The Number are = " << findNonMinOrMax(nums);
//    cout << endl << " The Number are = " << findNonMinOrMax(nums2);
     cout << endl << " The Number are = " << findNonMinOrMax(nums4);



    return 0;
}
