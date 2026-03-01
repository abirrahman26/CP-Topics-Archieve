#include<bits/stdc++.h>
#define int long long
using namespace std;

int bin_srch(vector<int>& a, int x)
{
    int lo = 0, hi = a.size() - 1;

    while(lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if(a[mid] == x)
            return mid;
        else if(a[mid] < x)
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

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(),v.end());

    int x;
    cin >> x;

    int indx = bin_srch(v,x);
    cout << indx << "\n";
}

