// You will be given data for N students, where each student will have a name (nm), class (cls), section (s) and student ID (id). 
// The Headmaster decided to change the sections of the students. He wants to reverse their sections. Now he needs your help to  do so.
// Your task is reverse their section and print all the students data. That means the section of the first student will be replaced by the section of the last student, the section of the second student will be replaced by the section of the second last student and so on. See the sample input and output for more clarifications.
// Input Format:
// First line will contain N.
// Next N lines will contain nm, cls, s, and id respectively.

// Sample Input :
// 3
// Rakib 7 B 90
// Sakib 10 A 85
// Ahsan 9 C 36

// Sample Output: 
// Rakib 7 C 90
// Sakib 10 A 85
// Ahsan 9 B 36


#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }
    for (int i = 0; i < n-1; i++)
    {
       for (int j = i+1; j < n; j++)
       {
         swap(a[i].s, a[j].s);
       }
       
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }
    return 0;
}