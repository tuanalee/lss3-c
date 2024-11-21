#include <stdio.h>

int main() {
    float do_dai_canh, chieu_cao, dien_tich;

   
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &do_dai_canh);
    
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &chieu_cao);

   
    dien_tich = (do_dai_canh * chieu_cao) / 2;  
    
    printf("Dien tich cua tam giac la: %.2f\n", dien_tich);

    return 0;
}
