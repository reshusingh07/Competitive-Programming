#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool GCD(int m, int n)
{
    int run = min(m, n);
    for (int i = 2; i <= run; i++)
    {
        if (m % i == 0 && n % i == 0)
            return false;
    }
    return true;
}
int firstDigit(int m)
{
if(m < 10)
return m;
 while(m != 0)
  {
    if(m < 10)
    return m;
    m /= 10;
  }
}
int countBeautifulPairs(vector<int> &nums)
{

    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
         for (int j = 1 + i; j < nums.size(); j++)
             count += GCD(firstDigit(nums.at(i)), nums.at(j) % 10);
     }
    return count;
}

int main()
{
    vector<int> nums = {31, 25, 72, 79, 74};

    cout << endl << " Beautiful Pairs in nums = " << countBeautifulPairs(nums);

 
  
    return 0;
}