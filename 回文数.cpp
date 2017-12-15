#include <stdio.h>
char a[2333];
int t;
int main() {
	while((a[t] = getchar())>='0' && a[t] <= '9')t++;
		for(int i = 0 ; i < t/2 ; ++i) {
			if(a[i]!=a[t-i-1]) {
				printf("No\n");
				return 0;
			}
		}
		printf("Yes\n");
}

