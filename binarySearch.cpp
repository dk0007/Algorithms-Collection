#include<bits/sdtc++.h>
using namespace std;
int main() {
  int a[100];
  for (int i = 0; i < 100; i++) {
    a[i] = i;
  }
  int numberToSearch = 10;
  int low = 0, high = 99;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (a[mid] == numberToSearch) {
      return true;
    } else if (a[mid] > numberToSearch) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return false;
}
