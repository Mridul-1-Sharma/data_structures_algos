//DESCRIPTION
//--->  First, four variables containing the indices for the corner points of the array are initialized.

//---> The algorithm starts from the top left corner of the array, and traverses the first row from left to right. Once it traverses the whole row it does not need to revisit it, thus, it increments the top corner index.

//---> Once complete, it traverses the rightmost column top to bottom. Again, once this completes, there is no need to revisit the rightmost column, thus, it decrements the right corner index.

//---> Next, the algorithm traverses the bottommost row and decrements the bottom corner index afterward.

//--->Lastly, the algorithm traverses the leftmost column, incrementing the left corner index once it’s done.

//This continues until the left index is greater than the right index, and the top index is greater than the bottom index.






#include<iostream>
using namespace std;
void printspiral(int arr[][3],int n,int m){
    int count=0;
    int startrow=0;
    int startcol=0;
    int endrow=n;
    int endcol=m;
    int total=n*m;
    while (count<total)
    {
        for (int i = startcol; i <endcol && count<=total; i++)
        {
           cout<<arr[startrow][i]<<" ";
           count++;
        }
        startrow++;
        for (int i = startrow; i < endrow && count<=total; i++)
        {
            cout<<arr[i][endcol-1]<<" ";
            count++;
        }
        endcol--;
        for (int i = endcol-1; i >=startcol && count<=total; i--)
        {
            cout<< arr[endrow-1][i]<<" ";
            count++;
        }
        endrow--;
        for (int i = startcol; i < endcol && count<=total; i++)
        {
            cout<<arr[endrow-1][i]<<" ";
            count++;
        } 
    }
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printspiral(arr,3,3);
return 0;
}
