// Write a program to determine if a given string contains the word "Jessica." If the word is present in the string,
// the program should output "YES," otherwise it should output "NO."
// NOTE: You need to find only "Jessica"; not "jessica" or "JeSsica" or any other form. Words are separated by spaces.

// Input Format
// Input will contain a string S containing names. There is a space in between two names.

// Sample Input 0
// Rahat Rifat Sakib Asif Sifat Jessica Ratul Munna
// Sample Output 0
// YES

// Sample Input 1
// Rahat Rifat Sakib Asif Sifat Ratul Munna
// Sample Output 1
// NO


#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    int found = 0;

    while (ss >> word) {
        if (word == "Jessica") {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
