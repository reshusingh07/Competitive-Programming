#include<iostream>
#include<vector>
using namespace std;

 int targetIndices(vector<int>& nums, int target) {
        // vector<int> ans;
        
        for(int i = 0; i < nums.size() ; i++)
        {
            int small = i;
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums.at(small) > nums.at(j))
                small = j;
            }
            swap(nums.at(i), nums.at(small));

            if(target == nums.at(i))
            cout << " find  = " << i << endl;
            // ans.push_back(i);

         }
         for(int i = 0; i < nums.size(); i++)
         {
             cout << " " << nums.at(i);
         }
        // return ans;
      


    }
    



int main()
{
    vector<int> nums{1, 2, 5, 2, 3};
    int target;
    cout << endl <<  " enter the Target = " ;
    cin >> target;

   targetIndices(nums, target);

  return 0; 

}

