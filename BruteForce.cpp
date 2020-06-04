#include <cstdlib>
#include <iostream>
#include <climits>

using namespace std;

//prototypes
int bruteForce(int A[], int N);

int main(){
    int profits [] = {2, -5, 3, 4, 0, -1, 5, 8, -9, 1, -2, 0};
    
    int MaxProfit = bruteForce(profits, 12);
    
    cout << "\n\n\nMaximum profits: " << MaxProfit << "\n\n\n\n";
    return 0;
}

int bruteForce(int A[], int N){
    int MaxSum = INT_MIN;
    
    for(int i = 0; i < N; i++){
        int sum = 0;
        
        for (int j = i; j< N; j++){
            sum+=A[j];
            
            if (sum > MaxSum)
                MaxSum = sum;
        }
    }
    
    return MaxSum;
}
