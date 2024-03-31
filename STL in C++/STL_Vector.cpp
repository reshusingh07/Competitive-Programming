#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {

    vector<int> v1 = {1, 2, 3}; // Zero Length Vector...

    vector <char> cv(5); // Creating a 5 element char vector...

    vector <char> cvs(4, 'a');
    // Initializes 4 element char vector with 'a'...

    vector <int> v3(5, 10); 
     for(auto i : v3) 
        cout << " " << i;
    
    cout << endl;
    vector <string> v4(3, "Hello");
    for(auto i : v4)
        cout << " " << i;

    // push_back(): These function insert the end of the array...
    cout << endl;
    v1.push_back(10);
    v1.emplace_back(15); // these fun work same as a push_back() fun and they just litile bit fast then push_back() fun...
    v1.push_back(20);
    v1.push_back(30);

    for(auto i : v1)
        cout << " " << i;

    // pop_back(): These function remove the last element of the array...
    cout << endl << "size of the array Before pop: " << v1.size() << endl;
    v1.pop_back();
    cout << endl << "size of the array after pop: " << v1.size();
    v1.pop_back();
    cout << endl << "size of the array after pop: " << v1.size();
    
    // capacity(): These fun return the capacity of the array...
    vector<int> arr;
    cout << endl << "Before inserting a element capacity of array: " << arr.capacity();
    for(int i = 0; i < 9; i++) {
         arr.push_back(10 * (i + 1));
         cout << endl << "After inserting a element capacity of array: " << arr.capacity();
    }

    // clear(): These Fun clear all the element of the array...
    arr.clear();
    cout << endl << "arr " << arr[4];

    // fornt(): These fun return the first element in the vector
    // back():  These fun return the last element in the vector
    vector<int> vec = {1, 2, 3, 4, 5, 9};
    cout << endl << "1st element in the Array: " << vec.front();
    cout << endl << "2nd element in the Array: " << vec.back();

    auto a = "Hello Reshu"; // auto detect the data type according to the data...
    cout << endl << "value = " << a;

   // erase(): This function erase the from the vector at start idx to end idx..

  vector<int> v = {10, 20, 30, 40, 50, 60};
  v.erase(v.begin() + 1, v.begin() + 3);
  for(auto i : v) {
    cout << " " << i; // {10, 40, 50, 60}
  }

  // insert(): These function insert the data at any specific optition of the array...
  vector <int> v1(2, 100); // {100, 100}
  v.insert(v.begin(), 300); // {300, 100, 100}
  v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}
// In this ^^ line (v.begin() + 1) is the starting point and 2 is the no. of element you want to insert and 10 is the value you want to insert...

// swap(): These function swap the element value of two vector..

    // v1 -> {10, 30}; // Before Swap...
    // v2 -> {40, 70};

    // v1.swap(v2);

    // v1 -> {40, 70}; // After Swap...
    // v2 -> {10, 30};

    return 0;
}