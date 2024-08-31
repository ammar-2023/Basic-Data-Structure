#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin>>N;
    vector<int>A(N);
    vector<long long>pre(N);
    for (int i=0;i<N;i++) 
    {
        cin>>A[i];
    }
    pre[0]=A[0];
    for (int i=1;i<N;i++) 
    {
        pre[i]=A[i]+pre[i-1];
    }
    for (int i=N-1;i>=0;i--) 
    {
        cout << pre[i] << " ";
    }
    return 0;
}
