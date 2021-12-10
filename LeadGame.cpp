#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int score[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> score[i][j];
        }
    }

    int lead[n], counter[n];
    for (int i = 0; i < n; i++)
    {
        if (score[i][0] > score[i][1])
        {
            counter[i] = 1;
            lead[i] = score[i][0] - score[i][1];
        }
        else
        {
            counter[i] = 2;
            lead[i] = score[i][1] - score[i][0];
        }
    }

    int maxleadindex, maxlead = lead[0];
    for (int i = 0; i < n; i++)
    {
        if (lead[i] >= maxlead)
        {
            maxlead = lead[i];
            maxleadindex = i;
        }
    }

    cout << counter[maxleadindex] << " " << maxlead << endl;
    return 0;
}
