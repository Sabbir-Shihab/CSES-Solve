#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long  arr[n],countt=0;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        countt+=arr[i];
    }
   int summ= (long long) n* (n+1)/2;

    int  hi=0;
    hi = summ-countt;
    cout<<hi;
}


