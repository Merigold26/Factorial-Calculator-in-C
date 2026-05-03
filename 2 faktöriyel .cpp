// klavyeden girilen deðerin faktöriyelini for döngüsüyle hesaplayan c kodunun yazýnýz// 

#include <stdio.h>


//int main() {
   //int n, i;
    //unsigned long long fact = 1;
    
    //printf("Bir pozitif tam sayi giriniz: ");
    //scanf("%d", &n);
    
    // girdiðimiz sayý negatifse hata mesajý verip programdan çýkýyoruz
   // if (n < 0) {
       // printf("Hata! Negatif sayilarin faktoriyeli hesaplanamaz.");
       // return 0;
    //}
    
    // for döngüsü kullanarak faktöriyeli hesaplýyoruz
    // {
        //fact *= i;
    //}
    
   // printf("%d! = %llu", n, fact);
   // return 0;
//}

main ()

{
	int faktöriyel = 1;
	int sayi;
	
	printf("bir sayi giriniz: ");
	scanf("%d",sayi);
	
	for (int i = 1; i<=sayi; ,i++)
	{
		faktöriyel *= i;
	}
	printf ("%d != %d",sayi, faktöriyel);
}
