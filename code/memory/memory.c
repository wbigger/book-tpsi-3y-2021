#include  <stdio.h>

int main(void) {
  int a = 1;
  int b = 2;
  int c = a+b;
  char* arr=(char*)main;

  printf("posizione in memoria di a: 0x%016llx\n",(unsigned long long int)&a);
  printf("posizione in memoria di b: 0x%08x\n",(int)&b);
  printf("posizione in memoria di main: 0x%08x\n",(int)&main);
  printf("valore di main: 0x%08x\n",(int)arr[0]);

  return c;
}
