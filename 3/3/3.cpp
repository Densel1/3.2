// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using std::string;
using std::endl;
struct AddrHolder {
    string City;
    string Street;
    unsigned int house;
    unsigned int flat;
    unsigned int index;
};

void printAddrStruct(AddrHolder S)
{
    std::cout << "Город: " << S.City << endl
        << "Улица: " << S.Street << endl
        << "Номер дома: " << S.house << endl
        << "Номер квартиры: " << S.flat << endl
        << "Индекс: " << S.index << endl;
}

void fillAddrHolder(AddrHolder &S, string City, string Street, unsigned int house,
    unsigned int flat, unsigned int index)
{
    S.City = City;
    S.Street = Street;
    S.house = house;
    S.flat = flat;
    S.index = index;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    AddrHolder Addr1;
    fillAddrHolder(Addr1, "Moscow", "Lenina", 33, 12, 1000000);
    AddrHolder Addr2;
    fillAddrHolder(Addr2, "Казань", "Ленина", 33, 12, 1000000);
    printAddrStruct(Addr1);
    std::cout << endl;
    printAddrStruct(Addr2);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
