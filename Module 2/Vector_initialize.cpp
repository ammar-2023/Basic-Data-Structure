// //Type 1
// #include<bits/stdc++.h>
// using namespace std;
// int main()   
// {
//     vector <int>v;
//     cout <<v.size() <<endl;
//     return 0;
// }

//Type 2
// #include<bits/stdc++.h>
// using namespace std;
// int main()   
// {
//     vector <int>v(5);
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout <<v.size() <<endl;
//     return 0;
// }

//Tipe 3
#include<bits/stdc++.h>
using namespace std;
int main()   
{
    vector <int>v(5,10);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout <<v.size() <<endl;
    return 0;
}

//Type 5
// vector<int>v(a,a+N);
// int a[6]={1,2,3,4,5,6};
// vector<int>v(a,a+6);
// vector <int> v ={1,2,3,4,5,6};*/