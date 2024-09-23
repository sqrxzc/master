#include <iostream>
using namespace std;
int main() {
    int h1, m1, s1, h2, m2, s2;

    // Ввод первого момента времени
    cout << "Введите первый момент времени (часы, минуты, секунды): ";
    cin >> h1 >> m1 >> s1;

    // Ввод второго момента времени
    cout << "Введите второй момент времени (часы, минуты, секунды): ";
    cin >> h2 >> m2 >> s2;

    // Расчет количества секунд между двумя моментами времени
    int total_seconds1 = h1 * 3600 + m1 * 60 + s1;
    int total_seconds2 = h2 * 3600 + m2 * 60 + s2;
    int elapsed_seconds = total_seconds2 - total_seconds1;

    cout << "Между двумя моментами времени прошло " << elapsed_seconds << " секунд." << std::endl;

    return 0;
}
