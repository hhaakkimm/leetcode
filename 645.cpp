#include <bits/stdc++.h>

using namespace std;

bool a[111111];

vector<int> findErrorNums(vector<int>& nums) {
    vector<int> ans;

    for(int i = 0; i<nums.size(); i++)
    {
        if(a[nums[i]] == 1)
            ans.push_back(i+1);
        a[nums[i]]=1;
    }
/*    for(int i = 0; i<ans[0]; i++)
    {
        if(nums[i]==nums[ans[0]])
            ans.push_back(i+1);
    }
  */  reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    vector<int> v;
    for(int i=1;i<=4;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    v = findErrorNums(v);
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<' ';
    return 0;
}

