#include <stdio.h>

/*
    Đây là review của anh cho phần bài tập mà anh giao cho em

1. Về git: Em làm được push, pull ok nhưng phần commit thì em bị thiếu
Anh muốn em commit với message là commit: gì đó gì đó chứ không phải là "XONG RỒI ANH ƠI" hoặc gì nội dung tựa tựa vậy

Về phần commit message có hẳn một standard cho phần này nên em cố gắng chú ý commit message sao cho chuẩn
Nó phải hợp lí, em hãy đặt mình vào vị trí một người khác nhìn vào repository của em

Repo sẽ có 2 phần để người khác nắm được thông tin là file readme.md và commit message
readme.md thì anh có nói rồi, còn commit message thì người ta sẽ biết được là em đã làm gì ở cái file này
Khi anh vào đọc repo của em thì ngoại trừ commit đầu tiên là anh nắm được sơ sơ còn lại 3 cái commit kia anh đọc không biết em làm gì

Ví dụ: khi lần đầu tải code lên `commit: lần đầu tải file`, làm xong câu 1 rồi up lên `commit: xong câu 1`, chạy lại code nhưng lỗi câu đó `commit: sửa lỗi câu 1`

Khi commit hãy cố gắng khi theo mẫu như anh nói, nội dung ngắn gọn nhưng phải xúc tích, để sao cho người ta nhìn vào phải hiểu, kể cả em sau này đọc lại phải biết
cái đó làm gì, cấu trúc: commit: <nội dung>, nguyên cấu trúc này không quá 255 kí tự

_____________________

2. Về code:

Anh thì không cần chạy code đâu, nhìn qua là biết
Thiếu 2 câu g, g.1 và h 

Đề: 
g. Tính giá trị từ 1 đến 100 tùy ý, có thể thay phép tính x, với x là giá trị truyền vào từ bàn phím
// Ví dụ: 1 -> 100 = value, + => tổng, - => hiệu

g.1. Tính giá trị từ 1 đến n tùy ý, có thể thay phép tính x, với n và x là giá trị truyền vào từ bàn phím
h. Tính giá trị từ 1 mũ n tới 20 mũ n bằng phép +, 1^n + 2^n +... + 20^n, với n là số tùy ý

3 CÂU NÀY LÀ 3 CÂU QUAN TRỌNG
____

Anh sẽ ghi rõ ở từng câu

*/

// Em phải format code, có nghĩa là em phải trình bày một cách nhìn phải "sạch, đẹp", ở đây anh enter 1 line ở các function, cái này anh sẽ nói kĩ hơn ở
// meeting tiếp theo

// ĐÂY LÀ TÍNH TỔNG 2 SỐ
void tonghaiso(int a,int b) { 

// không nên đặt tên như này em nhé, 1. Đặt hoàn toàn tiếng anh, 2. Có rất nhiều loại kiểu đặt tên biến nhưng em nên đặt như này dayLaBien, thisIsVariable
// ở trên là kiểu đặt tên con lạc đà (camel), còn nhiều kiểu như là con rắn, pascal, em có thể lên gg search theo keyword sau: `all case name variable`

    int s;
    s=a+b;

    printf("tong 2 so la %d\n",s );
}
// -- Enter 1 line
// ĐÂY LÀ HIỆU 2 SỐ
void hieuhaiso(int a , int b){ // Ví dụ về format bài này, anh chỉ comment bài này và để raw code, câu dưới anh sẽ format lại, anh sẽ nói rõ hơn ở meeting tiếp theo
  int h; // Đây là tạo biến thì nên cách dòng, tất cả những câu tạo biến thì nên gom chung 1 khu - block code
  if (a>b) { // Câu điều kiện thì nên gom chung lại và cách ở những câu tạo biến 1 dòng
    h=a-b;
  }
  else {
    h=b-a;
  }
  printf("hieu hai so la %d\n",h ); // Câu xử lý với người dùng cách ở những câu còn lại 1 dòng 
}

// TÍCH 2 SỐ
void tichhaiso(int a , int b) { //ĐÃ FORMAT
  int t;
    
  t=a*b;
    
  printf("tich hai so la %d\n",t );
}

// THƯƠNG 2 SỐ
void thuonghaiso(int a, int b){ //CHƯA FORMAT
  int t;
  t=a/b;
  printf("thuong hai so la %d\n",t );
}

// TỔNG TỪ 1 ĐẾN 100
void tong(int a){ //CHƯA FORMAT
  int s=0 ,i;

  for ( i= 0; i<=a; i++) {
    s=s+i;
  }
  printf("tong tu 1 den %d la %d\n",a,s );
}

// TỔNG TỪ 1 MŨ X ĐẾN 100 MŨ X
void somu(int y) { //ĐÃ FORMAT
  int i, s=0;

  for (size_t i = 0; i <= 100; i++) {
    s=s+pow(i,y);
  }

    printf("tong la %d\n",s );
}

// PHẦN EM CHẠY THỬ
int main(int argc, char const *argv[]) { //ĐÃ FORMAT

    tonghaiso(3,4);
    hieuhaiso(4,3);
    tichhaiso(4,3);
    thuonghaiso(4,3);
    tong(100);
    somu(2);
    
    return 0;
}

// Kết: anh sẽ trình bày rõ hơn ở buổi meeting tiếp theo
