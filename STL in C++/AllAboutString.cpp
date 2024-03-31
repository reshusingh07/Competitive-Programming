#include<iostream>
#include<string>
#include<string.h>
#include<array>
using namespace std;

int main()
{
    // Replace Function() .............



     string s1  = "9669 ";

       s1.replace( 1, 2,"9");

     cout << endl << " Name : " << s1;


    // Change Array into a String ..............
    // to_sting() .....

    array <int,5> arr{7, 8, 5, 3, 9};
    string s10;
 
    for(int i = 0 ; i < arr.size(); i++)
    {
      s10 += to_string(arr[i]);
    }
    cout << endl << "string = " << s10;

    //  Change integer into a String .............

    int num = 4145;
    string s20;


    s20 += to_string(num);
     cout << endl << " String s20 = " << s20;

    s20.replace(0,1, "9");

    cout << endl << "New string s20 = " << s20;


    //Find()

    string s2 = "Hello Bhai Shab ...";
    string ans = "Bhai";
    cout << endl << "Index = " << s2.find(ans); 
 int start = 0;
 int end = s2.size() - 1;
 while(start < end)
 {
    swap(s2.at(start), s2.at(end));
    start++;
    end--;
 }

     // rfind()

    string s3 = "Hello bhai bhai Shab ";
    int i = s3.rfind("bhai");

    cout << endl << "Index = " << i;

    // Compare()

    string s4 = "Amit";
    string s5 = "Amit";

    int k= s4.compare(s5);
    cout << endl << " Result = " << k; //it show 0 because string are same !

    string s6 = "Amar";
    string s7 = "Amit";

    int x = s6.compare(s7);

    cout << endl << " Result = " << x; // it show -1 because string are not same and Amar are 1st in dictionary order !

    x = s7.compare(s6);
    cout << endl << "Result = " << x; // it show  1 because string are not same and Amit are 2nd int dictionary order !

  // C_str()

  string s8 = "Hello";
  char c[20];

  strcpy(c,s8.c_str());

  cout <<endl << "Char = " << c;

  // Change number string into a number(int) :

    // stoi() function :

  string numberString = "123";
    int number = stoi(numberString);
      if(numberString[0] < numberString[1]){
        cout << endl << "run";
      }
      else
      cout << endl <<"not run";
    cout << endl << "number = " << numberString;


  // Find() : Help to find the character in string 

  string r = "Reshu is your dad";
  char ch = 'e';
     cout << endl << " the Index of R = " << r.find(ch);

 //substr will extract a substring starting from index 1 and with a length of 2 characters. The resulting substring will be stored in the result variable. Finally, we print the result 
     string st = "Hello EveryOne My self Reshu Singh";

     string store = st.substr(0, 5);
     cout << endl << " substr string = " << store;

        
        // we also store the no. string into a integer 
        string numString = "34880";

        int no = stoi(numString.substr(1,3));  // no = 488
        cout << endl << " no = " << no;




    return 0; 
}