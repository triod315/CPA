/*
 * CPA Lab 4.5.3 Text manipulation: stop word elimination
 * triod315, 14.10.2019
 */
#include <string>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <sstream>
using namespace std;

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

string to_lower(string str)
{
    transform(str.begin(), str.end(), str.begin(),[](unsigned char c){ return std::tolower(c); });
    return str;
}

int main()
{
    string stop_words;
    getline(std::cin, stop_words);
    string sentence;
    getline(std::cin, sentence);
// remove stop_words from sentence here

    vector<string> words=split(sentence,' ');

    vector<string> stop_words_vector=split(stop_words,',');

    for (int i=0;i<words.size();i++)
        if (find(stop_words_vector.begin(), stop_words_vector.end(), to_lower(words[i])) != stop_words_vector.end())
        {
            words.erase(words.begin()+i);
            i--;
        }

    ostringstream strstream;

    copy(words.begin(),words.end(),ostream_iterator<string>(strstream," "));

    sentence=strstream.str();

    std::cout << sentence << "\n";
}