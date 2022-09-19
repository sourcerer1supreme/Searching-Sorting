#include<iostream>
using namespace std;

void input(int *a, int size);
int linearsearch(int *a, int size, int x);

int main()
{
    int size, x, index;

    printf("Enter the size of the array to be searched: ");
    scanf("%d",&size);

    int array[size];

    input(array,size);

    printf("\n\nEnter the element to be searched: ");
    scanf("%d", &x);


    index = linearsearch(array,size,x);

    if(index>=0)
        printf("\nElement %d FOUND at POSITION: %d\n", x, (index+1));
    else
        printf("\nElement %d NOT FOUND!\n", x);

    return 0;
}

void input(int *a, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\n\nThe entered array is: \n");
    for(int i=0;i<size;i++)
        printf("%d ", a[i]);
}

int linearsearch(int *a, int size, int x)
{
    for(int i=0;i<size;i++)
        if(a[i]==x)
            return i;

    return -1;
}