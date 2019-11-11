
int
__attribute__ ((noinline))
target (int x, int n){
int i;
for (i=0; i!=n; ++i){
x +=2;
x-=1;
}
return x;
}


int
__attribute__ ((noinline))
rewrite (int x, int n){
int i;

for (i=0; i!=n; ++i){
x += 1;
}
return x;
}

int main (int argc, char* argv[])
{
    return 0;
}

