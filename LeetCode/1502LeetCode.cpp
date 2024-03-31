#include<iostream>
#include<vector>
using namespace std;

//  Can Make Arithmetic Progression From Sequence
 
 bool canMakeArithmeticProgression(vector<int>& arr) {
        // int n = arr.size();

        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n - i; j++){
        //         if(arr[j] > arr[j + 1])
        //         swap(arr[j], arr[j + 1]);
        //     }    
        // }
       int n = arr.size();
    
        for(int i = 0; i < arr.size() - 1; i++) {

     int min_idx = i;  // min_idx are mainly use to store a small value and it is easy to understand in future !

        for(int j = 1 + i; j < arr.size(); j++)
        {
            if(arr[min_idx] > arr[j])
            min_idx = j;
        }
            swap(arr[min_idx], arr[i]);
    }
        for(int i = 0; i < n; i++)
        cout << endl << arr[i];
    //    for(int i = 1; i < arr.size() - 1; i++){

    //         if(arr[i + 1] - arr[i] == same)
    //         cout << " difference = " << arr[i + 1] - arr[i];
    //         cout << endl << " run = " << i;
    //    }
    }

int main()
{
    vector<int> nums = {-68,-96,-12,-40,16};


canMakeArithmeticProgression(nums);
    // if(canMakeArithmeticProgression(nums))
    //     cout << endl << " it's Arithmetic Progression array !!!";
    //     else
    //     cout << endl << " it's NOT Arithmetic Progression array !!!";


    return 0;
}