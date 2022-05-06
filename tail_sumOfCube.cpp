#include <iostream>

int sumHelper(int n, int sum){
  if(n==0){
    return sum;
  } else {
      sum += n*n*n;
    }
    return sumHelper(n-1, sum);
  }

int sumOfCube(int n){
  int total = 0;
  sumHelper(n, total);
}

int main(void){
  int num = 3;
  std::cout<< sumOfCube(num)<< std::endl;
}

//expected output = 36
