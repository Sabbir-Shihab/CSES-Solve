/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cntA=0,cntC=0, cntG=0, cntT=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A') cntA++;
        else if(s[i]=='C') cntC++;
        else if(s[i]=='G') cntG++;
        else cntT++;
    }
  /*if(cntA>cntC && cntA>cntG && cntA>cntT) cout<<cntA<<endl;
  else if(cntC>cntA && cntC>cntG && cntC>cntT) cout<<cntC<<endl;
  else  if(cntG>cntC && cntG>cntA && cntG>cntT) cout<<cntG<<endl;
  else if(cntT>cntC && cntT>cntA && cntT>cntG) cout<<cntT<<endl;*/
  // cout << max({cntA, cntC, cntG, cntT}) << endl;
//}
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int maxLen = 1, curLen = 1;

    for (size_t i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            curLen++;
        } else {
            maxLen = max(maxLen, curLen);
            curLen = 1;
        }
    }

    maxLen = max(maxLen, curLen);

    cout << maxLen << endl;

    return 0;
}
