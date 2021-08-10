
#include<stdio.h>
 
 
int main(){
    
    int sum;
    scanf("%d", &sum);
 
    for(int i = 1; i <= 6;i++){
        for(int j = 1; j <=6; j++){
            if(i + j == sum){
                
                printf("%d %d\n",i,j);
            }
            
        }
        
    }
    
    return 0;
}

