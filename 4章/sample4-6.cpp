//練習問題4-6の課題
#include <iostream>
///////////////////////////////////////////////////
class product{
  int price;
public:
  inline product(int price);
  int get_price() const;
  void set_price(int price);
};

product::product(int price):price(price){}

int product::get_price() const{
  return price;
}

void product::set_price(int price){
  this->price = price;
}
///////////////////////////////////////////////////
int main(){
  product p(100);
  std::cout << p.get_price() << std::endl;
}
//1,2ともに記述済み
