#include <iostream>
using namespace std;
int main() {
    int h1, m1, s1, h2, m2, s2;

    // ���� ������� ������� �������
    cout << "������� ������ ������ ������� (����, ������, �������): ";
    cin >> h1 >> m1 >> s1;

    // ���� ������� ������� �������
    cout << "������� ������ ������ ������� (����, ������, �������): ";
    cin >> h2 >> m2 >> s2;

    // ������ ���������� ������ ����� ����� ��������� �������
    int total_seconds1 = h1 * 3600 + m1 * 60 + s1;
    int total_seconds2 = h2 * 3600 + m2 * 60 + s2;
    int elapsed_seconds = total_seconds2 - total_seconds1;

    cout << "����� ����� ��������� ������� ������ " << elapsed_seconds << " ������." << std::endl;

    return 0;
}
