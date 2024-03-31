#include<iostream> 
#include<algorithm>
#include<vector>
using namespace std;

void rotate(vector<int> nums, int k)
{
      reverse(nums.begin(), nums.end());
        int s = 0;
        int e = nums.size() - 1;
        int x = k;
        while( x < e)
        {
            if(s < k - 1)
            {
                swap(nums.at(s), nums.at(k - (s + 1)));
                cout << endl << " run = " ;
                s++;
                k--;
            }
            else{
                swap(nums.at(x), nums.at(e));
                x++;
                e--;
            }
        }
 
         for(int i = 0; i < nums.size(); i++)
        {
            cout << " " << nums.at(i);
        }
}

int main()
{
    // vector<int> nums{1,2,3,4,5,6,7};
    vector<int> nums2{1, 100, 3, 99};
    int k = 2;
    // int k = 3;

    rotate(nums2, k);

    return 0;
}