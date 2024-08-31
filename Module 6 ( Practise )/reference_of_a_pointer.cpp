#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void fun(int *&p)
{
    *p=20;
}
int main()   
{
    int val=10;
    int *ptr=&val;
    fun(ptr);
    cout<<*ptr<<endl;
    
    return 0;
}