#include <iostream>
#include <string>
using namespace std; //namespace

class Car { //class
public:  //modifikator
    string Brand;  //property
    string Model;
    int Year;-
    double Price;
};
  int main()
{

Car car;
Car carl;

car.Brand = "Chevralet";
car.Model = "Nexia 3";
car.Year = 2022;
car.Price = 10000;

carl.Brand = "Ravon";
carl.Model = "Gentra";
carl.Year = 2020;
carl.Price = 12000;

cout << car.Brand << car.Model << car.Year << car.Price << endl;
cout << carl.Brand << carl.Model << carl.Year << carl.Price << endl;








    return 0;
}
