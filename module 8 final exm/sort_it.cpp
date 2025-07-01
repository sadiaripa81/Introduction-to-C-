// You will be given data for N students, where each student will have a name (nm),
// class (cls), section (s), student ID (id), math marks (math_marks), and English marks (eng_marks).
// Your task is to sort the students data according to the total marks (sum of math_marks and eng_marks) in descending order.
// If multiple student have the same total marks then sort them according to the id in ascending order as the id will be unique.
// Input Format: First line will contain N.Next N lines will contain nm, cls, s, id, math_marks and eng_marks respectively.
// Output Format: Output the students data in descending order according to the total marks.

// sample input                               // Sample Output
// 5
// Munna 8 D 25 50 30                         // Bijoy 7 E 29 68 99
// Shojoy 9 E 26 40 50                        // Asif 10 C 27 55 60
// Asif 10 C 27 55 60                         // Joy 9 G 28 66 45
// Joy 9 G 28 66 45                           // Shojoy 9 E 26 40 50
// Bijoy 7 E 29 68 99                         // Munna 8 D 25 50 30

#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(student l, student r)
{
    if (l.math_marks + l.eng_marks > r.math_marks + r.eng_marks)
    {
        return true;
    }
    else if (l.math_marks + l.eng_marks == r.math_marks + r.eng_marks)
    {
        return l.id < r.id;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}