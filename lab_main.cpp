#include "lab1.h"

int main() {
  setlocale(LC_ALL, "Russian");
  
  std::cout << "Выбери номер задачи:" << std::endl;
  std::cout << "2 - sumLastNums (int x)" << std::endl;
  std::cout << "4 - isPositive(int x)" << std::endl;
  std::cout << "6 - isUpperCase(char x)" << std::endl;
  std::cout << "8 - isDivisor(int a, int b)" << std::endl;
  // std::cout << '10 - lastNumSum(int a, int b)' << std::endl;
  std::cout << "12 - safeDiv(int x, int y)" << std::endl;
  std::cout << "14 - makeDecision(int x, int y)" << std::endl;
  std::cout << "16 - sum3(int x, int y, int z)" << std::endl;
  std::cout << "18 - age(int x)" << std::endl;
  std::cout << "20 - printDays(int x)" << std::endl;
  std::cout << "22 - reverseListNums(int x)" << std::endl;
  std::cout << "24 - pow(int x, int y)" << std::endl;
  std::cout << "26 - equalNum(int x)" << std::endl;
  std::cout << "28 - leftTriangle(int x)" << std::endl;
  // std::cout << '30 - guessGame()' << std::endl;
  // std::cout << '32 - findLast(int arr[], int x)' << std::endl;
  // std::cout << '34 - add(int arr[], int x, int pos)' << std::endl;
  // std::cout << '36 - reverse(int arr[])' << std::endl;
  // std::cout << '38 - concat(int arr1[], int arr2[])' << std::endl;
  // std::cout << '40 - deleteNegative(int arr[])' << std::endl;
  std::cout << "Твой выбор: ";

  int number = 0;
  std::cin >> number;
  std::cout << std::boolalpha;

  switch (number) {
    case 2: {
      int x = 0;
      std::cout << "Введите x: ";
      std::cin >> x;
      std::cout << "Результат: " << sumLastNums(x) << std::endl;
      break;
    }

    case 4: {
      int x = 0;
      std::cout << "Введите x: ";
      std::cin >> x;
      std::cout << "Результат: " << isPositive(x) << std::endl;
      break;
    }

    case 6: {
      char x = 0;
      std::cout << "Введите символ: ";
      std::cin >> x;
      std::cout << "Результат: " << isUpperCase(x) << std::endl;
      break;
    }

    case 8: {
      int a = 0;
      int b = 0;
      std::cout << "Введите a и b: ";
      std::cin >> a >> b;
      std::cout << "Результат: " << isDivisor(a, b) << std::endl;
      break;
    }

    case 12: {
      int x = 0;
      int y = 0;
      std::cout << "Введите x и y: ";
      std::cin >> x >> y;
      std::cout << "Результат: " << safeDiv(x, y) << std::endl;
      break;
    }

    case 14: {
      int x = 0;
      int y = 0;
      std::cout << "Введите x и y: ";
      std::cin >> x >> y;
      std::cout << "Результат: " << makeDecision(x, y) << std::endl;
      break;
    }

    case 16: {
      int x = 0;
      int y = 0;
      int z = 0;
      std::cout << "Введите x, y и z: ";
      std::cin >> x >> y >> z;
      std::cout << "Результат: " << sum3(x, y, z) << std::endl;
      break;
    }

    case 18: {
      int x = 0;
      std::cout << "Введите возраст: ";
      std::cin >> x;
      std::cout << "Результат: " << age(x) << std::endl;
      break;
    }

    case 20: {
      int x = 0;
      std::cout << "Введите номер дня: ";
      std::cin >> x;
      std::cout << "Результат: " << std::endl;
      printDays(x);
      break;
    }

    case 22: {
      int x = 0;
      std::cout << "Введите x: ";
      std::cin >> x;
      std::cout << "Результат: " << reverseListNums(x) << std::endl;
      break;
    }

    case 24: {
      int x = 0;
      int y = 0;
      std::cout << "Введите x и y: ";
      std::cin >> x >> y;
      std::cout << "Результат: " << pow(x, y) << std::endl;
      break;
    }

    case 26: {
      int x = 0;
      std::cout << "Введите x: ";
      std::cin >> x;
      std::cout << "Результат: " << equalNum(x) << std::endl;
      break;
    }

    case 28: {
      int x = 0;
      std::cout << "Введите высоту: ";
      std::cin >> x;
      std::cout << "Результат: " << std::endl;
      leftTriangle(x);
      break;
    }

    default:
      std::cout << "Неверный номер задачи" << std::endl;
      break;
  }

  return 0;
}
