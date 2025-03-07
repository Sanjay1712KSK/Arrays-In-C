//Using calloc
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*arr;
    printf("Enter the number of elements to be inserted into the array \n");
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));
    printf("Enter the elements into the array \n");
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
    printf("Printing the elements of the array\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    free(arr);
    return 0;
}
//To run the file
//PS D:\JP> gcc BasicDynamic1DArrayCalloc.c -o BasicDynamic1DArrayCalloc.exe;
//PS D:\JP> ./BasicDynamic1DArrayCalloc.exe