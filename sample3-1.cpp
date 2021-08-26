//練習問題3.1の回答

#include <iostream>

class product{
  int id;
public:
  int get_id();
  void set_id(int new_id);
};

int product::get_id(){
  return id;
}

void product::set_id(int new_id){
  id = new_id;
}

int main(){
  product p;
  p.set_id(42);
  std::cout << p.get_id << std::endl;

  const product cp{};
}
