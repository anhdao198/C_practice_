/*
kiem tra so chinh phuong
so chinh phuong la mot so co can bac 2 la so nguyen
*/

#include<stdio.h>

#include<math.h>
int main()
{
    int n; //khai bao so nguyn n
    printf("\nNhap n: ");
    scanf("%d", &n);

    if (sqrt((float)n) == (int)sqrt((float)n))  // ep kieu so thuc can bac 2 cua n vs ep kieu so nguyen 
        printf("\n%d La so chinh phuong\n", n);
    else
        printf("\n%d Hong phai so chinh phuong\n", n);
    return 0;
}