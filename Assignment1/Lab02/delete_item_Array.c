#include<stdio.h>
int main(){
int Array[100];
int numberArray,rmPosition;
printf("Enter the range of an Array: \n Array Size = ");
scanf("%d",&numberArray);
for(int i=0;i<numberArray;i++){
    scanf("%d",&Array[i]);
}

printf("Enter the elements position that you wants to remove");
scanf("%d",&rmPosition);

for(int i=rmPosition-1; i<numberArray; i++){

    Array[i]=Array[i+1];
}

for(int i=0;i<numberArray-1;i++){
        printf("%d",Array[i]);

}

return 0;
}
