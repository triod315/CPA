/*
 * CPA Lab 4.5.6 Text manipulation: plain-text formatting
 * triod315, 14.10.2019
 */
#include <string>
#include <iostream>
using namespace std;

string ChangeSentence(string sentence)
{
    string result = "";
    bool star = false;
    bool underLine = false;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == '*' && !star)
            star = true;
        else if (sentence[i] == '*' && star)
            star = false;
        else if (sentence[i] == '_' && !underLine)
            underLine = true;
        else if (sentence[i] == '_' && underLine)
            underLine = false;
        if (star && underLine)
        {
            result.push_back(toupper(sentence[i]));
            result.push_back(' ');
        }
        else if (star)
        {
            result.push_back(toupper(sentence[i]));
        }
        else if (underLine)
        {
            result.push_back(sentence[i]);
            result.push_back(' ');
        }
        else
        {
            result.push_back(sentence[i]);
        }
    }
    for (int j = 0; j < result.length(); j++)
    {
        if (result[j] == '*' || result[j] == '_')
            result.erase(j,1);
    }
    return result;
}
int main()
{
    cout << "Enter the sentence: ";
    string sentence;
    getline(cin, sentence);
    sentence = ChangeSentence(sentence);
    cout << sentence << "\n";
}