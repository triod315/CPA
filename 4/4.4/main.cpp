/*
 * CPA Lab 4.4.1 String manipulation: pangrams
 * triod315, 14.10.2019
 */
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <cctype>
using namespace std;
int main() {
    string line;
    getline(cin,line);

    map<char,int> dict;

    transform(line.begin(),line.end(),line.begin(),[](unsigned char c){return tolower(c);});

    for (char ch='a';ch<='z';ch++)
    {
        dict[ch]=0;
        for (int j=0;j<line.length();j++)
        {
            if (ch==line[j])
                dict[ch]++;
        }

        printf("%c-%d\n",ch,dict[ch]);
    }

    return 0;
}