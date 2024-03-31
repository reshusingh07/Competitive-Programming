#include<iostream>
#include<string>
using namespace std;

        bool check(char n)
        {
            string s1 = "aeiouAEIOU";
            for(int i = 0; i < s1.size(); i++)
            {
                if(n == s1.at(i))
                return true;
            }
            return false;
        }

 string reverseVowels(string s) {
        int start = 0;
        int end = s.size() - 1;
        while(start < end)
        {
            if( check(s.at(start)) == true && check(s.at(end)) == true )
                    swap(s.at(start),s.at(end));
                


            start++;
            end--;

        }
        return s;
    }

int main()
{
    string s3 ;
    cout << " enter the string = ";
    getline(cin,s3);
     cout << " The reverse string = " << reverseVowels(s3);


     return 0;
}