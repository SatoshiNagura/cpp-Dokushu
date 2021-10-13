//練習問題5-3の回答
#include <iostream>
/////////////////////////////////////////////
class S{
  int N;
public:
  S(int n);
  void double_show();
  ~S();
};

S::S(int n): N(n){
  std::cout << "Construct." << std::endl;
}
void S::double_show(){
  std::cout << 2 * N << std::endl;
}
S::~S(){
  std::cout << "Destruct." << std::endl;
}
/////////////////////////////////////////////
int main(){
  S a(10);
  S *b = new S(20);
  a.double_show();
  b->double_show();
  delete b;
  std::cout << "main end." << std::endl;
}
//1.記述済み
//2.メイン関数内で開放されないので，メモリとして確保されたまま終了してしまう。
