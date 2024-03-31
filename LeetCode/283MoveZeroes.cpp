#include<iostream>
#include<vector>
using namespace std;

   void moveZeroes(vector<int>& nums) {
       int end = 1;
       int low = 1;
       for(int i = 0; i < nums.size() - low; i++)
       {
           if(i == nums.size() - low)
           {
            cout << endl << " run ";
               i = 0;
               low++;
           }
           if( 0 == nums.at(i))
           {
           cout << endl << " i = " << i << endl;
               swap(nums.at(i), nums.at(end));
               end++;
           }
       }
       for(int i = 0; i < nums.size(); i++)
       {
         cout << " " << nums.at(i);
       }

    }

    int main()
    {
        vector<int> arr = {0, 1, 0, 3, 12};

        moveZeroes(arr);
    }