#include<iostream>
using namespace std;
int main()
{
    int num, i, n;
    int number=0;
    cout<<"Enter a number ";
    cin>>num;
    int a[num];
    cout<<"Enter a values "<<endl;
    for(i=0; i<num; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter a number which you want deleted ";
    cin>>number;
    for(i=0; i<num; i++)
    {
        if(a[i] != number)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
}
