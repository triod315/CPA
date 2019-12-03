/*
 * CPA Lab 4.5.1 Text manipulation:eliminate duplicates
 * triod315, 14.10.2019
 */
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <iterator>
using namespace std;

/*
 * Split string by character
 */
vector<string> split(string line,char c)
{
    vector<string> result;
    string tmpstr="";
    for (int i=0;i<line.length();i++)
    {
        if (line[i]!=c)
            tmpstr+=line[i];
        else
        {
            result.push_back(tmpstr);
            tmpstr="";
        }
    }

    if (line[line.length()-1]!=' ')
        result.push_back(tmpstr);

    return result;
}

int main()
{
    string sentence;
    getline(cin, sentence);

    vector<string> words=split(sentence,' ');

    for (int i=0;i<words.size()-1;i++)
    {
        if (words[i]==words[i+1])
            words.erase(words.begin()+i);
    }

    ostringstream strstream;

    copy(words.begin(),words.end(),ostream_iterator<string>(strstream," "));

    sentence=strstream.str();
    cout << sentence << "\n";
}