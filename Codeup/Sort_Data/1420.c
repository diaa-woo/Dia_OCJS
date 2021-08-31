#include<stdio.h>

int main() {
	int n = 0, score1[50] = {0,},score2[50]= {0,},temp = 0,j,adress = 0;
	char name[50][50];
	scanf("%d",&n);
	for(int i = 1; i<=n; i++) {
		scanf("%s %d",&name[i],&score1[i]);
		score2[i] = score1[i];
	}
	for(int i=1; i<n; i++)
    {
		for(j = 1; j<n; j++)
        {
            if (score2[j] > score2[j+1])
            {
                temp = score2[j];
                score2[j] = score2[j+1];
                score2[j+1] = temp;
            }
        }
    }
    for(int i = 1;i<=n;i++) {
    	if(score1[i]==score2[3]) {
    		adress = i;
    		break;
		}
	}
	printf("%s",name[adress]);
	return 0;
}
