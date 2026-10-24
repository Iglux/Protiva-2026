#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        if (l == r)
        {
            cout << r << endl;
            continue;
        }

        if (r < 10 && l < 10)
        {
            cout << l << endl;
            continue;
        }

        if (r < 10 && l >= 10)
        {
            r = 10;
        }

        int maior = -1;
        int ans = l;

        for (int i = l; i <= r; i++)
        {
            string s = to_string(i);
            sort(s.begin(), s.end());

            int dif = (s[s.size() - 1] - '0') - (s[0] - '0');

            if (dif > maior)
            {
                maior = dif;
                ans = i;
            }

            if (dif == 9)
            {
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}