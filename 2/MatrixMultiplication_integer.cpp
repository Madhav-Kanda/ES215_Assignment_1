#include <iostream>
#include <time.h>
using namespace std;

struct timespec;

time_t clk1;
time_t clk2;

int main()
{
    int n;
    cin >> n;
    long long a[n][n] = {0};
    long long b[n][n] = {0};
    long long c[n][n] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            if ((i + j) % 2 == 0)
            {
                a[i][j] = 2;
                b[i][j] = 3;
            }
            else
            {
                a[i][j] = 3;
                b[i][j] = 2;
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[k][i] += a[k][j] * b[j][i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}