#include<iostream>
#include<array> // Adding array header file for using STL Array
using namespace std;

int main() {

    array <int,5> arr = {11, 22, 33, 44, 55};
    // // first declare the data type of Array
    // // Second declare the size of Array

    cout << endl << "val = " << arr.at(3);
    // at() = at() fun help to access value using indexes..

    cout << endl << "val = " << arr[4]; // similar to the simple array

    cout << endl << "fornt val = " << arr.front();
    // front() = front() fun return the first element in the Array

    cout << endl << "Back val = " << arr.back() ;
    // back() = back() fun return the lst element in the Array

    arr.fill(29);   // Fill() fun change the hole value of array .
    cout << endl << "array = " << arr.at(2) << endl;
    
     
    // swap() function : swap() fun help to swap a element of a two array if there size and data are same...
    array <int, 4> arr1 = {99, 88, 77, 66};
    array <int, 4> arr2 = {2, 4, 5, 4};
    arr1.swap(arr2);

    cout << endl << "Arr1 after swapping : " << endl;
    for(int i = 0; i < 4; i++)
        cout << " " << arr1[i];
    
    cout << endl << "arr2 after Swapping : " << endl;
    for(int i = 0; i < 4; i++)
        cout << " " << arr2[i];
    
    // size() function : size() fun return total size of the array
    cout << endl << "Size of arr1 = " << arr1.size();
 

    return 0;
}