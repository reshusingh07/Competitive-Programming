#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,3,6,10,12,15};
        int avg = 0, count = 0;
         
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i] % 3 == 0 && arr[i] % 2 == 0)
        {
            avg += arr[i];
            count++;
        }
        
    }
    int send = avg/count    
        cout << endl << " The Avg = " << avg / count;



    return 0;
}