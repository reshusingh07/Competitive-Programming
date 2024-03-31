#include<iostream>
#include<algorithm>
#include<string> // for using string we have to add header file...
using namespace std;

int main() {
   
    char str[] = "Hello";
    string s1 = str; // In s2 we assign str value...
    // string s2(str); // Another method...
    
    // string s2 = s1; // In s3 we assign s2 value...

    string s2("Hello"); // In this value are assign by constructor...

    // string s1;
    // s1 = "Hello"; // In this value are not assign by constructor...

    string s3 = "Hello";
    char str2[] = " Students";
    s3 = s3 + str2;
    cout << s3 << endl; // we can also add char array value to string ...

    s3 = s3 + 'A'; // Also can add single char...
    cout << s3 << endl;

 // Useful Method in string :

    // 1. assgin(): This fun help to assign the value in string...

        string s4;
        s4.assign("Akash Kumar");
        cout << s4 << endl;

    // 2. append(): This fun help to update the string from the right side...

        string s5("Hello");
        s5.append(" Students"); // s5 += " Studendts"; another methods...
        cout << s5 << endl ;

    // 3. insert(): This fun help to insert a string in the string at any specific place by using there indexes...

        string s6 = "Hello";
        s6.insert(2, "123"); // Here, 2 is the index no....
        cout << "String after using insert fun: " << s6 << endl; // He123llo

    // 4. replace(): This fun replace the character from starting index to the lenght that we give in function...

    string s7 = "Hello";
    s7.replace(2, 2, "A"); // Here, 2 is a starting index and 3 is the length and A is string that we want to replace...
    cout << s7 << endl;

    // Another Example...
    s7 = "Hello";
    s7.replace(3,1," Student ");
    cout << s7 << endl;

    // erase(): This function erase all the data of the existing string...
    string s8 = "Software Engineer";
    cout << endl << "Before String: " << s8 << endl;
    s8.erase();
    cout << "After String: " << s8 << endl;

    // find(): This function help to find the specific string from the existing string...
            // it start to find the string from left to right and return the index...

    string s9 = "I am a Software Engineer in Microsoft...";

    int idx1 = s9.find("Engineer");
    cout << "Engineer string index: " << idx1 << endl;

    int idx2 = s9.find("Work");
    // if string are not present, then they show -1...
    cout << "Work string index: " << idx2 << endl;


    // rfind(): This are work same as find() but the only difference is they start find from right to left... 

    string s10 = "I am a Software Engineer Software Engineer in Microsoft...";
    int idx3 = s10.rfind("Software");
    cout << "Software string index: " << idx3 << endl;

    // tolower() & toupper() : These function are help to convert the lower character('a') into to upper character('A')....
    char a = 'a';
    char b = toupper(a);
    cout << endl << "character after function call: " << b << endl;

    // empty(): This function are tell over string is empty or not 
   // (1)  if it give 1 that's mean string is Empty otherwise is give 0 when string is not empty...
    string ans;
    cout << endl << "string is Empty = " << ans.empty() << endl;

    // back(): These function return the last character of the string ...
    // pop_back(): These function help to remove the last character of the string..

    ans = "Fuck";
    cout << endl << "last character of the string:  " << ans.back() << endl;
    ans.pop_back();
    cout << endl << endl << "Now, last character of the string:  " << ans.back() << endl;

    // Reverse(): These function reverse the string 
    // to use this we have to also add the header file: #include<algorithm>
        string st = "abcd";
        string rev =st; // "abcd";
         reverse(rev.begin(), rev.end());
         cout << endl <<"string after Reverse: " << rev << endl; // "dcba"

    // find(): these funtion help to find the specific substring and char from existing string...
    // Output: 
            //   Return -1 if substring or char doesn't exists...
            // Return the staring index of that string or char...

    // Example:

    string fin = "Hello Reshu bhai";
   int idx = fin.find('z');
    cout << endl << idx;
    idx = fin.find("Reshu");
    cout << endl << idx;
    
    return 0;
}