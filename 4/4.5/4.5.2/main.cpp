/*
 * CPA Lab 4.5.1 Text manipulation: duplicate white space
 * triod315, 14.10.2019
 */
#include <string>
#include <iostream>
using namespace std;
int main()
{
    string sentence;
    getline(cin, sentence);
// manipulate the sentence here

    int counter=0;
    int startpos;

    for (int i=0;i<sentence.length()-1;i++)
    {


        if (sentence[i]==' ' && counter==0)
        {
            startpos=i;
            counter++;
        } else
        if (sentence[i]==' ' && sentence[i+1]==' ')
        {
            counter++;
        }
        if (sentence[i]==' ' && sentence[i+1]!=' ')
        {
            sentence=sentence.substr(0,startpos)+sentence.substr(i,sentence.length()-1);
            i-=counter-1;
            counter=0;
        }

    }

    cout << sentence << "\n";
}