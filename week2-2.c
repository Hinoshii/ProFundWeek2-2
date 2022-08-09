#include<stdio.h>
int main(){
    printf("Enter number : ");
    int n;
    scanf("%d",&n); //input
    
    printf("Countdown! : ");
    int x=n;
    while(x!=0){
        printf("%d",x);
        x--;
    }
}