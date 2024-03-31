#include<iostream>
using namespace std;

int checkBox(int i )
{
    int digit = 0;
    // cout << endl << " its work ";
    for(int j = 1; i != 0; j++)
    {
        // cout << endl << " before Digit " << digit;
        digit += i % 10;
        i /= 10;
        cout << endl << " after Digit " << digit;
    }
    return digit;
}


int countEven(int num)
{
        int count = 0;
    for(int i =2; i <= num; i++)
    {
        // cout << endl << " i = " << i;
        int check = checkBox(i);
        if(check % 2 == 0)
        {
            // cout << endl << " The number = " << check;
            count++;
        }

    }
    return count;
}


int main()
{
    int num; 
    cout << endl << " enter the number = " ;
    cin >> num;

    int count = countEven(num);

    cout << endl << " The digit sum = " << count;

    return 0;
}