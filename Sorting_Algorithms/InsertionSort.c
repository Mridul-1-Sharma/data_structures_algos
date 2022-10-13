#include <stdio.h>
#include <stdlib.h>

void insertionsort(int a[],int size);

int main()
{

    int a[100],i,j,size;
    printf("*****INSERTION SORT*****\n\n");
    printf("Enter the size of the array:\n");
    scanf("%d",&size);

    printf("\nEnter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        printf("Enter the element at index %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe array before sorting is:\n\n");
    for(i=0;i<size;i++)
    {

        printf("%d\t",a[i]);

    }
     insertionsort(a,size);


}

 void insertionsort(int a[],int size)
{
        int i,j,element;
        for(i=1;i<size;i++)
        {
            element = a[i];
            j = i - 1;
            while(j>=0 && a[j] > element )
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1] = element;


        }

        printf("\nThe array after sorting is:\n\n");
        for(i=0;i<size;i++)
            {

               printf("%d\t",a[i]);

            }
}

 
