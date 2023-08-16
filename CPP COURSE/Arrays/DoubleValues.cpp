#include <iostream>
using namespace std;

int main() {
  int arr[5];
  cout << "Enter the array numbers: " << endl;
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
    cout << " ";
  }

  cout << "Printing doubles: " << endl;
  for (int j = 0; j < 5; j++)
  {
    cout << arr[j] * 2 << " ";
  }
  return 0;
}