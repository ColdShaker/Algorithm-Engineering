// algorithms project 2, part 2 - find substrings
#include <iostream>
#include <string>
using namespace std;
int main() {

  string str1[1] = {"marcopolmonafremontrialtofullertonmarcolongfresnochinoclovissimisalinas"};
  string str2[] = {"fullerton", "chino", "fremont", "fresno"};

  string str3[1] ={"sanoaklandrialtofullertonmarcolongbreacoronamodestoclovissimithousand"};
  string str4[] = {"brea", "modesto", "clovis", "corona"};

  string str5[1] ={"torranceoaklandrialtomarcooxnardchinofresnoirvineclovissimiorange"};
  string str6[] = {"oxnard", "irvine", "orange", "marco"};

 bool done = 0;
  int n = 2;
  int index[4];

  cout << "welcome to substrings.\n";

  while(n >= 0 && !done){
    cout << "\n-- searching --\n" << str1[0] << endl;
  for(int i = 0; i < sizeof(str2)/sizeof(str2[0]); i++){
    bool found = 0;  
    int k = 0;
    for(int j = 0; j < str2[i].size(); j++){
      while(k < str1[0].size() && !found){
        if(str2[i][j] == str1[0][k]){
        index[i] = k;
        int c = 1;
        int h = 0;
        int l = k + 1;
        while(h < str2[i].size()){
          if(str2[i][j+1] == str1[0][l]){
            j++;
            l++;
            c++;
            if(c == str2[i].size()){
              found = 1;
            }
          }
          h++;  
        }
      }
      k++;
    }    
  }
  } 

// create array of indexes 
  int temp;
  string temp2;
  for(int i = 0; i < 4;i++){		
		for(int j=i+1;j< 4;j++){
			if(index[i]>index[j]){
				temp = index[i];
        temp2 = str2[i];
        
				index[i] = index[j];
        str2[i] = str2[j];
        
				index[j] = temp;
        str2[j] = temp2;
			}
		}
	}

  cout << "-- output arrays -- \n";
  // output arrays
  cout << "[";
    for(int i = 0; i < 4;i++){
    cout << index[i];
      if(i < 3)
        cout << ", ";
    }
  cout << "]";

  cout << endl;
  cout << "[";
    for(int i = 0; i < 4;i++){
    cout << str2[i];
      if(i < 3)
        cout << ", ";
    }
  cout << "]\n";
    
     // update array to sort
    if(n == 0){
      done = 1;
    }
    
    if(n == 1){
      str1[0] = str5[0];
       for(int i = 0; i < 5; i++)
      str2[i] = str6[i];
    n--;
    }
    
    if(n == 2){
      str1[0] = str3[0];
    for(int i = 0; i < 5; i++)
      str2[i] = str4[i];
    n--;
    }
    }
  

  cout << "\nthank you for using substrings!\n";
  return 0;
  }