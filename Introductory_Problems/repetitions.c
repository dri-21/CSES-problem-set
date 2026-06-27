#include<stdio.h>
int main(){
    char s[1000001];
    int count=1;
    int max=1;
    scanf("%s",s);
    for(int i=1;s[i]!='\0';i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            count=1;
        }
        if(count>max){
            max=count;
        }
    
    }
    printf("%d",max);
}