#include <iostream>
#include <string>

using namespace std;
int SumMatrix (int *A, int *B, int n, int *C) {
    if(n<=-1){
        return 0;
        }
        else{
            C[n] = A[n]+B[n];            
            return  C[n] + SumMatrix(A, B, n-1, C);
        } 
}

int main() {
    int f = 3;
    int c = 3;
    int t = c*f;
    int A[t] = {1,1,1,1,1,1,1,1,1};
    int B[t] = {1,1,1,1,1,1,1,1,3};
    int C[t]; 
    int i = 1;
    SumMatrix(A,B,t-1, C);
    for(int j = 0;j<9; j++){
        cout << C[j];
        if(i==3){
            cout<<endl;
            i=0;
            }
            i+=1;
        }
    return 0;
}