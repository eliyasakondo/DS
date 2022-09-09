#include<stdio.h>
int main(){
int Array[100];
int numberArray,rmPosition;
int tempMax,tempMin;
int tempMaxPostion,tempMinPosition=0;
printf("Enter the range of an Array: \n Array Size = ");
scanf("%d",&numberArray);
for(int i=0;i<numberArray;i++){
    scanf("%d",&Array[i]);
}
tempMax=tempMin=Array[0];

for(int i=1;i<numberArray;i++){

    if(Array[i]>tempMax){
            tempMax=Array[i];
            tempMaxPostion=i;

    }
     if(Array[i]<tempMin){
            tempMin=Array[i];
            tempMinPosition=i;

    }
}
tempMaxPostion++;
tempMinPosition++;
printf("\n Max element Position =%d   and Value = %d\n",tempMaxPostion,tempMax);
printf("Min element Position =%d   and Value = %d",tempMinPosition,tempMin);
return 0;
}
