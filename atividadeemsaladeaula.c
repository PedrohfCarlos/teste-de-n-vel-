#include <stdio.h>
int main(){
int x, y;
y = 2;
int * p1, *p2;
p1 = &y;
x = 1;
p2 = p1;
(*p1)++;
printf("%d %d", x, y);
return 0;
}