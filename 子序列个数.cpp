#include <stdio.h>
#include <string.h>
char a[2333];
char b[2333];
int main() {
	int lena = 0;
	int lenb = 0;
	while((a[lena++]=getchar())!='\n');lena--;
	while((b[lenb++]=getchar())!='\n');lenb--;
	int ans = 0, j = 0;
	for(int i = 0 ; i < lena ; ++i) {
		j = 0;
		while(a[i+j]==b[j] && j<lenb && i+j<lena)j++;
		if(j==lenb) ans++;
	}
	printf("%d\n",ans);
}
