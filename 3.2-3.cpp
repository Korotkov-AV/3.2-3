// 3.2-3.cpp 
//

#include <iostream>

struct address {
    std::string city;
    std::string street;
    int house_n;
    int apartment_n;
    int index;
};
void addr(address& p) {
std::cout << "Город: " <<"\t\t" << p.city << "\n" << "Улица: " << "\t\t" << p.street << "\n" << "Номер дома: " << "\t" << p.house_n << "\n" << "Номер квартиры: " << p.apartment_n << "\n" << "Индекс: " << "\t" << p.index << "\n\n";

}


int main()
{
    setlocale(LC_ALL, "Russian");
    address p{ "Москва", "Арбат", 12, 8, 12345 };
    address p2{ "Ижевск", "Пушкина", 59, 143, 99999 };

    addr(p);
    addr(p2);

    //std::cout << "\n\nHello World!\n";
}

#if 0
 std::cout << "\n\n";
    std::cout << p.index <<"\n";
    std::cout << p2.index <<"\n";


Город: Москва
Улица : Арбат
Номер дома : 12
Номер квартиры : 8
Индекс : 123456

Город : Ижевск
Улица : Пушкина
Номер дома : 59
Номер квартиры : 143
Индекс : 953769

#endif


