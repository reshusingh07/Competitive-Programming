#include<iostream>
#include<vector>
using namespace std;

int validMountainArray(vector<int>& arr) {
      int start = 0;
      int end = arr.size() - 1;
      int mid = start + (end - start) / 2;
      for(; start < end; mid = start + (end - start) / 2)  
      {
        cout << endl << "RUN == " << start ;
          if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
            return arr[mid];

                if(arr[mid] < arr[mid - 1])
                {
                    cout<< endl << " start work = " << start;
                    start = mid + 1;
                }

            if(arr[mid] > arr[mid + 1])
                end = mid;

      }
      return mid;
    }

int main()
{
    vector<int> arr = {2 , 1};

    cout << endl <<  " The peak = " << validMountainArray(arr);

    return 0;
}