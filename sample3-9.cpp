//練習問題3.9の回答
#include <iostream>
///////////////////////////////////////
class S{
  static int count;
public:
  S();
  static void get_count();
  ~S();
};

int S::count = 0;

S::S(){
  count++;
}

void S::get_count(){
  std::cout << count << std::endl;
}

S::~S(){
  std::cout << "destruct!" << std::endl;
}
///////////////////////////////////////
int main(){
  int i;
  for(i = 0; i <3 ;i++){
    S s;
    S::get_count();
  }
}
/*
1.staticのものはクラスからメモリの定義場所が離れている
2.記述済み
*/
