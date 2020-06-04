#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
	int a, j, i, pom, p, k, f, flag;
	char str[15], Pred[15], Za[15], aPred[15][15], aZa[15][15];

	if (strchr(argv[1], '/') != NULL) {

		for (i = 1; i < argc; i++) {
			j = 0;k = 0;
			while (argv[i][j] != '/') {
				j++;
			}
			strncpy(Pred, argv[i], j);
			Pred[j] = '\0';
			strcpy(aPred[i], Pred);

			pom = j;
			while (argv[i][pom] != '\0') {
				pom++;
			}
			for (p = j + 1; p < pom; p++) {
				Za[k] = argv[i][p];
				k++;
			}
			Za[k] = '\0';
			strcpy(aZa[i], Za);
		}

		while (scanf("%s", &str) != EOF) {
			flag = 0;
			for (f = 0; f <= i-1;f++) {
				if (strcmp(str, aPred[f]) == 0) {
					printf("%s ", aZa[f]);
					flag = 0;
					continue;
				}
				else flag++;

			}
			if (flag == i)
				printf("%s ", str);

		}
	}

		else {
		while (scanf("%s", &str) != EOF) {
				a = 0;
				for (int i = 1; i <= argc-1;i++) {
					if (strcmp(str, argv[i]) == 0){
						for (int j = 0;j <= strlen(str);j++) {
							if (j == strlen(str)) {
								printf(" ");
							}
							else printf("*");
						}
					}
					else 
						a++;
				}
				if (a == argc - 1)
					printf("%s ", str);
			}
		}
		getchar(); getchar();
		return 1;
}
