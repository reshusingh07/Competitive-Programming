// Question: 3019 Number of Changing Keys >>>>>


#include<bits/stdc++.h>
using namespace std;

int countKeyChanges(string s) {
    int diff = 0;
   for(auto i : s) {

    if(i != i + 1) {

        if(i != (i + 1) + 32) {
            cout << "  " << (i + 1) + 32;
            if((i + 1) + 32 != i)
                diff++;
        }
    }
   }
    return diff;
 }

int main() {
    string s1 = "aAbBcC";
    string s2 = "AaAaAaaA";
        char a = s1[1] + 32;
        cout << a;

cout << endl << "number of Difference of key prees: " << countKeyChanges(s1);
cout << endl << "number of Difference of key prees: " << countKeyChanges(s2);


    return 0;
};