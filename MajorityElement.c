#include <stdio.h>
#include <stdlib.h>
int majorityElement(int* nums,int numSize){
    printf("Finding the majority element");
    for(int i=0;i<5;i++){
        printf(".");
    }
    int candidate=nums[0],count=1;
    for(int i=0;i<numSize;i++){
        if(nums[i]==candidate){
            count++;
        }
        else{
            count--;
            if(count==0){
                candidate=nums[i];
                count=1;
            }
        }

    }
    return candidate;
}
int main(){
    int numSize;
    printf("Enter the size of the array\n");
    scanf("%d",&numSize);
    int *arr=(int *)malloc(numSize*sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed \n");
        return 1;
    }
    printf("Enter %d elements \n",numSize);
    for(int i=0;i<numSize;i++){
        scanf("%d",&arr[i]);
    }
    int result=majorityElement(arr,numSize);
    printf("\nThe majority element is %d",result);
    free(arr);
    return 0;
}