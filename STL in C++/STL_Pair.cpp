#include<iostream>
#include<string>
using namespace std;

class student{

    private:
        string name;
        int age;

    public:
        void setData(string s, int a) {
            name = s;
            age = a;
        }
        void showData() {
            cout << " name: " << name;
            cout << " age: " << age;
        }

};

int main() {

   pair <char, int > p1; // That's how we create a pair object...
   pair <string, float> p2; // Another pair object...
   pair <int, student> p3;

   // make_pair() : These fun are help to insert the value in object of pair...

    p1 = make_pair('R', 46);
    p2 = make_pair("Reshu", 12.45);

    student s1; // Creating a object of student...
    s1.setData("Akash", 24); // insert the value in object of student s1...

    p3 = make_pair(30, s1);

    // Accessing pair memebers...
     
     cout << endl << "p1 value: " << p1.first << " " << p1.second;
     cout << endl << "p2 value: " << p2.first << " " << p2.second;
     cout << endl << "p3 value: " << p3.first ; 
     student s2 = p3.second;
     s2.showData();

     // Compare two pairs...
     pair <int, float> p4 = make_pair(12, 42.1);
     pair <int, float> p5 = make_pair(12, 42.1);
     p4 = make_pair(12, 42.3);
     p5 = make_pair(12, 42.3);

    if(p4 == p5)
        cout << endl << " Both pairs value are equal ";
    else 
        cout << endl << " Both pairs value are not equal " << endl;

    //  Now, these knowledge come from Striver & Love Babber..

    // Nested Pair:
    pair <int, pair <int, int>> p = {1, {2, 3}};
    cout << p.first << " " << p.second.first << " " << p.second.second << endl;

    pair <int, pair <int, string>> p6;
    p6 = make_pair(1,make_pair(2, "BSDK"));
    cout << p6.first << " " << p6.second.first << " " << p6.second.second << endl;

    // Creating array with Pair...
    pair <int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    
    cout << endl << "value that store way pair:" << endl;
    for(int i = 0; i < 4; i++) 
        cout << " " << arr[i].first << " " << arr[i].second << endl;




    return 0;
}