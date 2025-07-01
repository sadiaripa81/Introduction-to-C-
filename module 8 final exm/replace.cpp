// You will be given two strings S and X. You need to replace all X from string S with a '#' sign.
// Input Format:
// First line will contain T, the number of test cases.
// Next T lines will contain a line with S and X.

// Sample Input
// 2
// rahimisagoodguy good
// canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you

// Sample Output
// rahimisa#guy
// can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string sentence, target_str;
        cin >> sentence >> target_str;

        while (sentence.find(target_str) != -1)
        {
            sentence.replace(sentence.find(target_str), target_str.size(), "#");
        }
        cout << sentence << endl;
    }
    return 0;
}