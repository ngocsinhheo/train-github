#include <stdio.h>


void tinhToan(int n ,char pheptinh){

  int i,giaTri=0;

  if (pheptinh='+') {

      for ( i = 0; i < n; i++) {

        giaTri=giaTri + i;

      }
  printf("tong hai so la %d\n",giaTri );
    }

    if (pheptinh='-') {

        for ( i = 0; i < n; i++) {

          giaTri=giaTri - i;

        }
    printf("hieu hai so la %d\n",giaTri );
      }

}

int main(){

    int n,pheptinh;
    scanf("%d\n",&n );
    scanf("%c\n",&pheptinh);

    tinhToan(n,pheptinh);
}
