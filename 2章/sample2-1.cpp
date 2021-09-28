//練習問題2.1の回答
#include <iostream>

/*2の回答
struct product{
  int id, price, stock;
};

void show_product(product *p){
  std::cout << p->id << std::endl;
  std::cout << p->price << std::endl;
  std::cout << p->stock << std::endl;
}

int main(){
  product pen = {0, 100, 200};
  show_product(&pen);
}
*/

//2,3の回答は略する

//3のプログラム
struct S{
  int x, y;
};

union U{
  S s;
};

int main(){
  U u = {};
  u.s.x = 10;
  u.s.y = 20;
  printf("%d\n", u.s.x);
}
