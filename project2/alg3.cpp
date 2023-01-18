// algorithms project 2, part 3 - merge sorted lists
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n = 2;
  bool done = 0;
  vector<vector<int>> arr1 =
  {{2,5,9,21}, {-1,0,2},{-10,81,121}, {4,6,12,20,150}};

  vector<vector<int>> arr2 =
  {{10, 17, 18, 21, 29},{-3, 0, 3, 7, 8, 11},{81, 88, 121, 131},
  {9, 11, 12, 19, 29}};
  
  vector<vector<int>> arr3 = 
  {{-4, -2, 0, 2, 7}, {4, 6, 12, 14}, {10, 15, 25}, {5, 6, 10, 20, 24}};

  cout << "welcome to list sort.\n";

  while(n >= 0 && !done){
  cout << endl << "-- sorting --" << endl;
    for(int i = 0; i < arr1.size(); i++){
      cout << "[";
      for(int j = 0; j < arr1[i].size(); j++){
        if(j == arr1[i].size()-1)
        {
          cout << arr1[i][j] << "]";

        }else{
        cout << arr1[i][j] << ", ";
        }
        }
      cout << endl; }

  // create new list, sort_all, for all sorted items
  vector<int> sort_all;
  sort_all.insert(sort_all.begin(), arr1[0].begin(), arr1[0].end());

// for each individual list, place each element into sort_all
  for(int i = 1; i < arr1.size() ; i++){
    for(int j = 0; j < arr1[i].size(); j++){
      int k = 0;
      bool placed = 0;
      // compare first element in list with each element of sort_all
      while(k < sort_all.size() && !placed){
        // if smallest element, place in front 
        if(arr1[i][j] < sort_all[k]){
          sort_all.insert(sort_all.begin() + k, arr1[i][j]);
          placed = 1;
        }  
        // if no larger elements are found, place at end of list
        if(arr1[i][j] > sort_all[sort_all.size() - 1]){
          sort_all.insert(sort_all.end(), arr1[i][j]);
          placed = 1;
        }
        k++;
      }
    } 
   }

  cout << "sorted: " << endl;
  cout << "[ ";
  for(int i = 0; i < sort_all.size(); i++){
    cout << sort_all[i] << " ";
    }
  cout << "]";

    cout << endl;

    // update array to sort
    if(n == 0){
      done = 1;
    }
    
    if(n == 1){
    arr1 = arr3;
    n--;
    }
    
    if(n == 2){
    arr1 = arr2;
    n--;
    }
  }
  cout << endl << "thank you for using list sort!" << endl;
}