#include<iostream>
int main()
{
    int num,number=0, i, position=0,value=0;
    std::cout<<"Enter a number ";
    std::cin>>num;
    int a[num];
    std::cout<<"Enter a values "<<std::endl;
    for(i=0; i<num; i++)
    {
        std::cin>>a[i];
    }
    std::cout<<"Enter a value to search in an Array ";
    std::cin>>number;
    if(number>0)
    {
    for(i=0; i<num; i++)
    {
        if(a[i]==number)
        {
            std::cout<<"\n\n\t\tIndex number is "<<i<<std::endl;
            break;
        }
    }
    }
    else
    {
    std::cout<<"Not found "<<std::endl;
    }
}
