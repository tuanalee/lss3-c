#include <stdio.h> 
 
int main() { 
    float celsius, fahrenheit; 
 
  
    printf("moi ban nhap nhiet do C : "); 
    scanf("%f", &celsius); 
 
    
    fahrenheit = (celsius * 9 / 5) + 32; 
 
    
    printf("%.2f do C bang  %.2f do F\n", celsius, fahrenheit); 
 
    return 0; 
} 
