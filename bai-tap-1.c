#include <stdio.h>
// ĐÂY LÀ TÍNH TỔNG 2 SỐ
void tonghaiso(int a,int b) {
    int s;
    s=a+b;

    printf("tong 2 so la %d\n",s );
}
// ĐÂY LÀ HIỆU 2 SỐ
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
// TÍCH 2 SỐ
void tichhaiso(int a , int b) {
  int t;
  t=a*b;
  printf("tich hai so la %d\n",t );
}
// THƯƠNG 2 SỐ
void thuonghaiso(int a, int b){
  int t;
  t=a/b;
  printf("thuong hai so la %d\n",t );
}
// TỔNG TỪ 1 ĐẾN 100
void tong(int a){
  int s=0 ,i;
  for ( i= 0; i<=a; i++) {
    s=s+i;
  }
  printf("tong tu 1 den %d la %d\n",a,s );
}
// TỔNG TỪ 1 MŨ X ĐẾN 100 MŨ X
void somu(int y) {
  int i,s=0;
  for (size_t i = 0; i <= 100; i++) {
    s=s+pow(i,y);
  }

    printf("tong la %d\n",s );
}
//BÀI VỪA LÀM LÚC NÃY ĐÂY ANH
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
// PHẦN EM CHẠY THỬ
int main() {
    tonghaiso(3,4);


    hieuhaiso(4,3);

    tichhaiso(4,3);

    thuonghaiso(4,3);

    tong(100);

    somu(2);

    tinhToan(5,'+');

  return 0;
}
