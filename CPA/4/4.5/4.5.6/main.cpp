/*
 * CPA Lab 4.5.4 Text manipulation:anagrams
 * triod315, 14.10.2019
 */
#include <iostream>
#include <algorithm>

using namespace std;

bool isAnagram(string word1,string word2)
{
    int n1=word1.length();
    int n2=word2.length();
    if (n1!=n2)
        return false;
    sort(word1.begin(),word1.end());
    sort(word2.begin(),word2.end());

    for (int i=0;i<n1;i++)
        if(word1[i]!=word2[i])
            return false;

    return true;
}

int main() {
    string word1,word2;
    cin>>word1>>word2;
    if (isAnagram(word1, word2)) {
        cout <<  "anagrams";
    } else {
        cout << "not anagrams";
    }
    return 0;
}