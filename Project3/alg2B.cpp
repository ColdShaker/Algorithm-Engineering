#include <iostream>
#include <math.h>
using namespace std;

bool pfloat(double p){
  int t = p;
  double t2 = p - t;
  if (t2 > 0){
    return true;
  }
  return false;
}

double powerof(double x, int y){
  double result = 1;
  for(int i = 0; i < y; ++i){
    result *= x;
  }
  return result;
}

double find_fib(int n){
  double root2of5 = 2.23607;
  double fib_value = (powerof((1+root2of5), n) - powerof((1-root2of5), n))/((powerof(2, n))*root2of5);
  return fib_value;
}

double find_prev_fib(int p, int n){
  double goldenratio = 1.61803;
  double root2of5 = 2.23607;
  double prev_value = find_fib(p) * pow(((1+root2of5)/2), (n-p));
  return prev_value;
}

double find_next_fib(int n){
  double next_val = find_fib(n) * 1.61803;
  return next_val;
}

int main() {
  double p, n;
  cout << "welcome to fibonacci with golden ratio\n";
  cout << "fib_sequence[1,20]: \n";
  for(int i = 1; i < 20; i++){
    int k = find_fib(i);
    cout << "f(" << i << "): " << k << endl;
  }
  
  do{
    cout << "\nplease enter p: ";
    cin >> p;
    if(pfloat(p) || p < 0){
      cout << "please enter a positive integer p ..";
    }
  }while(p < 0 || pfloat(p));

  int j = find_fib(p);
  cout << p << "th member in sequence: " << j;
 
  do{
    cout << "\n\nplease enter n: ";
    cin >> n;
    if(pfloat(n) || n < 0){
      cout << "please enter a positive integer n..";
    }
  }while(n < 0 || pfloat(n));

  int k = find_prev_fib(p, n);
  cout << n << "th member in sequence (given p above): " << k;
  cout << endl;

  cout << "\ncomparing two methods of finding nth member: \n";
  int l = find_next_fib(n);
  cout << n+1 << "th member in sequence (using golden ratio): " << l << endl;
  
  int m = find_prev_fib(p, n+1);
  cout << n+1 << "th member in sequence (given p above): " << m;

  cout << "\n\nchecking golden ratio for f(3) and f(30) .. \n";
  cout << "f(3): " << find_fib(3) << " | f(4): " << find_fib(4) << endl;
  cout << "f(4)/f(3) = " << (find_fib(4)/find_fib(3));
  cout << endl;
  cout << "f(30): " << find_fib(30) << " | f(31): " << find_fib(31) << endl;
  cout << "f(31)/f(30) = " << (find_fib(31)/find_fib(30));

  cout << "\nthank you for using golden ratio.\n";  
  return 0;
}