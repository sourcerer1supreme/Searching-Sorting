#include<iostream>
using namespace std;

void input(int*, int);
void selectionsort(int*, int);

int main()
{
    int size;

    cout<<"\nEnter the size of the array to be sorted: ";
    cin>>size;

    int a[size];

    input(a,size);

    selectionsort(a,size);

    cout<<"\n\nThe sorted array is: "<<endl;

    for(int i=0;i<size;i++)
        cout<<a[i]<<"\t";

    cout<<endl;

    return 0;
}

void input(int *a, int size){
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

void selectionsort(int *a, int size){
    int i,j,min_i,t;
    for(i = 0; i < size-1; i++){
        min_i=i;
        for(j=i+1;j<size;j++){
            if(a[j]<a[min_i])
                min_i=j;
        }
        t=a[i];
        a[i]=a[min_i];
        a[min_i]=t;
    }
}