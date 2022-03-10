#include <stdio.h>

int main() {
	int h = 0, m = 0;
	scanf("%d %d", &h, &m);
	if(m<45) {
		if(h==0) printf("%d %d", (h+24)-1, (m+60)-45);
		else printf("%d %d", h-1, (m+60)-45);
	}
	else printf("%d %d", h, m-45);
	return 0;
}
