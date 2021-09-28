#include <iostream>
#include <string.h>

class Book{
  std::string title;
  std::string writer;
  int price;
public:
  Book(std::string title, std::string writer, int price);
  Book(const Book& other);
};

//1の回答
Book::Book(std::string title, std::string writer, int price){}

Book::Book(const Book& other){}

int main(){
  Book novel("bocchan", "natsume", 3000);
  Book copy(novel);
  std::cout << copy.title << std::endl;
}
