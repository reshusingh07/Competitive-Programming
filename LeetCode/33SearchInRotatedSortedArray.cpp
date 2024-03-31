#include<iostream>
#include<vector>
using namespace std;

int Search(vector<int>& nums, int target)
{
    int start = 0; 
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    cout << endl << " mid = " <<mid << " " <<nums[mid];

    for( ; start <= end; mid = start + (end - start) / 2)
    {
        cout << endl << " loop = " ;
        if(target == nums[mid])
        return mid;
    }
    return 0;
}
using namespace std;

int main()
{
    vector<int> nums{4, 5, 6, 7, 0, 1, 2};
    int target;
    cout << endl << " enter target = ";
    cin >> target ;

    cout << " Index of Target number = " << Search(nums, target);

    return 0;
}