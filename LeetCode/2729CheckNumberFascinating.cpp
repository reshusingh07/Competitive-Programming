#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout << endl << " enter the number = " ;
    cin >> n;

    int res =  n*1000000 + 2*n*1000 + 3*n;

    cout << endl << "Result = " << res;

    int arr[10];

    for(int i =8; i >=0 ; i--)
    {
        arr[i] = res %10;
        res /= 10;
    }
    // for(int j = 0; j < 9; j++)
    // {
    //     cout << endl << "number = " << arr[j];
    // }

    // for(int i = 1; i <= 9; i++)
    // {
    //     for(int j = 0; j < 9; j++)
    //     {
    //         if(i == arr[i])
    //         break;
    //     }
    //     cout << endl << " i = " << i;
    // }

    return 0;
}

int checkDigit(int arr)
{ 
    for(int i = 1; i <= 9; i++)
    {
        if(i == arr[i])
            return 
    }
 
 }