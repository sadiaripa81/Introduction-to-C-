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
student* fun(){
    student* karim = new student(24, 34, 43.434);
    return karim;
}
int main()
{
    student* p = fun();

    cout << p->roll << " " << p->cls << " " << p->cgpa << endl;
    return 0;
}