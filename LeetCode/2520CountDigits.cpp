#include<iostream>
using namespace std;

int countDigits(int n)
{
    int check = n, count = 0;
    for( ; n != 0; n /= 10)
    {
        // int digit = n % 10;
        if(check % (n % 10) == 0)
        {
            count++;
        }
        // n /= 10;
    }
    return count ;

}

int main()
{
    int n;
    cout << endl << " enter the number = ";
    cin >> n;

    cout << endl << " total divisilbe digits = " << countDigits(n);

    return 0;

}