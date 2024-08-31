#include<bits/stdc++.h>
using namespace std;
int main()   
{
    vector<int>v={1,2,3,4,5};

    //v.insert(v.begin()+2,10);
    //v.insert(v.begin()+2,v.begin(),v.end());
    //v.erase(v.begin()+3);
    //v.insert(v.begin()+2,v.begin(),v.end());
    //v.erase(v.begin()+1,v.begin()+4);
    replace(v.begin(),v.end(),2,100);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}