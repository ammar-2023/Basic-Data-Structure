#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin >> N;
    int MAX_VALUE=1000000000;
    vector<bool>frq(MAX_VALUE+1,false);
    bool samenum=false;
    for(int i=0;i<N;i++) 
    {
        int n;
        cin>>n;
        if(frq[n]) 
        {
            samenum=true;
            break;
        }
        frq[n]=true;
    }
    if (samenum)
    {
        cout<<"YES\n";
    } 
    else 
    {
        cout<<"NO\n";
    }
    return 0;
}
