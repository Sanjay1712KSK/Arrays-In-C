#include <stdio.h>
void toh(int n,char f_r,char t_r,char a_r){
    if(n==1){
        printf("Move disk 1 from %c to %c \n",f_r,t_r);
        return;
    }
    toh(n-1,f_r,a_r,t_r);
    printf("Move disk %d from %c to %c \n",n,f_r,t_r);
    toh(n-1,a_r,t_r,f_r);
}
int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    toh(n,'A','C','B');
    return 0;
}
