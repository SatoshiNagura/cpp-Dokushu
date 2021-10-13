//練習問題5.2の回答
#include <iostream>
#include <string>
#include <vector>
using namespace std;
///////////////////////////////////////////////
class product{
  int id;
  std::string name;
  int price;
public:
  explicit product(int id, std::string name, int price)
  : id(id), name(name), price(price){}
  product(){}
};
///////////////////////////////////////////////
int main(){
  product p[4] = {
    product{1, "smart phone", 60000},
    product{2, "tablet", 35000}
  };
  std::vector <product> pro = {
    product{3, "dictionary", 3000},
    product{4, "magazine", 500}
  };
  cout << pro.size() << endl;
}

//1,2の回答は記述済み
