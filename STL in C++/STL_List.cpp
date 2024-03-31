#include<iostream>
#include<list> // for using a list STL, first we have to add a this header file...
using namespace std;

int main() {

    list <int> l1 = {10, 20, 30};

    list <int> :: iterator t = l1.begin(); // These iterator help to access the value from begin to end...

    while(t != l1.end()) {
        cout << *t << " "; // t is pointer that's why we use * ...
        t++;
    }

    // size(): These fun return size of the list...
    cout << endl << "total value in l1 = " << l1.size() << endl;
    
    // push_front(): These fun help to insert the element at beginning in the list...
    // push_back():  These fun help to insert the element at the end in the list...
    
    list <string> l2 = {"Delhi", "Punjab", "Islamabad"};

    l2.push_front("Mumbai");
    l2.push_back("Kasmir");

    list <string> :: iterator p = l2.begin();

    while(p != l2.end()) {
        cout << *p << " ";
        p++;
    }
    cout << endl << "Total value in l2 = " << l2.size() << endl;

    // pop_front(): These fun help to remove the value at front in the list...
    // pop_back():  These fun help to remove the value at last in the list...

    list <int> l3 = {34, 12, 43, 53, 1, 95, 25, 3, 25, 67};

    cout << endl << "List before the pop:  " << endl;
    list <int> :: iterator po = l3.begin();

    while(po != l3.end()) {
        cout << " " << *po;
        po++;
    }
    l3.pop_front(); // this 
    l3.pop_back();  // this

    cout << endl << "List After the pop:  " << endl;
    po = l3.begin();
    while(po != l3.end()) {
        cout << " " << *po++;
        // po++;
    }

    // sort(): This Fun help to sort the list...

    cout << endl << "List After the sort: " << endl;
    l3.sort(); // this
    po = l3.begin();
    while(po != l3.end()) 
        cout << " " << *po++;

    l3.reverse();
    po = l3.begin();
    cout << endl << "List After that reverse of all element:" << endl;
    while(po != l3.end())
        cout << " " << *po++;

    // remove(): This  fun remove the specfic value in the list if that value are present in the list...

    l3.remove(25);
    po = l3.begin();
    cout << endl << "List After remove the 25 value in the list:" << endl;
    while(po != l3.end()) 
        cout << " " << *po++;

    // clear(): This Fun clear all the data of the list...
    l3.clear();
    po = l3.begin();
    cout << endl << "List After calling the clear function:" << endl;
    while(po != l3.end())
        cout << " " << *po++;




    return 0;
}