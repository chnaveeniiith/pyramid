#include <iostream>
using namespace std;
int main()
{
    int n, k, x, y, z, w, max, max2;
    cin >> n;
    int a, b[1000000];
    char s[1000000];
    for (int i = 0; i < n; i++)
    {
        cin >> a >> s;
        for (int j = 0; j < a; j++)
        {
            cin >> b[j];
        }
        k = 0;
        max = 0;
        y = 0;
        z = 0;
        while (k<a&&s[k] == 'R')
        {
            x = k + b[k];
            if (x > max)
                max = x;
            ++k;
        }
        while (k < a)
        {
            if (max > (k - 1))
            {
                ++z;
                if (max > k)
                {
                    w = k;
                    max2 = max;
                    while(w < a && w < (max + 1))
                    {
                        x = w + b[w];
                        if (x > max2)
                            max2 = x;
                        ++w;
                    }
                    k = max;
                    max = max2;
                }
                else
                {
                    x = max + b[max];
                    if (x > max)
                        max = x;
                }
            }
            else
            {
                y = 1;
                k = a;
            }
            ++k;
            while (k<a&&s[k] == 'R')
            {
                x = k + b[k];
                if (x > max)
                    max = x;
                ++k;
            }
        }
        if (y == 1)
            cout << -1 << endl;
        else
            cout << z << endl;
    }
    return 0;
}