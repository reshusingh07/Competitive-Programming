#include<iostream>
#include<vector>
using namespace std;

int dayOfYear(string date) {

    vector<int> month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
     
     int Year = stoi(date.substr(2,3)); // Year = 2019
        
        int numMonths =  stoi(date.substr(5, 6));
        int totalDays = Year % 4;
        for(int i = 0; i < numMonths - 1; i++)
                totalDays += month[i];
       
       int numDays = stoi(date.substr(8,9));
  return totalDays + numDays;        
    }

int main()
{   
 string date = "2019-04-09";
 string date2 = "2016-02-10";

  dayOfYear(date);
 dayOfYear(date2);




 return 0; 
}