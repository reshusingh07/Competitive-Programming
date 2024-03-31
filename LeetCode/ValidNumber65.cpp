#include<iostream>
#include<string>
using namespace std;

 bool isNumber(string s) {
        bool digit = false;
        bool  eng  = false;
        bool mathSign = false;
        bool dot = false;
        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if(ch >='0' && ch <= '9') {
                digit = true;
            }
            else if(!digit){
                return false;
            }
            else if(ch == 'E' || ch == 'e') {
                eng = true;
            }
            else if(ch == '+' || ch == '-') {
                    mathSign = true;
            }
        }
        cout << endl << "Out Side Work ";
        return true;
        
    }

int main() {

    string s = "2e10";

    if(isNumber(s) == 1) 
        cout << endl << " Valid Number :) " << endl;
    else
    cout << endl << " Not a Valid Number :(  " << endl;


    return 0;
}