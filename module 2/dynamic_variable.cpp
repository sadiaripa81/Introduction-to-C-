#include<bits/stdc++.h>
using namespace std;
int* p;
int fun(){
    int x = 10;
    p = &x;
    cout << "FUN = " << *p << endl;
    return x;
}

int main(){
    int y = fun();
    cout << "Main = " << *p << endl;
    return 0;
}