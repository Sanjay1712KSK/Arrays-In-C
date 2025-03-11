#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    printf("Enter the size of the row in the array : ");
    scanf("%d",&a);
    int b;
    printf("\nEnter the size of the col in the array : ");
    scanf("%d",&b);
    printf("\n");
    int mat[a][b];
    printf("Enter the values into the array \n ");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter the [%d] [%d] element here ->> ",i,j);
            scanf("%d",&mat[i][j]);
            printf("\n");
        }
    }
    selection:
    printf("Printing the elements of the array \n");
    printf("If you want the array to be printed as same as the written format 1 or to print the values of the array in the detailed manner then 2 -->>");
    int d;
    scanf("%d",&d);
    printf("\n");
    if(d==1){
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                printf("%d ",mat[i][j]);
            }
            printf("\n");
        }
    }
    else if (d==2)
    {
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                printf("The [%d] [%d] element is->> ",i,j);
                printf("%d ",mat[i][j]);
                printf("\n");
            }
        }
    }
    else{
        goto selection;
    }
    return 0;
}