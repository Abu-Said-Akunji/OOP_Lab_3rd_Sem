/*Q1.WAP to display content of a file using character output function.*/


#include<iostream>
#include<string.h>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
        ifstream ifile;
        char s[100], fname[100];

        cout<<"Enter file name to read :: ";
        cin>>fname;

        ifile.open(fname);

        if(!ifile)
        {
                cout<<"\nError in opening file..!!\n";

                exit(0);
        }

        cout<<"\n";

        while(ifile.eof()==0)
    {
        ifile>>s;
        cout<<s<<" ";
    }

        cout<<"\n";
        ifile.close();

return 0;

}