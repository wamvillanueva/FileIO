#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int swapTaker=0;
    int j,i=0;
    int num[10000];
    string line;
    fstream myfile;
    myfile.open("data10k.txt");

    while(myfile.good())
    {
        getline(myfile,line);
        stringstream(line)>>num[i];
        i++;
    }

    for (i=0;i<10000;i++)
    {
        for(j=0;j<10000;j++)
        {
            if(num[i]<num[j])
            {
                swapTaker=num[i];
                num[i]=num[j];
                num[j]=swapTaker;
            }
        }
    }

    myfile.close();

    for (i=0;i<10000;i++)
    {
        cout  << num[i] << endl;
    }
    return 0;
}
