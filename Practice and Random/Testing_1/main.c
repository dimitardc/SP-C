#include <stdio.h>
int main() {
int i, j=5;
i = ++j; /* ova e isto so j++; i=j;*/
printf("i=%d, j=%d\n", i, j);
j=5;
i=j++; /* ova e isto so i=j; j++;*/
printf("i=%d, j=%d\n", i, j);
return 0;
}
