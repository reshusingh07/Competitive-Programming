// Question : 739 Daily Temperatures >>>>>
#include<bits/stdc++.h>
using namespace std;
void dailyTemperatures(vector<int>& temp) {
            int n = temp.size();
            vector<int> ans(n, 0);
            vector <int> st;

        for(int i = n- 1; i >= 0; --i) {
              
                while(!st.empty() && temp[st.size() - 1] <= temp[i]) 
                     st.pop_back();
                
                if(!st.empty()) {
                    ans[i] = st[st.size() - 1] - i;
                    cout << " "<<st[ st.size()] - i;

                }

                st.push_back(i);
        }
        cout << endl;
        for(auto i : ans)
            cout << " " << i;
    }

int main() {

    // vector<int> temp = {73,74,75,71,69,72,76,73};
    
    // dailyTemperatures(temp);
    // vector<int> st;

    // cout << endl <<"st = " << st.empty();
stack <char > st;
st.push('(');
char ch = '[';
// ch += 2;
int i = ch + 1 == ']';
cout << i;
cout << endl << "ch = " << ch + 2;
cout << endl <<"ch = " << ch;
    // if(st.top()  == '(') {
    //     cout << st.top();
    // }

    return 0;
}