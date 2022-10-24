#include<iostream>
using namespace std;

void input(int*,int);
void insertionsort(int*,int);

int main(){

    int size;

    cout<<"\nEnter the size of the array to be sorted: ";
    cin>>size;

    int a[size];

    input(a,size);

    insertionsort(a,size);

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

void insertionsort(int *a, int size){
    int i,j,temp;
    for(i=1;i<size;i++){
        temp=a[i];
        for(j=i-1;j>=0 && temp<a[j];j--){
            a[j+1]=a[j];
        }
        a[++j]=temp;
    }
}