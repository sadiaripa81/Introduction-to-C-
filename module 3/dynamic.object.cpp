#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    int cls;
    double cgpa;
    student(int roll, int cls, double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};
int main()
{
    student rahim(24, 34, 43.434);// static object 
    student *karim = new student(10, 3, 4.5);// dynamic object 

    cout << rahim.roll << " " << rahim.cls << " " << rahim.cgpa << endl;
    cout << karim->roll << " " << karim->cls << " " << karim->cgpa << endl;
    return 0;
}