int main() {
	int* bufArray = 0;
	int i = 0, buf = 0, n = 4;
	bufArray = calloc(n, sizeof(int));
	while(i != n) {
		buf = rand() % 8;
		printf("%d\n", buf);
		for(int j = 0; j<=i; j++) {
			printf("j: %d i: %d\n", j, i);
			if(bufArray[j] == buf) {
				break;
			}
			if(j == i) {
				bufArray[i] = buf;
				i++;
				break;
			}
		}
	}
	for(int i = 0; i<n; i++) {
		printf("%d ", bufArray[i]);
	}
	free(bufArray);
}
