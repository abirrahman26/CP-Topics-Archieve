
#include <bits/stdc++.h>
#define int long long
using namespace std;

int bin_srch(vector<pair<int,int>>& a, int x)
{
    int lo = 0, hi = a.size() - 1;

    while(lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if(a[mid].first == x)
            return a[mid].second;
        else if(a[mid].first < x)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return -1;
}

int32_t main()
{
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v[i] = {val, i};
    }

    sort(v.begin(), v.end());

    int x;
    cin >> x;

    int indx = bin_srch(v, x);
    cout << indx << endl;
}
