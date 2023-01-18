#include <stdio.h>
#include <iostream>

using namespace std;
int firstNumber = 0;
int secondNumber = 1;

int fibonacciSequence(int repetitions)
{
    if(repetitions == 0)
    {
        return secondNumber;
    }
        int temp = secondNumber;
        secondNumber = firstNumber+secondNumber;
        firstNumber = temp;
        fibonacciSequence(repetitions-1);
}

int main()
{
    int userInput;
    cout << "Please enter the desired position of the Fibonacci Sequence (zero-based indexing):" << endl;
    cin >> userInput;
    if(userInput < 0)
    {
        cout <<"Input number is too small, please run program again" << endl;
    }
    else if(userInput ==0)
    {
        cout <<"The number you requested is this: " << firstNumber << endl;
    }
    else if(userInput ==1)
    {
        cout <<"The number you requested is this: " << secondNumber << endl;
    }
    else
    {
        cout <<"The number you requested is this: " << fibonacciSequence(userInput-1) << endl;
    }
}
