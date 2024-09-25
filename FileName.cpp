#include <iostream>
using namespace std;

int main()
{
    // ������� 1: ���������� ��������
    double distance, time;

    cout << "������� ���������� �� ��������� (� ��): ";
    cin >> distance;
    cout << "������� �����, �� ������� ����� ������� (� �����): ";
    cin >> time;
    if (time <= 0) {
        cout << "����� ������ ���� ������ ����!" << endl;
        return 1;
    }
    cout << "��� ����� ����� �� ���������: " << distance / time << " ��/�" << endl;

    // ������� 2: ������� ��������� ������� �� �������
    int startHour, startMinute, startSecond;
    int endHour, endMinute, endSecond;
    cout << "������� ����� ������ (����, ������, �������): ";
    cin >> startHour >> startMinute >> startSecond;
    cout << "������� ����� ���������� (����, ������, �������): ";
    cin >> endHour >> endMinute >> endSecond;

    // ������ ������� � ����
    int durationInSeconds = (endHour * 3600 + endMinute * 60 + endSecond) - (startHour * 3600 + startMinute * 60 + startSecond);
    if (durationInSeconds < 0) {
        cout << "������: ����� ���������� ������ ���� ����� ������� ������!" << endl;
        return 1;
    }

    cout << "��������� �������: " << durationInSeconds / 60.0 * 2 << " ������" << endl; // 2 ������ �� ������


    // ������� 3: ������������� ������� ��������� ������� �� �������
    double distance, fuelConsumption, price1, price2, price3;
    cout << "������� ���������� (� ��): ";
    cin >> distance;
    cout << "������� ������ ������� �� 100 ��: ";
    cin >> fuelConsumption;
    cout << "������� ��������� ������� ���� ������� (���): ";
    cin >> price1;
    cout << "������� ��������� ������� ���� ������� (���): ";
    cin >> price2;
    cout << "������� ��������� �������� ���� ������� (���): ";
    cin >> price3;

    double totalFuel = (fuelConsumption / 100) * distance;
    cout << "������������� ������� ��������� �������:\n";
    cout << "------------------------------\n";
    cout << "��� ������� | ��������� (���)\n";
    cout << "------------------------------\n";
    cout << "1           | " << totalFuel * price1 << endl;
    cout << "2           | " << totalFuel * price2 << endl;
    cout << "3           | " << totalFuel * price3 << endl;
    cout << "------------------------------\n";

    return 0;
}