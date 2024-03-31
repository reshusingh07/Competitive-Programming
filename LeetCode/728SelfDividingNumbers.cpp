#include<iostream>
#include<vector>
using namespace std;

void selfDividingNumbers(int left, int right)
{
    while(left <= right)
    {
        int n = left;
        while( n != 0 )
        {
            int temp = n % 10;
 
            //  if(n % 10 != 0 && left % temp == 0)
            //     n /= 10;
            //     else
            //       break;
            n % 10 != 0 &&  left % temp == 0 ? n /= 10 : break;

            if(n == 0)
        cout << endl << " Self number = " << left;
            
        }
    left++;
    }
}


int main()
{
    int left;
    cout << endl << " enter left number = " ;
    cin >> left;

    int right;
    cout << endl << "enter right number = ";
    cin >> right;

        selfDividingNumbers( left, right);


 return 0;
}



// Input: left = 1, right = 22
// Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]
// Input: left = 47, right = 85
// Output: [48,55,66,77]


// A self-dividing number is a number that is divisible by every digit it contains.

// For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
// A self-dividing number is not allowed to contain the digit zero.

// Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right].