#include<stdio.h>

int
__attribute__ ((noinline))
target (int x, int n){
int i, k = 0;

for (i=0; i < n; ++i){
x += k*5;
k += 1;
if (i >= 5)
k += 3;
}
return x;
}


int
__attribute__ ((noinline))
rewrite (int x, int n){
int i, k = 0;

for (i=0; i < n; ++i){
x += k;
k += 5;
if (i >= 5)
k += 15;
}
return x;
}

int main (int argc, char* argv[])
{
	printf("%d %d", bitflip(3,10), bitflip_vec(3,10));
    return 0;
}

