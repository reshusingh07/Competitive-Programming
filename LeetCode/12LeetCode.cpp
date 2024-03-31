// Question 12 : Integer To Roman
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int symbol(int num) {
        vector<int> arr = {1, 5, 10, 50, 100, 500, 1000};
        int i = 0;
        while(i < arr.size()) {
            if(num == arr[i]) {
                return i;
            }
            else if(num <= arr[i]) {
            cout << endl << "run 2 = " << arr[i];
                return i - 1;
            }
            i++;
        }
        return i - 1;
    }

string intToRoman(int num) {
        
        vector<int> arr = {1, 5, 10, 50, 100, 500, 1000};
        string s1 = "IVXLCMDM";
        string s2;
        //    cout << endl << "s2 = " << s2;
            // symbol(num);
        while(num > 0) {
            int temp = symbol(num); 
            // s1 += ch[temp];
            s2 += s1[temp];
            num = num - arr[temp];
            cout << endl << "Temp val = " << arr[temp];
        }
        return s2;
    }  

int main() {

        int num = 4;

        cout << endl << "integer to roman = " << intToRoman(num);


    return 0;
}