#include<iostream>
#include<ctime>
using namespace std;
void random(int m, int n, int k, int cot[100][100])
{
    int bom = 0;
    srand(time(0));
    while (bom < k)
    {
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (rand() % 9 == 0 && cot[i][j] == 0)
                {
                    cot[i][j] = 1;
                    bom++;
                    if (bom >= k) break;
                }
            }
            if (bom >= k) break;
        }
    }
}
int so_bom(int x, int y, int cot[100][100])
{
    return cot[x - 1][y] + cot[x - 1][y - 1] + cot[x - 1][y + 1] + cot[x][y - 1] + cot[x][y + 1] + cot[x + 1][y] + cot[x + 1][y - 1] + cot[x + 1][y + 1];
}
void thua_cuoc(int m, int n, int cot[100][100], int dem[100][100])
{
    cout << "YOU'RE DEAD!" << endl;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dem[i][j] != -1)
            {
                cout << '|' << dem[i][j] << '|';
            }
            else if (cot[i][j] == 0) cout << "|_|";
            else cout << "|*|";
        }
        cout << endl;
    }
}
int main()
{
    int m, n, k, cot[100][100], x, y, dem[100][100], dung = 0;
    cin >> m >> n >> k;
    for (int i = 0; i <= m + 1; i++)
        for (int j = 0; j <= n + 1; j++){
            cot[i][j] = 0;
            dem[i][j] = -1;
        }
    random(m, n, k, cot);
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << "|_|";
        }
        cout << endl;
    }
    while(1 > 0)
    {
        cin >> x >> y;
        if (cot[x][y] == 1) {
            thua_cuoc(m, n, cot, dem); break;
        }
        else
        {
            dung++;
            dem[x][y] = so_bom(x, y, cot);
            for (int i = 1; i <= m; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (dem[i][j] != -1)
                    {
                        cout << '|' << dem[i][j] << '|';
                    }
                    else cout << "|_|";
                }
                cout << endl;
            }
            if (dung == m * n - k) {
                cout << "YOU WIN"; break;
            }
        }
    }
    return 0;
}
