#include <iostream>

using namespace std;

int main() {
  size_t capacity = 5;
  int *arr = new int[capacity];
  memset(arr, 0, capacity);
  for (size_t i = 0; i < capacity; i++) {
    cout << arr[i] << endl;
  }

  delete[] arr;
  return 0;
}
