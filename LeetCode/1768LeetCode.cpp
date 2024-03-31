// 1768. Merge Strings Alternately
#include<iostream>
#include<string>
using namespace std;

string mergeAlternately(string word1, string word2) {
        string temp;
         int i = 0;
        while(i < word1.length() && i < word2.length()){
            temp += word1[i];
            temp += word2[i];
            i++; 
         }

        while(i < word1.length())
            temp += word1[i++];
         
        while(i < word2.length())
            temp += word2[i++];
         
        return temp;
    }

int main()
{
    string s1 ="abcd";
    string s2 = "pq";

    string  res = mergeAlternately(s1, s2);
    for(int i = 0; i < res.length(); i++)
        cout << " " << res[i];

    return 0;

}