#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define endl '\n'
#define int long long

const int mod = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    vector<int>prefix(n);
    partial_sum(arr.begin(),arr.end(),prefix.begin());
    for (auto &it : prefix)
        cout<< it <<" ";
    cout<<endl;

    partial_sum(arr.begin(), arr.end(), prefix.begin(), minus<int>());
    for (auto &it : prefix)
        cout << it << " ";
    cout << endl;

    partial_sum(arr.begin(), arr.end(), prefix.begin(),multiplies<int>());
    for (auto &it : prefix)
        cout << it << " ";
    cout << endl;

    partial_sum(arr.begin(), arr.end(), prefix.begin(),[](int a , int b){
        return a ^ b;
    });
    for (auto &it : prefix)
        cout << it << " ";
    cout << endl;

    partial_sum(arr.begin(), arr.end(), prefix.begin(),[](int a , int b){
        return max(a,b);
    });
    for (auto &it : prefix)
        cout << it << " ";
    cout << endl;
}
