#include<iostream>
#include<string>
using namespace std;

string convertToBase7(int num) {
        string s1;
        int digit;
        for(int i = 0; num != 0; num /= 7)
        {
            digit = num % 7;
            s1 += to_string(digit);

            // num /= 7;

        }
        int s = 0;
        int end = s1.size();
        while(s < end){
            swap(s1.at(s),s1.at(end));
            s++;
            end--;
        }
        return s1;
    }

int main()
{
    int num;
    cout << endl << "enter the number = " ;
    cin >> num;

    cout  << endl << " The number = " << convertToBase7(num);


    return 0;
}