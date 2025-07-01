#include <bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int roll;
    student(string name, int roll){
        this->name = name;
        this->roll = roll;
    }
    void hallo(){
        cout <<"Hello from " << name << endl;
    }
};
int main()
{
    student sakib("Sakib ahmed", 1);
    sakib.hallo();
    student rakib("Rakib ahmed", 1);
    rakib.hallo();
    return 0;
}