#include <cstdlib>
#include <iostream>

using namespace std;

//prototypes
int Kadane(int A[], int N);
int max(int a, int b);

int main(){
    int profits [] = {2, -5, 3, 4, 0, -1, 5, 8, -9, 1, -2, 0};
    
    int MaxProfit = Kadane(profits, 12);
    
    cout << "\n\n\nKadane's Algorithm\nMaximum profits: " << MaxProfit << "\n\n\n\n";
    return 0;
}

int Kadane(int A[], int N){
    int MaxSum = A[0];
    int sum = A[0];
    for(int i = 1; i < N; i++){
        sum = max(sum + A[i], A[i]);
        MaxSum = max(sum, MaxSum);
    }
    return MaxSum;
}

int max(int a, int b){
    return (a > b) ? a : b;
}
