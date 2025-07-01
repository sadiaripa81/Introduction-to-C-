#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";
    s = "hi human";

    // s.clear();// clear string 

    cout << s.size() << endl;// size counter 

    cout << s.max_size() << endl;

    if (s.empty() == true)// empty or not empty 
    {
       cout << "empty" << endl;
    }else{
          cout << "not empty" << endl;
    }
   s.resize(5); // resize 
   cout << s << endl;
   
    return 0;
} 