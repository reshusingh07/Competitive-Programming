#include<iostream>
#include<map> // For using map we have to add this header file...
using namespace std;

// NOTE: Keys are always a unqiue and always arrange in a sorted manner

int main() {
    map <int, string> coustomer;
    coustomer[100] = "Rajesh";
    coustomer[121] = "Rampal";
    coustomer[135] = "Adarsh";
    coustomer[141] = "Champakali";
    coustomer[171] = "Aditya";
    coustomer[200] = "Prakash";

   // Another way to initilize the map is
    // map <int, string> coustomer = { {100, "Rajesh"}, {121, "Rampal"}, {135, "Adarsh"}, {141, "Champakali"}, {171, "Aditya"}, {200, "Prakash"} };

    cout << endl << "value = " << coustomer[171] << endl;

    // insert(): This fun insert the value in map with the help of pair...

    coustomer.insert(pair<int, string> (205, "SalmanKhan"));
    \
    // Access the all value of map...

    map <int, string> :: iterator p = coustomer.begin();

    cout << endl << "value of map print by iterator:" << endl;  
    while(p != coustomer.end()) {
        cout << endl << "  " << p -> second << endl;
        p++;
    }
    // Another way to print value:
    cout << endl << "value of map print: " << endl;
    for(auto it : coustomer) {
        cout << endl << it.first << " " << it.second << endl;
    }
    // at(): This fun work same as the subscript operator[] ...

    cout << endl << "value by at = " << coustomer.at(171);

    cout << endl << "size of map: " << coustomer.size();  // return the size of the map...

// empty(): if it return 0, when map is not empty otherwise it return 1 when map is empty...    
    cout << endl << "map are empty: " <<  coustomer.empty(); 





    return 0;
}