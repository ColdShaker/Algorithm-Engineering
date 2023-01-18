#include <iostream>
#include <stdio.h>

using namespace std;
void exhaustiveOptimization(int iArray[],int arrayLen);


int main()
{
    int arraySize;
    cout <<"Please input the desired array size" << endl;
    cin >> arraySize;
    int inputArray[arraySize];
    cout <<"Please input the desired array elements" << endl;
    for(int i = 0;i<arraySize;i++)
    {
        cin>>inputArray[i];
    }
    
    cout<<"Input Array: [";
    for(int i = 0;i<arraySize;i++)
    {
        cout<<inputArray[i]<<",";
    }
    cout <<"]"<<endl;
    
    exhaustiveOptimization(inputArray, arraySize);

}

void exhaustiveOptimization(int iArray[], int arrayLen)
{
    int base = 0;
    int parser = 0;
    int candidate;
    int best = 0;
    int baseStore;
    int parserStore;

    while(base < arrayLen)
    {
        while(parser < arrayLen)
        {
            candidate = iArray[base] + iArray[parser];
            int temporary = parser;
            for(int i =0;(temporary-base) > 1;i++)
            {
                candidate = candidate + iArray[base+i];
                temporary--;
            }
            if(candidate > best)
            {
                best = candidate;
                baseStore = base;
                parserStore = parser;
            }
            parser++;
        }
        base++;
        parser = base;
        
    }
    
    int temp = parserStore;
    cout<<"The output array is ["<< iArray[baseStore]<<",";
    for(int i=1;(temp-baseStore)>1;i++)
    {
        cout<<iArray[baseStore+i]<<",";
        temp--;
    }
    cout <<iArray[parserStore] <<"]\n";
}