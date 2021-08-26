//練習問題3.1の回答

#include <iostream>

//*1,2の回答
class A{
  int v;
public:
  void set(int value);
  int get();
  int get() const;//constな呼び出しをされるため，constメンバー関数を追加
};

void A::set(int value){
  v = value;
}

int A::get() const{
  return v;
}

int main(){
  A a;
  a.set(42);

  const A& ca = a;//constなclass caをaと同一アドレスとして定義
  ca.get();//constメンバー関数をオーバーロード
}

//3の回答
//メンバー関数によって変更できるメンバー変数を定義することが出来る。
