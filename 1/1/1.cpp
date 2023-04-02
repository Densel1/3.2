// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>


enum Month{january = 1, february, march, april, may, june, july, august, september, october, november, december};

int main()
{
  //  Month month1;
    setlocale(LC_ALL, "Russian");
    int month = 0;
    std::string s_month = "Январь";
    do {
        if (month != 0) std::cout << s_month;
        std::cout << std::endl << "Введите номер месяца: ";
        std::cin >> month;
        switch (month)
        {
        case january:
            s_month = "Январь";
            break;
        case february:
            s_month = "Февраль";
            break;
        case march:
            s_month = "Март";
            break;
        case april:
            s_month = "Апрель";
            break;
        case may:
            s_month = "Май";
            break;
        case june:
            s_month = "Июнь";
            break;
        case july:
            s_month = "Июль";
            break;
        case august:
            s_month = "Август";
            break;
        case september:
            s_month = "Сентябрь";
            break;
        case october:
            s_month = "Октябрь";
            break;
        case november:
            s_month = "Ноябрь";
            break;
        case december:
            s_month = "Декабрь";
            break;
        default:
            s_month = "Такого месяца нет";
        }
    } while (month != 0);
    std::cout << "До свидания";
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
