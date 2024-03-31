#include <iostream>
#include <string>
using namespace std;

int findMax(int num)
{
string s1 = to_string(num);

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1.at(i) == '1' || s1.at(i) == '0')
            s1.at(i) = '9';
    }
    return stoi(s1);
}
int findMin(int num)
{
    string s2 = to_string(num);
    for(int j = 0; j < s2.size(); j++)
    {
        if(s2.at(j) == '1' || s2.at(j) == '9')
        s2.at(j) = '0';
    }
    return stoi(s2);
}
int minMaxDifference(int num)
{

    return findMax(num) - findMin(num);
}

int main()
{
    int n = 90;

  cout << endl << "Difference = " << minMaxDifference(n);

    return 0;
}