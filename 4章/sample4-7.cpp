//練習問題4.7の回答
#include <iostream>
using namespace std;
//////////////////////////////////////
void foo(){
  cout << "grobal foo()" << endl;
}
namespace module{
  struct S{
    int a;
  };

  void foo(){
    std::cout << "module::foo()" << std::endl;
  }
}

//////////////////////////////////////
int main(){
  module::foo();
  foo();
  {
    using module::foo;
    foo();
    ::foo();
  }

  module::S dog;
  dog.a = 10;
  std::cout << dog.a << std::endl;
}
/*
1,2.記述済み
3.無名名前空間を作成しておき，ランクを分けておく。
*/
