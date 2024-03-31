#include<iostream>
#include<vector>
using namespace std;
 
 int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        int m = 0;
        int n = 0;

        while((m < nums1.size() || n < nums2.size())){
            if(nums1.at(m) == nums2.at(n))
              return nums1.at(m);
            
            if(nums1.at(m) > nums2.at(n))
            {
                // cout << endl << " m = " << nums1.at(m);
            n++;
            }
            
            else if(nums1.at(m) < nums2.at(n))
            {
                // cout << endl << " n = " << nums2.at(n);
              m++;
            }
        }
    
        return -1;
    }

    // num1 = {5, 15, 16, 20, 22, 39, 43, 44, 44, 55, 61, 62, 62, 64, 72, 73, 81, 88, 90, 95};
    // num2 = {2, 8, 9, 11, 12, 13, 26, 29, 38, 49, 50, 51, 58, 63, 67, 72, 75, 82, 92, 96};

int main()
{

 vector<int> nums1 = {5, 15, 16, 20, 22, 39, 43, 44, 44, 55, 61, 62, 62, 64, 72, 73, 81, 88, 90, 95};

 vector<int> nums2= {2, 8, 9, 11, 12, 13, 26, 29, 38, 49, 50, 51, 58, 63, 67, 72, 75, 82, 92, 96};

   
cout << endl << " The common Number = " <<  getCommon(nums1, nums2);


    return 0;
}


