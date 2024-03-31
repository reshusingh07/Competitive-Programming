// 153. Find Minimum in Rotated Sorted Array,p[k=p=kjohi-u-yuuuuuuuuuuuuuyyuyu]
#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int mid;

        while(left < right){

            mid = (left+right)/2;
            cout << endl << "mid = " << mid;
            if(nums[mid] < nums[right]){
                cout << endl << " Right";
                right = mid;
            } 
            else if (nums[mid] > nums[right]){
                cout << endl << "left";
                left = mid + 1;
            }
        }
        
        return nums[left];
    }

int main() {

    vector <int> nums1 = {3, 4, 5, 1, 2};
    vector <int> nums2 = {2, 4, 5, 6, 7, 0, 1, 2};
    vector <int> nums3 = {11, 13, 15, 17};

    cout << endl << "nums1 small element = " << findMin(nums1) << endl;
    cout << endl << "nums2 small element = " << findMin(nums2) << endl;
    cout << endl << "nums3 small element = " << findMin(nums3) << endl;
    return 0;
}