#include <bits/stdc++.h>
using namespace std;

int main()
{
    int R1[3][3] = {
        {1, 0, 1},
        {1, 0, 0},
        {0, 1, 0}};
    int R2[3][3] = {
        {1, 0, 1},
        {0, 1, 1},
        {1, 0, 0}};
    int M1[3][3], M2[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            M1[i][j] = R1[i][j] | R2[i][j];
            M2[i][j] = R1[i][j] & R2[i][j];
        }
    }
    cout << endl
         << "R1 union R2: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << M1[i][j] << " ";
        }
        cout << '\n';
    }
    cout << endl
         << "R1 intersect R2: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << M2[i][j] << " ";
        }
        cout << '\n';
    }
}