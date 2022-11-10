// Tail Recursive Fibonacci
// implementation
#include <iostream>
using namespace std;
#include <chrono>
using namespace std::chrono; 
// A tail recursive function to
// calculate n th fibonacci number
long long fib(int n, int a = 0, int b = 1)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return fib(n - 1, b, a + b);
}
 
// Driver Code
int main()
{
    int last_fib1;
    int last_fib2;
    long n;
    int fib1;
    int fib2;
    int fib3;
    //cout << "enter: ";
    
  while (true) {
    cin >> n;
    if (n == -1) {
      break;
    }
          
    cout << n << endl;
    cout << fib(n) << endl;
   
}

// Section 2
   // use the next line as is to capture the start time of a 2 second period
   time_point<steady_clock> start = steady_clock::now();

   const int runLimit{2}; // generate Fibonacci numbers for 2 more seconds
     n = 0;
      fib1 = 0;
  fib2 = 1;
  fib3 = 0;

   while((steady_clock::now() - start)/1s < runLimit) { // true if 2 seconds since start time have not yet elapsed
      ; // *** put code here to generate more Fibonacci numbers. ***
      fib(n);
      n++;
//      fibonacci<fibonacciType2>(++index);
   }

   // *** output the highest Fibonacci index calculated ***
   cout << n << endl;


 return 0;
    }
  

