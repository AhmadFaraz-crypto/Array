#include<iostream>
int main()
{
    int size1, size2, n1[size1], n2[size2], i, j, f;
    std::cout<<"Enter a first set size ";
    std::cin>>size1;
    std::cout<<"Enter a first set values "<<std::endl;
    for(i=0; i<size1; i++)
    {
        std::cin>>n1[i];
    }
    std::cout<<"Enter a second set size ";
    std::cin>>size2;
    std::cout<<"Enter a second set values "<<std::endl;
    for(i=0; i<size2; i++)
    {
        std::cin>>n2[i];
    }
    std::cout<<"\n\n\t\tIntersection values : ";
    for(i=0; i<size1; i++)
    {
        f=0;
        for(j=0; j<size2; j++)
        {
            if(n2[i]==n1[j])
            {
                f=1;
            }
        }
        if(f==1)
        {
            std::cout<<n2[i];
        }
        f=0;
    }
}
