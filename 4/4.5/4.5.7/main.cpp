/*
 * CPA Lab 4.5.5 Text manipulation: pattern matching
 * triod315, 14.10.2019
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void replace(string &str, char from,string to)
{
    int index=0;

    for (int i=0;i<str.length();i++) {

        /* Locate the substring to replace. */



        /* Make the replacement. */
        if (str[i] == from)
        {
            str = str.replace(i, 1, to.c_str());

        }

        /* Advance index forward so the next iteration doesn't pick it up as well. */
        i += to.length()-1;
    }

}

string transformToRegex(string str)
{

    for (int i=0;i<str.length();i++)
    {
        replace(str,'A',"([a-z]|[A-Z])");
        replace(str,'D',"\\d");
        replace(str,'?',".");
    }
    return str;

}

int main() {
    string pattern;
    getline(cin,pattern);
    string line;
    getline(cin,line);

    string reg_text=transformToRegex(pattern);
    
    regex re(reg_text);

    smatch match;
    while (regex_search(line, match, re))
    {
        cout<<match[0].str()<<endl;
        line=line.substr(match.position(0),pattern.length()-1)+match.suffix().str();
    }

    return 0;
}