#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n, k, result{0};
    cout << "������� ���-�� ������� - ";
    cin >> n;

    cout << "������� ���-�� ������� - ";
    cin >> k;

    result = n - k;
    if (n == k) {
        cout << "���-�� ������� ����� ���-�� �������";

    }
    else {
        cout << "��� - �� ������ �������� - " << result;
    }
    return 0;
}


