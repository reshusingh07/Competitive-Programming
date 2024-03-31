#include<iostream>


using namespace std;
 int totalMoney(int n) {
       int count = 0;

        for(int i = 1; n != 0; i++)
        {
            for(int j = 0 + i; j < 7 + i; j++)
            {    
                count += j;
                n--;
                if(n == 0)
                return count;
            }
        }
        return count;
    }

int main()
{
    int n  ; 
    cout << endl << " enter the number = " ;
    cin >> n;

    cout << endl << " Total Money = " << totalMoney(n);
    
    
    return 0;

}