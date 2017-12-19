#include <stdio.h>
int n;
char a[23333];
void sortChar(char *a,int n) {
	for(int i = 1 ; i < n ; ++i) {
		int min = i;
		for(int j = 1+i ; j <= n ; ++j)
			if(a[min] > a[j]) min = j;
		int tmp = a[min];
		for(int j = min-1 ; j >= i ; --j) a[j+1] = a[j];
		a[i] = tmp;
	}
	for(int i = 1 ; i <= n ; ++i) printf("%c",a[i]);
	printf("\n");
}
int main() {
	while((a[++n]=getchar())!='\n');
	n--;
	sortChar(a,n);
}

