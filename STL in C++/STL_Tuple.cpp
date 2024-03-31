#include<iostream>
#include<tuple>  // Adding header file for using tuple...
#include<string>
using namespace std;

int main() {

    tuple <string, int, int> t1;

    t1 = make_tuple("Work", 23, 56);
 
    // for accessing a tuple value we use get...

    cout << endl << "1st = " << get<0> (t1);
    cout << endl << "2nd = " << get<1> (t1);
    cout << endl << "3rd = " << get<2> (t1);

    tuple <int, string, string, int> t2;
    t2 = make_tuple(23, "Software", "Enginner", 45);

     cout << endl << "1st = " << get<0> (t2);
     cout << endl << "2nd = " << get<1> (t2);
     cout << endl << "3rd = " << get<2> (t2);
     cout << endl << "4th = " << get<3> (t2);

    return 0;
}