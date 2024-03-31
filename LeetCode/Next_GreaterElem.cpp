#include<iostream>
#include<vector> 
#include<stack>
using namespace std;

void nge(vector<int> &nums) {
    int n = nums.size();

    vector<int> ans(n, -1);
    stack<int> st;
    int cmt = 0;
    for(int i = n - 1; i >= 0; --i) {

        while(!st.empty() && st.top() <= nums[i]) {
            cout << endl << "cmt = " << ++cmt;
            st.pop();
        }
        if(!st.empty()) {
            ans[i] = st.top();
        }
        st.push(nums[i]);
    }
    cout << endl << endl;
    for(auto i : ans) {
        cout << " " << i;
    }

}

int main() {

    vector<int> nums = {1, 3, 4, 2};
    cout << endl << "size of vector: " << nums.size();

    nge(nums);
    
    
    
}