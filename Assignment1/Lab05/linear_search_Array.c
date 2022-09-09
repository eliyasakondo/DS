#include<stdio.h>
int main(){
int Array[100];
int numberArray;
int searchValue;
int flag;
flag =0;
printf("Enter the Array  size ");

scanf("%d",&numberArray);
for(int i=0;i<numberArray;i++){

    scanf("%d",&Array[i]);
}
//This is linear search data Array that must be not be available that data point of the value;
//Lenear search of an single Array;
printf("enter the value for linear search");
scanf("%d",&searchValue);
for(int i=0; i<numberArray;i++){
if(Array[i]==searchValue){
    flag=1;
    break;
}

}
if(flag==1){
        printf("Elements founds in Array.");
}
else
    printf(" Element not Found ");
return 0;

}
