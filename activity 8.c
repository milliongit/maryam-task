#include <stdio.h>
#define NUM_SALESPERSONS 5 

int main() {
    int salaryRanges[9] = {0}; 
    double grossSales;
    int salary;
    int i;
    
    for (i = 0; i < NUM_SALESPERSONS; i++) {
        printf("Enter the gross sales for salesperson %d: $", i + 1);
        scanf("%lf", &grossSales);
        
        salary = 200 + (int)(grossSales * 0.09); 
        
        if (salary >= 200 && salary < 300)
            salaryRanges[0]++;
        else if (salary >= 300 && salary < 400)
            salaryRanges[1]++;
        else if (salary >= 400 && salary < 500)
            salaryRanges[2]++;
        else if (salary >= 500 && salary < 600)
            salaryRanges[3]++;
        else if (salary >= 600 && salary < 700)
            salaryRanges[4]++;
        else if (salary >= 700 && salary < 800)
            salaryRanges[5]++;
        else if (salary >= 800 && salary < 900)
            salaryRanges[6]++;
        else if (salary >= 900 && salary < 1000)
            salaryRanges[7]++;
        else if (salary >= 1000)
            salaryRanges[8]++;
    }
    
    printf("\nSalary Ranges and the number of salespeople in each range:\n");
    printf("$200–299: %d\n", salaryRanges[0]);
    printf("$300–399: %d\n", salaryRanges[1]);
    printf("$400–499: %d\n", salaryRanges[2]);
    printf("$500–599: %d\n", salaryRanges[3]);
    printf("$600–699: %d\n", salaryRanges[4]);
    printf("$700–799: %d\n", salaryRanges[5]);
    printf("$800–899: %d\n", salaryRanges[6]);
    printf("$900–999: %d\n", salaryRanges[7]);
    printf("$1000 and over: %d\n", salaryRanges[8]);
    
    return 0;
}

