//  Question - 1351. Count Negative Numbers in a Sorted Matrix
#include<iostream>
#include<vector>
using namespace std;
  void countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int start = 0; 
        int end = grid.size();
        int mid = start + (end - start ) / 2;
        for(int i = 0; i < grid.size(); i++) {
            for( ; start <= end; mid = start + (end - start) / 2) {
             
                if(grid[i][0] < 0){
                    count += end;
                    break;
                }
            }
            cout << endl << "RUM";
        }
        cout << "Total Negative Number = " << count;
    }

int main() {

    vector<vector<int>> grid = {{4, 3, 2, -1}};

    cout << endl << " size = " << grid.size()<< endl;
    countNegatives(grid);

 return 0;   
}