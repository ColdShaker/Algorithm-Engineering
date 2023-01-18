#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

int main()
{
    int size;

    cout <<"Hello! Welcome to the Alternating Disk Problem." << endl;
    cout <<"Please enter the size of the array of disks" << endl;
    cin >> size;

    string wbArray[size];

    //This loop fills the array with Black and White data elements 
    for(int i = 0; i < size; i++)
    {
        if(i % 2 == 0)
        wbArray[i] = "Black";
        else
        wbArray[i] = "White";
    }

    int current = 0;
    int next = 1;
    int count = 0;
    while(next != size)
    {
        if(wbArray[current] == "Black" && wbArray[next] == "White")
        {
            wbArray[current] = "White"; 
            wbArray[next] = "Black";
            current++;
            next++;
        }
        else if(wbArray[current] == "White")
        {
            current++;
            next++;
        }
        
        else //black and black
        {
            next++;
        }
    count++;
    }

    cout <<"The sorted array is as follows:" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << i + 1 <<": " << wbArray[i] << endl;
    }

    cout << "Number of while loops: " << count << endl;

}