#include<stdio.h>

int main(){
    int i,j;
    for(j=1;j<=4;j++){

for(i=1;i<=6;i++){
    if(j==1 || j==4 ||  i==1 || i==6){
        printf("*");
    }
    else{
        printf(" ");
    }

}printf("\n");
    }
    return 0;
}
