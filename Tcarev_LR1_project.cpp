#include <iostream>

int main() {

    double A, B;

    int choice;

    std::cout << "1. Ввести положительное число A.\n";
    std::cout << "2. Ввести положительное число B.\n";
    std::cout << "3. Найти площадь прямоугольника.\n";
    std::cout << "4. Найти периметр прямоугольника.\n";
    std::cout << "Введите номер пункта меню: ";
    std::sin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Введите A: ";
            std::cin >> A;
            while (A <= 0) {
                std::cout << "Это не положительное число! Введите положитльное число A: ";
                std::cin >> A;
            }
            break;

        case 2:
            std::cout << "Введите B: ";
            std::cin >> B;
            while (A <= 0) {
                std::cout << "Это не положительное число! Введите положитльное число B: ";
                std::cin >> B;
            }
            break;

        case 3:
            std::cout << "Введите ширину A: ";
            std::cin >> A;
            while (A <= 0) {
                std::cout << "Ошибка! Введите положитльное число A: ";
                std::cin >> A;
            }
            std::cout << "Введите длину B: ";
            std::cin >> A;
            while (A <= 0) {
                std::cout << "Ошибка! Введите положитльное число B: ";
                std::cin >> B;
            }
            double S = A * B;
            std::cout << "Площадь прямоугольника равна " << S <<std::endl;
            break;
        case 4:
             std::cout << "Введите ширину A: ";
            std::cin >> A;
            while (A <= 0) {
                std::cout << "Ошибка! Введите положитльное число A: ";
                std::cin >> A;
            }
            std::cout << "Введите длину B: ";
            std::cin >> A;
            while (A <= 0) {
                std::cout << "Ошибка! Введите положитльное число B: ";
                std::cin >> B;
            }
            double Per = 2 * (A + B);
            std::cout << "Периметр прямоугольника равна " << Per <<std::endl;
            break;

        default:
            std::cout << "Неверный ввод. Попробуйте снова.\n";
            break;
    }

    return 0;
}