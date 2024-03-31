#include<iostream>
using namespace std;
  int  isPalindrome(int x) {
        int save = x;
     long long  int temp = 0;

        for( ; x != 0; x /= 10)
        {
            if(x < 0)
            return false;
            temp = temp * 10 + x % 10;
            // x /= 10;
            cout << endl << " Temp = " << temp;

        }
        if(save == temp)
        return save;
        else
        return false;
    }
int main()
{
    int n ;
    cout << endl << " enter the number = " ;
    cin >> n;

    cout << endl << " The number = "<< isPalindrome(n);
}