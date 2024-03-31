// #include<iostream>
// using namespace std;

// int findBase(int n , int k)
// {
//     int sum =0;
//     for(; n != 0; n /= k)
//     {
//     int remind = 0;
//         remind = remind * 10 + n % k ;
//            sum += remind % 10;  
//             remind /= 10;
//     }
//     return sum;
// }

// int main()
// {
//     int n , k;
//     cout << endl << "enter the n = " ;
//     cin >> n;
//     cout << endl << "enter the k = ";
//     cin >> k;

//     cout << endl << " The base = " << findBase(n , k);

//     return 0;
// }

#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<tuple>
#include<cmath>
using namespace std;

int main()
{
    int a ;
    cout << endl << " enter the number = ";
    cin >> a;

    int b ;
    cout << endl << " enter the number = ";
    cin >> b;

    int c ;
    cout << endl << " enter the number = ";
    cin >> c;

    // cout << " The Greatest number = " << (a > b ? a > c ? a : c : b > c ? b : c) ;


    if(a > b)
    {
        if(a > c)
        {
            cout << endl << " The Greatest number = " << a;
        }
        else{
            cout << endl << " The Greatest number = " << c;
        }
    }
    else if( b > c)
    {
        cout << endl << " The Greatest number = " << b;
    }
    else{
        cout << endl << " the Greatest number = " << c;
    }


    return 0;
}