#include<iostream>
#include<cmath>
using namespace std;

// int minMaxDifference(int n)
// {

// }

// int main()
// {
//     int n;
//     cout << endl << " enter the number = ";
//     cin >> n;

//     cout << endl << " Difference b/w number = " << minMaxDifference(n);

//     return 0;
// }

int main()
{
    int n = 11891;

    for(int i = 1; i < 10; i++)
    {
        int j = pow(10, i);
       if(n % j == 0 )
       {
            cout << endl << " The ans = " << n; 
            n += 9 * j;
            cout << endl << " The ans = " << n; 
       }
       cout << endl ;
       if(n % j == 1)
       {
             cout << endl << " The ans = " << n;
             n += 8 * j;
             cout << endl << " The ans = " << n;
       }
    //    if(n % )
        // n /= 10;

    }
 }
