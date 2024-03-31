#include<iostream>
#include<vector>
using namespace std;

int maxOperations(vector<int>& nums) {
        
    int n = nums.size();
    if(n == 2) return 1;

    int leftSum = nums[0] + nums[1];
    int left = 2;
    int right = n - 1;
    int cmt1 = 1;
    int x = 1;
     while(left < right) {
        
            if(nums[left] + nums[left + 1] == leftSum && left < right) {                
                left += 2;
                cmt1++;
            }
            else if(nums[right] + nums[right - 1] == leftSum && right > left) {
                right -= 2;
                cmt1++;
            }
            else if(nums[left] + nums[right] == leftSum && left < right) {
 
                left++; right--;
                cmt1++;
            }
            else 
                break;
        }
        cout << endl << " 1st cmt = " << cmt1;
        // 2nd Attempt..
    int bothSum = nums[0] + nums[n - 1];
    left = 1;
    right = n - 2;
    int cmt2 = 1;
    while(left < right) {
        // cout << endl << "work 2";
        if(nums[left] + nums[left + 1] == bothSum && left <= right) {
 
                left += 2;
                cmt2++;
            }
            else if(nums[right] + nums[right - 1] == bothSum && right >= left) {
 
                right -= 2;
                cmt2++;
            }
            else if(nums[left] + nums[right] == bothSum && left < right) {
                 left++; right--;
                cmt2++;
            }
            else 
                break;
    }
    cout << endl << "2nd cmt = " << cmt2;

    // 3rd Attempt...
    int rightSum = nums[n - 1] + nums[n - 2];
    left = 0;
    right = n - 3;
    int cmt3 = 1;
    while(left < right ) {

        // cout << endl << "work 3 ";
        if(nums[left] + nums[left + 1] == rightSum && left <= right) {
            cout << endl << "left = " << left << " right = " << right << " if ";
             left += 2;
            cmt3++;
        }
        else if(nums[right] + nums[right - 1] == rightSum && right >= left) {
            cout << endl << "left = " << left << " right = " << right << " else if 1";
             right -= 2;
            cmt3++;
        }
        else if(nums[left] + nums[right] == rightSum && left < right) {
            cout << endl << "left = " << left << " right = " << right << " else if 2";
                left++; right--;
                cmt3++;
        }
        else{
            cout << endl << "left = " << left << " right = " << right << " Break"; 
            break;
        }
    }
    cout << endl << "left = " << left << " right = " << right;
    cout << endl << "3rd cmt = " << cmt3;
    if(cmt1 > cmt2) {
        if(cmt1 > cmt3) 
            return cmt1;
        else 
            return cmt3;
    }
    else if(cmt2 > cmt3) 
        return cmt2;
    else 
        return cmt3;
    return 0;
}

int main() {

    vector<int> nums = {3, 2, 1, 2, 3, 4};
    // vector<int> nums2 = {1, 7, 4, 5};
    vector<int> nums2 = {298,258,242,18,538,363,193,535,21,357,473,470,227,465,91,374,182,457,99,414,448,422,134,218,338,473,83,23,533,150,304,252,479,77,273,283,196,525,31,99,457,398,158,357,199,256,300,402,154,326,230,15,364,313,458,500,56,522,34,98,492,490,66,392,431,479,77,88,263,293,354,202,338,456,100,254,490,107,449,309,247,896,976,320,471,436,411,267,614,576,233,669,243,444,112,533,23,496,60,66,302,420,136,524,32,251,305,215,341,280,276,218,468,429,127,125,164,64,464,92,458,98,243,192,541,86,470,450,106,132,424,541,15,41,515,494,62,538,18,132,424,109,447,406,150,360,484,72,83,473,541,15,297,259,232,324,406,395,161,453,103,280,276,55,501,108,142,374,182,295,261,329,377,179,263,293,86,83,219,337,42,514,199,347,209,314,38,518};

    // maxOperations(nums);
    // cout << endl << endl;
    // maxOperations(nums2);
    // cout << endl << "max score = " << maxOperations(nums) << endl;
    cout << endl << "max score = " << maxOperations(nums2) << endl;


    cout << endl << endl << "n = " << nums2.size();

    return 0;
}