double exp(double x, int n) {
  if (n < 0) return 1 / exp(x, -n);
  double result = 1;
  while (n > 0) {
    if (n % 2 == 1) result *= x;
    x *= x;
    n /= 2;
  }  // while
  return result;
}
