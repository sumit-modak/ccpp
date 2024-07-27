void f(int a, int b) {
  f(b, a);  
}

int main() {
  f(0, 1);
}
