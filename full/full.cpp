#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int x, y, res;
    cout << "������� ����� � - ";
    cin >> x;
    
    cout << "������� ����� Y - ";
    cin >> y;

    res = (abs(x) - abs(y)) / 1 + (abs(x * y));
    cout << "����� - " << res << endl;





    double v1, v2, a1, a2, s, a, v, t;

    // ���� �������� ������
    cout << "������� ��������� �������� ��� (v1, v2): ";
    cin >> v1 >> v2;
    cout << "������� ��������� ��� (a1, a2): ";
    cin >> a1 >> a2;
    cout << "������� ��������� ���������� ����� ������ (s): ";
    cin >> s;

    // ���������� ����� ���������
    a = a1 + a2;

    // ���������� ����� ��������� ���������
    v = v1 + v2;

    // ���������� ������� �������
    t = (-v + sqrt(v * v - 2 * a * s)) / a;

    cout << "����� ������� ���: " << t << " ������" << endl;

    return 0;
}   

