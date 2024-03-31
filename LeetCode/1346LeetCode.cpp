// Question - 1346. Check If N and Its Double Exist
#include<iostream>
#include<vector>
using namespace std;

 bool checkIfExist(vector<int>& arr) {
 
      int s = 0; 
      int e = arr.size() - 1;
      int mid = s + (e - s) / 2;
      for( ; s < e; mid = s + (e - s) / 2) {
        cout << " mid = " << arr[mid];
          if(2 * arr[mid] == arr[mid + 1])
            return true;
            else if(2 * arr[mid] < arr[mid + 1] || 2 * arr[mid] > arr[mid + 1])
            s = mid + 1;
      }
      return false;
    }

int main() {

    vector<int> num = {1, 7, 11, 14};

        if(checkIfExist(num)){
            cout << endl << "work True";
        }
        else{
            cout << endl << "work False";
        }
    return 0;
}