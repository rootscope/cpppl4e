#include <iostream>

using namespace std;

int count_x(char∗ p, char x){
  // count the number of occurrences of x in p[]
  // p is assumed to point to a zero-ter minated array of char (or to nothing)
  if(p == nullptr) return 0;
    int count = 0;
    for(; ∗p!=0; ++p)
      if(∗p == x)
        ++count;
    return count;
}

int main(){
  char p[14] = {0,1,1,0,0,1,0,1,0,1,1,1,0,0};

  char input = 0;
  cin >> input; 
}
