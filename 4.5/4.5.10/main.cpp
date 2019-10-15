/*
 * CPA Lab 4.5.8 Text manipulation: templates
 * triod315, 14.10.2019
 */

#include <bits/stdc++.h>
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

map<string,string> getValues(string str)
{
    map<string,string> result;
    vector<string> values=split(str,',');
    vector<string> tmp;
    for (int i=0;i<values.size();i++)
    {
        tmp=split(values[i],'=');
        result.insert({tmp[0],tmp[1]});
    }

    return result;
}

string replaceByKey(string sourceString,map<string,string> mp)
{
    bool bropened= false; //true - if '[' opened, false - if ']' closed

    string tmpKey="";
    int startpos;
    for (int i=0;i<sourceString.length();i++)
    {


        if (bropened && sourceString[i]!=']')
            tmpKey.push_back(sourceString[i]);

        if (sourceString[i]=='[') {
            bropened = true;
            tmpKey="";
            startpos=i;
        }



        if (sourceString[i]==']')
        {
            bropened= false;
            if (mp.find(tmpKey)!=mp.end())
            {
                sourceString=sourceString.substr(0,startpos)+mp[tmpKey]+sourceString.substr(startpos+tmpKey.length()+2,sourceString.length()-startpos+tmpKey.length()+2);
                i-=tmpKey.length()-mp[tmpKey].length()+2;
            }
        }
    }

    return sourceString;

}

int main()
{
    string values;
    getline(std::cin, values);
    string temp;
    getline(std::cin, temp);
// Put values into the template

    map<string,string> valuesMap=getValues(values);



    temp=replaceByKey(temp,valuesMap);
    cout << temp << "\n";
}