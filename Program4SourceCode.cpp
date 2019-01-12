#include<iostream>
int main()
{
    int num;
    std::cout<<"Enter a number ";
    std::cin>>num;
    int a[num];
    std::cout<<"Enter a values "<<std::endl;
    int i;
    for(i=0; i<num; i++)
    {
        std::cin>>a[i];
    }
    int number;
    std::cout<<"Enter a search number ";
    std::cin>>number;
    int first=0;
    int last=num-1;
    int middle;
    middle=(first+last)/2;
    if(first<=last)
    {
            for(i=first; i<last; i++)
            {
            if(a[middle]<number)
            {
                first=middle+1;
            }
            else if(a[middle]==number)
            {
                std::cout<<"\n\n\t\t\t\tNumber of Position "<<middle+1<<std::endl;
                break;
            }
            else
            {
                last=middle-1;
            }
            middle=(first+last)/2;
            }
    }
    if(first>last)
    {
        std::cout<<"Not found ";
    }
}
