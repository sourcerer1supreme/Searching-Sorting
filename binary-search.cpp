#include<iostream>
using namespace std;

void input(int *a, int size);
int binarysearch(int *a, int size, int x);

int main()
{
    int size, x, index;

    cout<<"Enter the size of the array to be searched: ";
    cin>>size;

    int array[size];

    input(array,size);

    cout<<"\n\nEnter the element to be searched: ";
    cin>>x;


    index = binarysearch(array,size,x);

    if(index>=0)
        cout<<"\nElement "<<x<<" FOUND at POSITION: "<<(index+1)<<endl;
    else
        cout<<"\nElement "<<x<<" NOT FOUND!\n"<<endl;

    return 0;
}

void input(int *a, int size)
{
    printf("\nEnter elements in a SORTED manner.\n");
    for(int i=0;i<size;i++)
    {
        cout<<"\nEnter element "<<i+1<<": ";
        cin>>a[i];
    }

    cout<<"\n\nThe entered array is: \n";
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
}

int binarysearch(int *a, int size, int x)
{
    int low, high, mid;
    low = 0;
    high = size - 1;
    while (low<=high)
    {
        mid = low + (high-low)/2;
        if(x<a[mid])
            high = mid-1;
        else if(x>a[mid])
            low = mid+1;
        else    
            return mid;
    }
    return -1;
}