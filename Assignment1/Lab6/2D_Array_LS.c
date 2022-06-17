#include<stdio.h>
int main(){
int r,c,searchValue;
int flag;
flag=0;
printf("Enter the number of row =");
scanf("%d",&r);
printf("Enter the number of column = ");
scanf("%d",&c);
int Array[r][c];
for(int i=0;i<r;i++){
    for(int j=0; j<c;j++){
        scanf("%d",&Array[i][j]);
    }
}
printf("Enter the value that you wants to search from 2D Array");
scanf("%d",&searchValue);

printf("\n");
for(int i=0;i<r;i++){
    for(int j=0; j<c;j++){
        if(Array[i][j]==searchValue){
                flag=1;
                break;
        }
    }
}
if(flag==1){
    printf("Congratulations! Element found in 2D Array. We are using Linear Search for this searching. Thanks for using our program. \n regards - Akondo Group");
}
return 0;
}
