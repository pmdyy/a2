#include <iostream>
using namespace std;


long long fib(int n, int a = 0, int b = 1)
{
    if (n == 0){
        return a;
    }
    else if (n == 1){
        return a;
    }
    else if ( n > lastindex){
    return fib(n - 1, lastfib_2, lastfib_1 + lastfib_2b);
    }
    else{
    return fib(n - 1, b, a + b);
    } 
}

int main(){

    int n;
    long long lastfib_1 = fib(n-1);
    int lastindex= n - 1;
    long long lastfib_2 = fib(n-2);


}