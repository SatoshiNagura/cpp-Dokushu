//演習問題3.5の回答
#include <iostream>
//2,3の回答
//////////////////////////////////////////////////////////
class Base{
public:
  virtual std::string name() const;
  virtual std::string most_name() const = 0;
};

std::string Base::name() const{
  return "Base";
}

class Derived : public Base{
public:
  virtual std::string name() const override;
};

std::string Derived::name() const{
  return "Derived";
}

class MoreDerived : public Derived{
public:
  std::string name() const override;
  std::string most_name() const override;
};

std::string MoreDerived::name() const{
  return "MoreDerived";
}

std::string MoreDerived::most_name() const{
  return "MostDerived";
}
///////////////////////////////////////////////////////////
int main(){
  MoreDerived mo;

  std::cout << mo.most_name() << std::endl;
}
/*Derivedのインスタンスを作ると,
クラス内にmost_name()がオーバーライドされていないとエラーが吐かれてしまう。*/
