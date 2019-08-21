#include <iostream>
#include <string>

using namespace std;
int Less (int *A, int size, int i, int n) {
    if(size == 1){
        if(A[i] <= n){
            return A[i];
        }
        return n;
    }else{
        if(A[i] <=  A[i+1] && A[i] <= n){
            return Less(A,size-1, i+1, A[i]);
        }else{
            return Less(A,size-1, i+1, n);
        }
    }
}
int main() {
    int array[5] = {4,-10,4,-1,-210};
    cout<<Less(array, 5,0,0);
    return 0;
}