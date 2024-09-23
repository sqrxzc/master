#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n, k, result{0};
    cout << "Введите кол-во белочек - ";
    cin >> n;

    cout << "Введите кол-во орешков - ";
    cin >> k;

    result = n - k;
    if (n == k) {
        cout << "Кол-во орешков равно кол-ву белочек";

    }
    else {
        cout << "Кол - во орехов осталось - " << result;
    }
    return 0;
}


