/*
 * CPA Lab 4.5.2 Text manipulation: find and replace
 * triod315, 14.10.2019
 */
#include <string>
#include <iostream>
using namespace std;
int main()
{
    std::string from;
    std::getline(std::cin, from);
    std::string to;
    std::getline(std::cin, to);
    std::string sentence;
    std::getline(std::cin, sentence);
// change all occurrences of 'from' into 'to' in the sentence

    size_t index = 0;
    while (true) {
        /* Locate the substring to replace. */
        index = sentence.find(from.c_str(), index);
        if (index == std::string::npos) break;

        /* Make the replacement. */
        sentence=sentence.replace(index, to.length(), to.c_str());

        /* Advance index forward so the next iteration doesn't pick it up as well. */
        index += to.length();
    }

    std::cout << sentence << "\n";
}