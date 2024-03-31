#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target )
{
    int start = 0;
    int end = nums.size() - 1; 
  int mid = start + (end - start)/2; 
    
  for( ; start <= end; mid = start + (end - start)/2)
  {
     if(target == nums[mid])
    {
        return mid;
    }
    if(target > nums[mid])
    {
         start = mid + 1;
     }
    else if(target < nums[mid])
    {
        end = mid - 1;
    }
  }
  return mid ;


}
int main()
{
    vector<int> nums{1,3,5,6};

    int target;
    cout << endl <<  " enter the target = ";
    cin >> target;

    cout << endl << " Index of target = " << searchInsert(nums, target);

    return 0;
}