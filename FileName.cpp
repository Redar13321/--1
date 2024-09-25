#include <iostream>
using namespace std;

int main()
{
    // Задание 1: Вычисление скорости
    double distance, time;

    cout << "Введите расстояние до аэропорта (в км): ";
    cin >> distance;
    cout << "Введите время, за которое нужно доехать (в часах): ";
    cin >> time;
    if (time <= 0) {
        cout << "Время должно быть больше нуля!" << endl;
        return 1;
    }
    cout << "Вам нужно ехать со скоростью: " << distance / time << " км/ч" << endl;

    // Задание 2: Рассчет стоимости поездки на скутере
    int startHour, startMinute, startSecond;
    int endHour, endMinute, endSecond;
    cout << "Введите время начала (часы, минуты, секунды): ";
    cin >> startHour >> startMinute >> startSecond;
    cout << "Введите время завершения (часы, минуты, секунды): ";
    cin >> endHour >> endMinute >> endSecond;

    // Расчет времени в пути
    int durationInSeconds = (endHour * 3600 + endMinute * 60 + endSecond) - (startHour * 3600 + startMinute * 60 + startSecond);
    if (durationInSeconds < 0) {
        cout << "Ошибка: время завершения должно быть позже времени начала!" << endl;
        return 1;
    }

    cout << "Стоимость поездки: " << durationInSeconds / 60.0 * 2 << " гривен" << endl; // 2 гривны за минуту


    // Задание 3: Сравнительная таблица стоимости поездки на бензине
    double distance, fuelConsumption, price1, price2, price3;
    cout << "Введите расстояние (в км): ";
    cin >> distance;
    cout << "Введите расход бензина на 100 км: ";
    cin >> fuelConsumption;
    cout << "Введите стоимость первого вида бензина (грн): ";
    cin >> price1;
    cout << "Введите стоимость второго вида бензина (грн): ";
    cin >> price2;
    cout << "Введите стоимость третьего вида бензина (грн): ";
    cin >> price3;

    double totalFuel = (fuelConsumption / 100) * distance;
    cout << "Сравнительная таблица стоимости поездки:\n";
    cout << "------------------------------\n";
    cout << "Вид бензина | Стоимость (грн)\n";
    cout << "------------------------------\n";
    cout << "1           | " << totalFuel * price1 << endl;
    cout << "2           | " << totalFuel * price2 << endl;
    cout << "3           | " << totalFuel * price3 << endl;
    cout << "------------------------------\n";

    return 0;
}