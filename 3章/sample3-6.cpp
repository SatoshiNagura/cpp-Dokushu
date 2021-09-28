//練習問題3.6
#include <iostream>
/////////////////////////////////////////////////
class A{
  int value;
public:
  void set_value(int value);
  int get_value() const;
};

void A::set_value(int value){
  this->value = value;
}

int A::get_value() const{
  return value;
}
/////////////////////////////////////////////////
int main(){
  A a;
  a.set_value(42);
  std::cout << a.get_value() << std::endl;
}

/*
1.クラスのprivateで定義されたメンバー変数の名前と，publicで定義されたメンバー関数内で使われる変数の名前が一致しているときに，メンバー変数を指し示す必要があるとき。

2.使わなければ，メンバー関数内の変数のみ変更がされる。

3.const関数内であればconstのついたもの，constがない関数ならばメンバー変数は変更できる。
*/
