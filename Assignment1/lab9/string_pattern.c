#include<stdio.h>
char str[100],pat[40],rep[40],ans[100];
int i,j,c,m,k,flag=0;
void stringMatch(){
    i=j=c=m=0;
    while(str[c]!='\0'){
            if(str[m]==pat[i]){
                i++;
                m++;
                 if(pat[i]=='\0'){
                    flag=1;
            for(k=0;rep[k]!='\0';k++,j++){
                ans[j]=rep[k];
            }
            i=0;
            c=m;

            }
            }
            else{
                ans[j]=str[c];
                j++;
                c++;
                i=0;
                m=c;
            }
    }
    ans[j]='\0';
}
int main(){
printf("Enter a main string: ");
gets(str);
printf("Enter a pattern string: ");
gets(pat);
printf("Enter a replace strig: ");
gets(rep);
stringMatch();
if(flag==1){
    printf("\nThe output string is %s",ans);
}
else
    printf("\nNot found");
return 0;
}
