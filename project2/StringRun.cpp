#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    int anchor = 0;
    int parser = 1;
    int matching = 1;
    string unEncoded;
    string enCoded;
    cout <<"Hello there! Please input your Run-On String" << endl;
    getline(cin,unEncoded);

    while(anchor < unEncoded.length())
    {
        if(unEncoded[anchor] == unEncoded[parser])
        {
            matching++;
            parser++;
            while(unEncoded[anchor] == unEncoded[parser])
            {
                matching++;
                parser++;
            }
            
            enCoded.append(to_string(matching));
            enCoded.append(1,unEncoded[anchor]);
            anchor = parser;
            parser++;
            matching = 1;
        }
        else
        {
            enCoded.append(1,unEncoded[anchor]);
            anchor++;
            parser++;
        }
    }
    cout << "Your newly formatted string looks like this: \n";
    cout << enCoded << endl;

    return 0;
}
