#include <stdio.h>
#include <stdlib.h>

void selectionsort(int a[],int size);

int main()
{

    int a[100],i,j,size;
    printf("*****SELECTION SORT*****\n\n");
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("\nEnter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("The array before sorting is:\n\n");
    for(i=0;i<size;i++)
    {

        printf("%d\t",a[i]);

    }
    selectionsort(a,size);


}

void selectionsort(int a[],int size)
{
    int i,j;


    for(i=0;i<size-1;i++)
    {
        int min=i;
        for(j=i+1;j<size;j++)
        {

               if(a[j]<a[min])
                min=j;
        }
        if(min!=i)

        {

            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }

    }


    printf("\n\nThe array after sorting is:\n\n");
    for(i=0;i<size;i++)
    {

        printf("%d\t",a[i]);

    }

}