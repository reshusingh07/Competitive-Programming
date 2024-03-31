// Question: 682 Baseball Game >>>>>
    
#include<bits/stdc++.h>
using namespace std;

 int calPoints(vector<string>& operations) {
        stack <int> st;
        int n = operations.size();
        
        for(auto ch : operations) {
            // cout << " " << ch;
          
             if(ch == "C") {
                st.pop();
            }
            else if(ch == "D") {
                st.push(2 * st.top());
            }
            else if(ch == "+") {
                    int temp = st.top();
                    st.pop();
                    int up = st.top();
                    st.push(temp);
                    st.push(temp + up);
            }
             else 
                st.push(stoi(ch));
        }
        int sum = 0;
        while(!st.empty()) {
            cout << "top val = " << st.top() << endl;
            sum += st.top();
            st.pop();
        }
     return sum;

 }

int main() {

    // vector<string> operations = {"5","2","C","D","+"};
        vector<string> operations = {"5","-2","4","C","D","9","+","+"};
    cout << endl << "Total Score = " << calPoints(operations);

    return 0;
}