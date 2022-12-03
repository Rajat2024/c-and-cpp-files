#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first!=b.first)
    return a.first<b.first; //by our requirement we change the condition for first element of pair
    else
    return a.second<b.second; //by our requirement for second element in pair
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>ar(n);
    for(int i=0;i<n;i++)
    cin>>ar[i].first>>ar[i].second;

    sort(ar.begin(),ar.end(),cmp);

    for(int i=0;i<n;i++)
    cout<<ar[i].first<<" "<<ar[i].second<<endl;
}