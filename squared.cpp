#include <iostream>

using namespace std;

double square(double n){
  return n*n;
}

void print_square(double n){
  cout << "the square of " << n << " is " << square(n) << "\n";
}

int main(){
  print_square(1.234);
}
