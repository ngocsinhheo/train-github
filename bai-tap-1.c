#include <stdio.h>

void tonghaiso(int a,int b) {
    int s;
    s=a+b;

    printf("tong 2 so la %d\n",s );
}
void hieuhaiso(int a , int b){
  int h;
  if (a>b) {
    h=a-b;
  }
  else {
    h=b-a;
  }
  printf("hieu hai so la %d\n",h );
}
void tichhaiso(int a , int b) {
  int t;
  t=a*b;
  printf("tich hai so la %d\n",t );
}
void thuonghaiso(int a, int b){
  int t;
  t=a/b;
  printf("thuong hai so la %d\n",t );
}
int main(int argc, char const *argv[]) {
    tonghaiso(3,4);
    hieuhaiso(4,3);
    tichhaiso(4,3);
    thuonghaiso(4,3);




  return 0;
}
