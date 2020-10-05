// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<math.h>
#include <clocale>


    using std::cout;
    using std::cin;
    using std::endl;




    int main()
    {
        int a, b, c, d, e, min, max;
        cin >> a >> b >> c >> d >> e;
        if (a < b && a < c && a < d && a < e);
        min = a;
        if (b < a && b < c && b < d && b < e);
        min = b;
        if (c < a && c < b && c < d && c < e);
        min = c;
        if (d < a && d < c && d < b && d < e);
        min = d;
        if (e < a && e < c && e < b && e < d);
        min = e;

        if (a > b && a > c && a > d && a > e);
            max = a;
            if (b > a && b > c && b > d && b > e);
                max = b;
                if (c > a && c > b && c > d && c > e);
                    max = c;
                    if (d > a && d > c && d > b && d > e);
                        max = d;
                        if (e > a && e > c && e > b && e > d);
                            max = e;
        cout << min << max;
        return 0;
}

