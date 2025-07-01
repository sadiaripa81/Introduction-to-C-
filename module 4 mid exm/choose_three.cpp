#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int s;
        cin >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int flag = 0;

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    int sum = a[i] + a[j] + a[k];
                    if (sum == s)
                    {
                        cout << "YES" << endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
