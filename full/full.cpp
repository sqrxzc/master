#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int x, y, res;
    cout << "Введите число Х - ";
    cin >> x;
    
    cout << "Введите число Y - ";
    cin >> y;

    res = (abs(x) - abs(y)) / 1 + (abs(x * y));
    cout << "Ответ - " << res << endl;





    double v1, v2, a1, a2, s, a, v, t;

    // Ввод исходных данных
    cout << "Введите начальные скорости тел (v1, v2): ";
    cin >> v1 >> v2;
    cout << "Введите ускорения тел (a1, a2): ";
    cin >> a1 >> a2;
    cout << "Введите начальное расстояние между телами (s): ";
    cin >> s;

    // Вычисление суммы ускорений
    a = a1 + a2;

    // Вычисление суммы начальных скоростей
    v = v1 + v2;

    // Вычисление времени встречи
    t = (-v + sqrt(v * v - 2 * a * s)) / a;

    cout << "Время встречи тел: " << t << " секунд" << endl;

    return 0;
}   

