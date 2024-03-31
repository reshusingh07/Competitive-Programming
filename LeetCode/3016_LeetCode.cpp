// Question:  Minimum Number of Pushes to Type Word II

#include <bits/stdc++.h>
using namespace std;

// One method >>>>>>>
int minimumPushes1(string word)
{
  unordered_map<char, int> m;
  for (char i : word)
  {
    m[i]++;
    cout << "i = " << i << " value = " << m[i] << endl;
  }
  cout << endl
       << "size of " << m.size() << endl;
  for (auto &i : m)
    cout << " " << i.first << " " << i.second << endl;

  vector<int> v;
  for (auto i : m)
    v.push_back(i.second);

  // sort(v.begin(), v.end(), greater<int>());
  for (auto i : v)
    cout << " " << i;

  int miniPush = 0;
  for (int i = 0; i < v.size(); i++)
    miniPush += v[i] * ((i / 8) + 1);

  return miniPush;
}
  // Another Method by me >>>>>>

int minimumPushes2(string word) {
  vector<int> v;
  sort(word.begin(), word.end());

  int cmt = 1;
  for (int i = 0; i < word.length(); i++) {
    if (word[i] == word[i + 1])
      cmt++;
    else
    {
      v.emplace_back(cmt);
      cmt = 1;
    }
  }
  sort(v.begin(), v.end(), greater<int>());
  int miniPush = 0;
  for (int i = 0; i < v.size(); i++)
  {
    miniPush += v[i] * ((i / 8) + 1);
  }
  return miniPush;
}
int main()
{

  string st = "aabbccddeeffgghhiiiiii";

  cout << endl
       << "minimum number pushed : " << minimumPushes1(st);

  return 0;
}