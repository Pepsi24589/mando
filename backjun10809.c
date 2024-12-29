#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
char a[100];
char abc[26];
int i,j, s = 0;
char *p = abc;
    for (int i = 0; i < 26; i++) {
        p[i] = -1;
    }
        scanf("%s", a);
        j = strlen(a);
        for (i = 0; i < j; i++) {
            if (p[a[i]-97] == -1) 
                p[a[i]-97] = i;
        }
for (i = 0; i < 26; i++) {
    printf("%d ", abc[i]);
}
return 0;
}