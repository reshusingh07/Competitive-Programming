#include<iostream>
using namespace std;
int numWaterBottles(int Bottles, int Exchange) {
        
      int count = 0;
  for(int i = 1; Bottles != 0; i++)
  {
      if(Bottles >= Exchange)
      {
          count += Exchange;
          Bottles  -= Exchange + 1;
          cout << " \nThe count = " << count;
      }
      else{
          count += Bottles;
          return count;
      }
  }
  return 1;
                  
    }
int main()
{
    int Bottles ;
    cout << endl << " enter the Bottles = ";
    cin >> Bottles;

    int Exchange;
    cout << endl << "enter the Exchange Bottles = ";
    cin >> Exchange;

    cout << endl << "\n Total Number of Bottles Drink = " <<  numWaterBottles(Bottles, Exchange);
}