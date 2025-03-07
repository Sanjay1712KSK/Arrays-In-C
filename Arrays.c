#include <stdio.h>
#include <stdlib.h>
int main(){
    int size;
    printf("Enter the size of the array \n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the value into the array \n");
for(int i=0;i<size;i++){
    scanf("%d ",&arr[i]);
}
printf("Printing the values of the arrays given \n");
for(int i=0;i<size;i++){
    printf("%d \n",arr[i]);
}
return 0;
}