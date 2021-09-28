//練習問題2.2の回答
#include <iostream>

class product{
  int id, price, stock;
public:
  int get_id(), get_price(), get_stock();
  //void set_id(int new_), set_price(int new_), set_stock(int new_);
  void set_(int new_id, int new_price, int new_stock);
};

//id,price,stockを外部(main関数)へ出力するためのメンバー関数
int product::get_id(){
  return id;
}
int product::get_price(){
  return price;
}
int product::get_stock(){
  return stock;
}

/*リスト2.7でのメンバー関数
//id,price,stockを外部(main関数)から入力するためのメンバー関数
void product::set_id(int new_){
  if (new_ < 0){
    std::cout << "error::0以上の値を入力してください\n";
    return;
  }
  id = new_;
}
void product::set_price(int new_){
  if (new_ < 0){
    std::cout << "error::0以上の値を入力してください\n";
    return;
  }
  price = new_;
}
void product::set_stock(int new_){
  if (new_ < 0){
    std::cout << "error::0以上の値を入力してください\n";
    return;
  }
  stock = new_;
}
*/

//1の回答のメンバー関数
void product::set_(int new_id, int new_price, int new_stock){
  if(new_id < 0 || new_price < 0 || new_stock< 0){
    std::cout << "error::0以上の値を入力してください。\n";
  }
  id = new_id;
  price = new_price;
  stock = new_stock;
}

int main(){
  product pen;
  product *ppen = &pen;
//2の回答
  pen.set_(0, 100, 200);

  std::cout << ppen->get_id() << std::endl;
  std::cout << ppen->get_price() << std::endl;
  std::cout << ppen->get_stock() << std::endl;
}
