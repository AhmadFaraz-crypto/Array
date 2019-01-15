#include<iostream>
int main()
{
    int size1, size2, n1[size1], n2[size2], l, i, j;
    std::cout<<"Enter a size ";
    std::cin>>size1;
    std::cout<<"Enter first set values "<<std::endl;
    for(i=0; i<size1; i++)
    {
        std::cin>>n1[i];
    }
    std::cout<<"Enter a size 2 ";
    std::cin>>size2;
    std::cout<<"Enter second set values "<<std::endl;
    for(i=0; i<size2; i++)
    {
        std::cin>>n2[i];
    }
    for(i=0; i<size1; i++)
    {
        std::cout<<n1[i]<<" ";
    }
    for(i=0; i<size2; i++)
    {
        l=0;
        for(j=0; j<size1; j++)
        {
            if(n2[i]==n1[j])
            {
                l=1;
            }
        }
        if(l==0)
        {
            std::cout<<n2[i]<<" ";

        }
        l=0;
    }
}
