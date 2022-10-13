#include <stdio.h>
#include <stdlib.h>
void Bubblesort(int a[] ,int size);
int main()
{
   int a[100],i,j,size;
    printf("*****BUBBLE SORT*****\n\n");
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

    Bubblesort(a,size);
}



void Bubblesort(int a[] ,int size)

{
    int i,j,min;
    for(i=0;i<size-1;i++)

    {
        for(j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {

                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
    printf("\n\nThe array after sorting is:\n\n");
    for(i=0;i<size;i++)
    {

        printf("%d\t",a[i]);

    }
    

}
