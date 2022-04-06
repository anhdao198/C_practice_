/*
kiem tra so nguyen to
so nguyen to la so chi chia het cho 1 va chinh no (>1)
*/
#include <stdio.h>
#include <math.h>
 
int main(){
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);

    // kiem tra so lon hon 1.
    if(n < 2){
        printf("\n%d khong phai ", n);
        return 0;
    }

//Check lay can bac 2 cua so do chia lay du 2, neu = 0 -> la so nguyen to.
    int t = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            t++;
        }
    }
    if(t == 0)
        printf("\n%d la so nguyen to\n", n);
    else
        printf("\n%d khong phai \n", n);
    
}
 