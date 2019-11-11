

int
__attribute__ ((noinline))
target (int n, int m) {
  int x = 0;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      x++;
    }
  }
  return x;

}


int
__attribute__ ((noinline))
rewrite (int n, int m) {
  int x = 0;
  for(int i = 0; i < n; ++i) {
      x+=m;
  }
  return x;

}

int main (int argc, char* argv[])
{
    return 0;
}

