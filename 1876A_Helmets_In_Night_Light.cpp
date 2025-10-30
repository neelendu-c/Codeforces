#include <bits/stdc++.h>
using namespace std;
#define int long long

void neel()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

signed main()
{
    neel();

    int t;
    cin >> t;

    while (t--)
    {

        int n, p;
        cin >> n >> p;

        vector<pair<int, int>> costs(n);

        vector<int> maxshare(n), cost(n);

        for (int i = 0; i < n; i++)
        {
            cin >> maxshare[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> cost[i];
        }

        for (int i = 0; i < n; i++)
        {
            costs[i] = {cost[i], maxshare[i]};
        }

        sort(costs.begin(), costs.end());

        int mincost = p;
        int shared = 1;

        for (auto it : costs)
        {
            int shareable = it.second;
            int sharecost = it.first;

            if (sharecost >= p)
            {
                break;
            }

            if (shared + shareable > n)
            {
                mincost += (n - shared) * sharecost;
                shared = n;
                break;
            }

            else
            {
                mincost += shareable * sharecost;
                shared += shareable;
            }
        }

        mincost += (n - shared) * p;

        cout << mincost << endl;
    }
}