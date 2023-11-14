#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
    int n;
    cout << " nhap gia tri cua n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int a = 0; a < 2 * n - i; a++)
        {
            if (i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for (int b = 1; b <= n; b++)
    {
        for (int c = 0; c <= n; c++)
        {
            cout << " ";
        }
        for (int d = 2; d <= b; d++)
        {
            cout << " ";
        }
        for (int f = 0; f <= n - b; f++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}