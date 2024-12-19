#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 25
 
 
int main() {
    time_t t;
    srand((unsigned) time(&t));
    int i;
    int x;
    int c = 0; // counter for rows
    
    int arry[SIZE];
    int even[SIZE];
    int odd[SIZE];
    int k = 0; // even array count
    int j = 0; // odd array count
    int maxCount = 0; // max amt of rows gen
    int Esum = 0;
    int Osum = 0;
    
    printf("Generated numbers: ");
    for(i = 0; i < SIZE; i++) {
    x = rand() % 250 + 1;
    arry[i] = x;
    printf("\n%d" , x);
    
    if(x % 2 == 0) {
         even[k++] = x;
         Esum += x;
        }
    else { 
        odd[j++] = x;
        Osum += x;
        }
    }
    
    printf("\n\n--------------------------------------------\n");
    printf("\tEVEN NUMBERS\t\tODD NUMBERS\n");
    printf("--------------------------------------------\n");
    
    if(k > j) {
        maxCount = k; 
    }
    else {
        maxCount = j; }
    
    for(c = 0; c < maxCount; c++) {
        if(c < k) {
            printf("\t\t%d\t" , even[c]);
        }
        else {
            printf("\t\t---\t"); }
        
        printf("\t\t \t\t");
        
        if(c < j) {
            printf("%d", odd[c]);
        }
        else {
            printf("---"); }
            
        printf("\n");
    }
    printf("--------------------------------------------\n");
    printf("\t\t%d\t\t\t\t%d" , Esum , Osum);
    printf("\n--------------------------------------------\n");
    printf("\n");
    
    return 0;
}
