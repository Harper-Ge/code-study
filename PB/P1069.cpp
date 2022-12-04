#include <stdio.h>
#include <string.h>
int main() {
	int m, n, s, id = 0, hash[12000] = { 0 };
	char name[21] = { 0 };
	scanf("%d %d %d\n", &m, &n, &s);
	if (m < s) printf("Keep going...");
	else {
		for (int i = 1; i <= m; i++, id = 0) {
			scanf("%s", name);
			if (i == s) {
				for (int j = 0; name[j]; j++) id = (id * 26 + name[j]) % 10007; 
				if (hash[id]++) s++;	
				else {
					printf("%s\n", name);
					s += n;
				}
			}
		}
	}
	return 0;
}

