#include<iostream>
#include<vector>
using namespace std;

// 1103. Distribute Candies to People

vector<int> distributeCandies(int candies, int people) {
        
        vector<int> arr(people);

        for(int i = 1,count = 0; candies > 0; i++,count++)
        {
            // int count = 0;
            if(candies <= i)
            {
                arr[count] += candies;
                return arr;
                // cout << endl << "RUN = 1";
            }
            if(count < people)
            {
                arr[count] += i;
                // cout << endl << endl << "RUN = " << count ;
                // count++;
                if(count == people - 1 ){
                    // cout << endl << "run ";
                count = -1;
                }
            }
            // else{
            //     // cout << endl << " Else Run ";
            //     count = 0;
            // }
            candies = candies - i;
            // cout << endl << " candies = " << candies;
        }
        // cout << endl ;
        // for(int i = 0; i < arr.size(); i++)
        // cout << " " << arr[i];

        return arr;
    }   


int main()
{
    int candies;
    cout << endl << " enter Number of Candies = ";
    cin >> candies;

    int num_people;
    cout << endl << " enter Number of People = ";
    cin >> num_people;
    
     vector<int> nums = distributeCandies(candies, num_people);
     for(int i = 0; i < nums.size(); i++)
     cout << " " << nums[i];


    return 0;
}