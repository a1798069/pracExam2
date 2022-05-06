#include <iostream>

int sumOfCube(int n){
  if(n==1){
    return 1;
  } else {
    return n*n*n + sumOfCube(n-1);
  }
}

int main(void){
  int num = 3;
  std::cout<< sumOfCube(num)<< std::endl;
}
