
#include<stdio.h>
 
 
int main(){
    
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= 2*n;i++){
        
        for(int j = 1; j<= 2*n; j++){
            
            if(i+j == n+1){printf("*");}
            else if(i+j == n+ 2*i ){printf("*");}
            else if(i+j == n+ 2*j ){printf("*");}
            else if(i+j == 3*n+1 ){printf("*");}
            else{printf(" ");}
            
        }
        printf("\n");
        
    }
    
    
    return 0;
}

