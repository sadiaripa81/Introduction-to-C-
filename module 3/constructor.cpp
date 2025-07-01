#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int roll;
    int cls;
    double cgpa;

    student(int r, int c, double g){
        roll = r;
        cls = c;
        cgpa = g;
    }
};

int main(){
    int r;
    int c;
    double g;
    cin >> r >> c >> g;
    student rahim(r,c,g);
    // student karim(r,c,g);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.cgpa << endl;
    // cout << karim.roll << " " << karim.cls << " " << karim.cgpa << endl;
    return 0;
}