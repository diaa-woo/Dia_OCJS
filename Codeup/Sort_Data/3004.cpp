#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int list[50000] = {0,}, list2[50000] = {0,},n;
	std::cin >> n;
	for(int i = 0; i<n; i++) {
		scanf("%d",&list[i]);
		list2[i] = list[i];
	}
	sort(list, list+n);
	
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			if(list2[i] == list[j]) {
				std::cout << j << " ";
			}
		}
	}
}
