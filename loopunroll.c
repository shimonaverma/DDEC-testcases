

int
__attribute__ ((noinline))
target (int n) {
  int x = 0;
  for(int i = 0; i < n; ++i) {
    x++;
  }
  return x;

}


int
__attribute__ ((noinline))
rewrite (int n) {
  int x = 0;
  x+=n;
  return x;

}

int main (int argc, char* argv[])
{
    return 0;
}

