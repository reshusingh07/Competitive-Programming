//  Question --> 374. Guess Number Higher or Lower.
#include<iostream>
using namespace std;

int guess(int num){
    int pick = 6;
    if(num == pick)
    return 0;
    else if(num < pick)
    return 1;
    else
    return -1;
}

 int guessNumber(int n) {
        int start = 1; 
        int end = n;
        int mid = start + (end - start) / 2;
        for( ; start < end; mid = start + (end - start) / 2)
        {
        cout << endl << " start : " << start << "  end : " << end << "  mid : " << mid;
        // cout << " guess = " << guess(num);
            if(guess(mid) == 0)
            return mid;
           else if(guess(mid) == 1)
            start = mid + 1;
            else
            end = mid - 1;
        }
        return mid;
    }

int main(){

    int n = 10;

    // int pick = 6;

    cout << endl << " The number = " << guessNumber(n);
    return 0;
}