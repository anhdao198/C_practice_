/*
cho mang arr[]={0,1,2}
su dung con tro va thay doi 2 -> 3.
*/
#include <stdio.h>
 
int main()
{
    
    int arr[] = {0, 1, 2};
    
    //khoi tao con tro den dia chi gia tri 2
    int *p = &arr[2];
   *p += 1; //tro den gia tri 2 va + 1 -> 3
   
   // xuat mang
    for(int i=0; i<3; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}