#include <stdio.h>
#include <stdlib.h>
void Transpose(int rows,int cols,int mat[rows][cols]){
    int mattrans[cols][rows];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            mattrans[j][i]=mat[i][j];
        }
    }
    selection:
    printf("Printing the elements of the array \n");
    printf("If you want the array to be printed as same as the written format 1 or to print the values of the array in the detailed manner then 2 -->>");
    int d;
    scanf("%d",&d);
    printf("\n");
    if(d==1){
        for(int i=0;i<cols;i++){
            for(int j=0;j<rows;j++){
                printf("%d ",mattrans[i][j]);
            }
            printf("\n");
        }
    }
    else if (d==2)
    {
        for(int i=0;i<cols;i++){
            for(int j=0;j<rows;j++){
                printf("The [%d] [%d] element is->> ",i,j);
                printf("%d ",mattrans[i][j]);
                printf("\n");
            }
        }
    }
    else{
        goto selection;
    }
}
int main(){
    int rows;
    printf("Enter the size of the row in the array : ");
    scanf("%d",&rows);
    int cols;
    printf("\nEnter the size of the col in the array : ");
    scanf("%d",&cols);
    printf("\n");
    int mat[rows][cols];
    printf("Enter the values into the array \n ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
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
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                printf("%d ",mat[i][j]);
            }
            printf("\n");
        }
    }
    else if (d==2)
    {
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                printf("The [%d] [%d] element is->> ",i,j);
                printf("%d ",mat[i][j]);
                printf("\n");
            }
        }
    }
    else{
        goto selection;
    }
    printf("Transposing the array\n");
    Transpose(rows,cols,mat);
    return 0;
}

//To run this file
// gcc MatrixTransposition.c -o MatrixTransposition.exe
//./MatrixTransposition.exe

//How to Push a file into github in VS terminal (BASH)
/* git status
git add .
git commit -m "Updated"
git push origin main */