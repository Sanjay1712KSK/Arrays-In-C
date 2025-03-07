#include <stdio.h>
//#include <stdlib.h>
int main(){
    int row,col;
    printf("Enter the size of the coloumn \n");
    scanf("%d",&col);
    printf("Enter the size of the row \n");
    scanf("%d",&row);
    int arr[row][col];
    printf("Enter the elements into the array \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    return 0;
}