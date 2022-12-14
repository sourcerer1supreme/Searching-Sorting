#include<iostream>
using namespace std;

void input(int *a, int size);
int linearsearch(int *a, int size, int x);

int main()
{
    int size, x, index;

    cout<<"Enter the size of the array to be searched: ";
    cin>>size;

    int array[size];

    input(array,size);

    cout<<"\n\nEnter the element to be searched: ";
    cin>>x;


    index = linearsearch(array,size,x);

    if(index>=0)
        cout<<"\nElement "<<x<<" FOUND at POSITION: "<<(index+1)<<endl;
    else
        cout<<"\nElement "<<x<<" NOT FOUND!\n"<<endl;

    return 0;
}

void input(int *a, int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"\nEnter element "<<i+1<<": ";
        cin>>a[i];
    }

    cout<<"\n\nThe entered array is: \n";
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
}

int linearsearch(int *a, int size, int x)
{
    for(int i=0;i<size;i++)
        if(a[i]==x)
            return i;

    return -1;
}