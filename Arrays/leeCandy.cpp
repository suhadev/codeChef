#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0,n,c;
        cin >> n >> c;
        int a[n];
        for (int i = 0; i <= n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        if (sum <= c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
    