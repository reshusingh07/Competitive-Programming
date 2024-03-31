#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int> nums) {
int n = nums.size();
        for(int i = 1; i < n; i++) {
            bool swiped = false;
            for(int j = 0; j < n - i; j++) {
                    if(nums[j] > nums[j + 1]) {
                        swap(nums[j], nums[j + 1]);
                        swiped = true;
                    }
            }
            if(!swiped) break;
        }
        for(int i = 0; i < nums.size(); i++)
        cout << "  "<< nums[i];

}

int main()
{
    // vector<int> nums = {9,6,4,2,3,5,7,0,1};
    vector<int> nums = {3, 2, 9, 0};

    cout <<endl << " Missing Number = " << missingNumber(nums);

    return 0;
}