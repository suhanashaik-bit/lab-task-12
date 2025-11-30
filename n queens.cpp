#include <stdio.h>
#include <stdlib.h>
int solution[20];
int place(int k, int i) {
 for (int j = 1; j <= k - 1; j++) {
 if (solution[j] == i)
 return 0;
 if (abs(solution[j] - i) == abs(j - k))
 return 0;
 }
 return 1;
}
void Nqueens(int k,int n){
 for(int i=1;i<=n;i++){
 if(place(k,i)){
 solution[k] = i;
 if(k == n){
 for(int j=1;j<=n;j++){
 printf("%d",solution[j]);
 }
 printf("\n");
 }else{
 Nqueens(k+1,n);
 }
 }
 }
}
int main(){
 int n;
 printf("N-Queens Problem\n");
 printf("Enter value of N: ");
 scanf("%d", &n);
 printf("\nAll possible solutions:\n");
 Nqueens(1, n);
 return 0;
}
