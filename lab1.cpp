#include "lab1.h"

int sumLastNums(int x) { return abs(x) % 10 + abs(x) / 10 % 10; }

bool isPositive(int x) { return x > 0; }

bool isUpperCase(char x) { return x >= 'A' && x <= 'Z'; }

bool isDivisor(int a, int b) {
  return a != 0 && b != 0 && (a % b == 0 || b % a == 0);
}

// int lastNumSum(int a, int b);

double safeDiv(int x, int y) {
  if (y == 0) {
    return 0;
  }
  return static_cast<double>(x) / y;
}

std::string makeDecision(int x, int y) {
  if (x < y) {
    return std::to_string(x) + "<" + std::to_string(y);
  }
  if (x > y) {
    return std::to_string(x) + ">" + std::to_string(y);
  }
  return std::to_string(x) + "==" + std::to_string(y);
}

bool sum3(int x, int y, int z) {
  return x + y == z || x + z == y || y + z == x;
}

std::string age(int x) {
  int last_two = x % 100;
  int last_one = x % 10;

  if (last_two >= 11 && last_two <= 14) {
    return std::to_string(x) + " лет";
  }
  if (last_one == 1) {
    return std::to_string(x) + " год";
  }
  if (last_one >= 2 && last_one <= 4) {
    return std::to_string(x) + " года";
  }
  return std::to_string(x) + " лет";
}

void printDays(int x) {
  switch (x) {
    case 1:
      std::cout << "понедельник" << std::endl;
      [[fallthrough]];
    case 2:
      std::cout << "вторник" << std::endl;
      [[fallthrough]];
    case 3:
      std::cout << "среда" << std::endl;
      [[fallthrough]];
    case 4:
      std::cout << "четверг" << std::endl;
      [[fallthrough]];
    case 5:
      std::cout << "пятница" << std::endl;
      [[fallthrough]];
    case 6:
      std::cout << "суббота" << std::endl;
      [[fallthrough]];
    case 7:
      std::cout << "воскресенье" << std::endl;
      break;
    default:
      std::cout << "это не день недели" << std::endl;
      break;
  }
}

std::string reverseListNums(int x) {
  std::string result;
  int i = x;
  while (i >= 0) {
    if (!result.empty()) {
      result += " ";
    }
    result += std::to_string(i);
    --i;
  }
  return result;
}

int pow(int x, int y) {
  int result = 1;
  for (int i = 0; i < y; ++i) {
    result *= x;
  }
  return result;
}

bool equalNum(int x) {
  int digit = x % 10;
  x /= 10;
  while (x > 0) {
    if (x % 10 != digit) {
      return false;
    }
    x /= 10;
  }
  return true;
}

void leftTriangle(int x) {
  for (int i = 1; i <= x; ++i) {
    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

// void guessGame();

// int findLast(int arr[], int x);

// int* add(int arr[], int x, int pos);

// void reverse(int arr[]);

// int* concat(int arr1[], int arr2[]);

// int* deleteNegative(int arr[]);