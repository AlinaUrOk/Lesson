﻿// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include<math.h>
#include <clocale>


using std::cout;
using std::cin;
using std::endl;




int main()
{

    setlocale(LC_ALL, "Ukrainian_Ukraine.1251");
    int a;
    cin >> a;
    switch (a) {
    case (1):
        cout << "winter";
        break;
    case (2):
        cout << "winter";
        break;
    case (12):
        cout << "winter";
        break;
    case (3):
        cout << "spring";
        break;
    case (4):
        cout << "spring";
        break;
    case (5):
        cout << "spring";
        break;
    case (6):
        cout << "summer";
        break;
    case (7):
        cout << "summer";
        break;
    case (8):
        cout << "summer";
        break;
    case (9):
        cout << "autumn";
        break;
    case (10):
        cout << "autumn";
        break;
    case (11):
        cout << "autumn";
        break;
    }

    return 0;
}