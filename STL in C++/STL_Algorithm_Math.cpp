#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    vector<int> nums = {3, 5, 2, 8, 3, 78, 2, 45, 865, 34, 3};

    sort(nums.begin(),nums.end(), greater<int>());
    // This function sort the element in decending order...


    for(auto i : nums) 
        cout << " " << i;

    //accumlate(): accumulate function is used to sum up the elements in a range defined by two iterators. Here's how you would use it with nums.begin() and nums.end
    // NOTE : We have to  Add #include <numeric> for using accumlate()...

    vector <int> nums2 = {1, 2, 3, 4, 5};
    int sum = accumulate(nums2.begin(), nums2.end(), 0);
   
    // In this example, accumulate will sum up all the elements in the nums vector, starting from nums.begin() and ending at nums.end(), and the initial value for the sum is set to 0.
    cout << endl << "sum of all element of array = " << sum;


    // sort(): These function help to sort the element into the decreasing Order...

    sort(s.rbegin(),s.rend());
//   Before : {7, 2, 1, 6, 9, 0}
//   After funtion call : {9, 7, 6, 2, 1, 0}

    // Sytax: These syntax to improve overall performance of the program when input and very large

         ios_base::sync_with_stdio(false);
        cin.tie(NULL); what is this




    return 0;
}