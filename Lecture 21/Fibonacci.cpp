#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n == 0 or n == 1) {
    return n;
  }

  int f1 = fibonacci(n - 1);
  int f2 = fibonacci(n - 2);
  return f1 + f2;
}

int main() {
  int n;
  cin >> n;
  cout << fibonacci(n);
  return 0;
}