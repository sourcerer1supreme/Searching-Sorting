#include<iostream>
using namespace std;

void input(int*,int);
void bubblesort(int*,int);

int main()
{
    int size;

    cout<<"\nEnter the size of the array to be sorted: ";
    cin>>size;

    int a[size];

    input(a,size);

    bubblesort(a,size);

    cout<<"\n\nThe sorted array is: "<<endl;

    for(int i=0;i<size;i++)
        cout<<a[i]<<"\t";


    cout<<endl;

    return 0;
}

void input(int *a, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<"\nEnter element "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"\nThe unsorted array is: \n";
    for(int i=0;i<size;i++)
        cout<<a[i]<<"\t";
}

void bubblesort(int *a, int size)
{
    int i,j,t;

    for(i=0;i<size-1;i++)
        for(j=0;j<size-i-1;j++)
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }

} 