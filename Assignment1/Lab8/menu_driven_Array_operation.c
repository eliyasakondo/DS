#include<stdio.h>
#include<stdlib.h>
int numberArray,Array[100],pos,val;

//Array Create function here.
  void Creation(){
      printf("Enter total Elements number in Array :");
      scanf("%d",&numberArray);
      printf("\n Enter all Elements value : ");
for(int i=0;i<numberArray;i++)
{
    scanf("%d",&Array[i]);
}
printf("Array creation successfully completed.\n");
}
//Display function here
void Display(){
    printf("The Array is : ");
    if(numberArray==NULL){
        printf("empty. ");
    }

    else{
        for(int i=0;i<numberArray;i++){

    printf("%d\t",Array[i]);
}
    }

}
//insert elements in Array
void Insert(){
printf("Enter position of inserting element :");
scanf("%d",&pos);
printf("value of element : ");
scanf("%d",&val);
for(int i=numberArray-1;i>pos-1;i--){
    Array[i+1]=Array[i];
}
Array[pos-1]=val;
numberArray=numberArray+1;
printf("Successfully an element inserted\n");
}

//delete elements from this array
void Delete(){
printf("Enter Index/position of elements:  ");
scanf("%d",&pos);
for(int i=pos-1;i<numberArray-1;i++){
        Array[i]=Array[pos];

}
numberArray=numberArray-1;
printf("An element remove from the Array is Successful.\n");
}

int main(){
 while(1){
     int ch;
  printf("\nEnter your choice list \n 1. Create an Array \n 2. Display \n 3. Insert element. \n 4. Delete Item.  \n 5. Exit\n");
    scanf("%d",&ch);
switch(ch){
case 1:
        Creation();
        break;
case 2:
        Display();
        break;
case 3:
        Insert();
        break;
case 4:
        Delete();
        break;
case 5:
        exit(0);
        break;
default:
        printf("Wrong Input. Try Again");
    }
 }
return 0;
}
