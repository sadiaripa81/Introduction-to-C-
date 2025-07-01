#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int roll;
    string name;
    char section;
    int marks;

    student(int roll, string name, char section, int marks)
    {
        this->roll = roll;
        this->name = name;
        this->section = section;
        this->marks = marks;
    }
};
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int roll;
        string name;
        char section;
        int marks;

        cin >> roll >> name >> section >> marks;
        student a(roll, name, section, marks);

        cin >> roll >> name >> section >> marks;
        student b(roll, name, section, marks);

        cin >> roll >> name >> section >> marks;
        student c(roll, name, section, marks);

        student topper = a;

        if (b.marks > topper.marks || (b.marks == topper.marks && b.roll < topper.roll))
        {
            topper = b;
        }
        if (c.marks > topper.marks || (c.marks == topper.marks && c.roll < topper.roll))
        {
            topper = c;
        }
        cout << topper.roll << " " << topper.name << " " << topper.section << " " << topper.marks << endl;
    }
    return 0;
}
