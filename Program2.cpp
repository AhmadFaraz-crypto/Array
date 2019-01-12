#include<iostream>
int main()
{
    int num, number, position;
    std::cout<<"Enter a number ";
    std::cin>>num;
    int a[num];
    std::cout<<"Enter a values "<<std::endl;
    for(int i=0; i<num; i++)
    {
        std::cin>>a[i];
    }
    std::cout<<"Enter a inserted value ";
    std::cin>>number;
    std::cout<<"Enter a position where you want to insert a value ";
    std::cin>>position;
    if(position<num)
    {
        for(int i=num; i>position; i--)
        {
            a[i]=a[i-1];
        }
        a[position]=number;
    }
    else
    {
        a[position]=number;
    }
    std::cout<<"Number inserted succesfully "<<std::endl;
    for(int i=0; i<num+1; i++)
    {
        std::cout<<a[i]<<" "<<std::endl;
    }
}
