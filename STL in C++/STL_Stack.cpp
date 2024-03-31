#include<iostream>
#include<stack> // For using Stack we have to add this header file as well as
using namespace std;

// Stack(): Stack() is follow the rull  of Last In first Out(LIFO) that means the last element is enter to the stack is out the first during pop operation...
int main() {

    stack <int> st;                             
    st.push(1); // {1}                                          |   5   |
    st.push(2); // {2, 1}                                       |   3   |
    st.push(3); // {3, 2, 1}                                    |   3   |
    st.push(3); // {3, 3, 2, 1}                                 |   2   |
    st.push(5); // {5, 3, 3, 2, 1}                              |   1   | 

    cout << " " << st.top(); // it print 5   "** st[2] is invalid **"
    
    st.pop(); // After that pop st look likes  {3, 3, 2, 1}

    cout << " " << st.top(); //  3
    cout << " " <<  st.size(); // 4
    cout << " " << st.empty(); // 0
    
    stack <int> st2, st3;
    st.swap(st3);

    // NOTE: Every function of the stack work with the time complexity of O(1)


}