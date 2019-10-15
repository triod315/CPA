/*
 * CPA Lab 4.5.1 String in functions: IP numbers
 * triod315, 14.10.2019
 */
#include <iostream>
#include <vector>
#include <string>
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

bool isInteger(string str)
{
    std::string::const_iterator it = str.begin();
    while (it != str.end() && std::isdigit(*it)) ++it;
    return !str.empty() && it == str.end();
}

string numberCheck(vector<string> ip)
{
    string result;
    if (ip.size()>4)
    {
        return "Too many parts";
    }
    if (ip.size()<4)
    {
        return "Incorrect parts count";
    }

    for (int i=0;i<ip.size();i++)
    {
        if (!isInteger(ip[i]))
        {
            return "Only digits and dots allowed\n";
        }

        if (ip[i].length()>3)
        {
            return "Too many characters in a part\n";
        }

        if (stoi(ip[i])>255)
        {
            return "Too big a value of a part\n";
        }
    }

    return "Correct IP";
}

int main() {

    vector<string> ipParts;

    string line;

    while (1) {
        getline(cin, line);
        if (line=="quit")
        {
            return 0;
        }
        ipParts = split(line, '.');
        cout << numberCheck(ipParts).c_str() << endl;
    }

    return 0;
}