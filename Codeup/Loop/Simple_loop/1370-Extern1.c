#include<stdio.h>
 
 
int main(){
    
    int h,r;
    scanf("%d %d", &h, &r);
    
    for(int i = 1; i <= r; i++){
        int m = 1;
        for(int j = 1; j <= h*2 -1; j++){
            if(j <= h){
                for(int k = 1; k <= h; k++){
                    if(k == j){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
            else{
                
                for(int k = 1; k <= h-1; k++){
                    if(k == j-2*m){
                        printf("*");
                        
                    }
                    else{
                        printf(" ");
                    }
                }
                m++;
            }
            
              printf("\n");
                
            }
                   
        }
    
 
    return 0;
}
