#include <bits/stdc++.h>

using namespace std;

int minMoves(vector<int>& nums)
{
    int ans = 0, q = 1;
    while(q != 0)
    {
        q = 0;
        sort(nums.begin(),nums.end());
        int w = nums[nums.size()-1] - nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            q += nums[i+1] - nums[i];
            nums[i] += w;
        }
        if ( q==0 )
            break;
        ans+=w;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for ( int i=0;i<n;i++ )
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << minMoves(v);
    return 0;
}
