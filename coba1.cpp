#include<stdio.h>

main()
{
	int Pilih, a, b, jumlah, kali, kurang;
	char jawab;
	float bagi;
	menu:
	printf("Menu Pilihan\n");
	printf("1 penjumlahan\n");
	printf("2 perkalian\n");
	printf("3 pengurangan\n");
	printf("4 pembagian\n");
	printf("5 keluar\n");
	printf("Pilih Menu: ");
	
	scanf("%d", &Pilih);
	switch(Pilih)
	{
		case 1:
			penjumlahan:
			printf("Masukan nilai a: ");
			scanf("%d", &a);
			printf("Masukan nilai b: ");
			scanf("%d", &b);
			jumlah=a+b;
			printf("hasil penjumlahan= %d\n", jumlah);
			printf("ulangi: ");
			scanf("%s", &jawab);
			if(jawab=='Y'|| jawab=='y')
				goto penjumlahan;
			else 
				goto menu;
			break;
		case 2:
			perkalian:
			printf("Masukan nilai a: ");
			scanf("%d", &a);
			printf("Masukan nilai b: ");
			scanf("%d", &b);
			kali=a*b;
			printf("hasil perkalian= %d\n", kali);
			printf("ulangi: ");
			scanf("%s", &jawab);
			if(jawab=='Y'|| jawab=='y')
				goto perkalian;
			else 
				goto menu;
			break;
		case 3:
			pengurangan:
			printf("Masukan nilai a: ");
			scanf("%d", &a);
			printf("Masukan nilai b: ");
			scanf("%d", &b);
			kurang=a-b;
			printf("hasil kurang= %d\n", kurang);
			printf("ulangi: ");
			scanf("%s", &jawab);
			if(jawab=='Y'|| jawab=='y')
				goto pengurangan;
			else 
				goto menu;
		
			break;
		case 4:
			pembagian:
			printf("Masukan nilai a: ");
			scanf("%d", &a);
			printf("Masukan nilai b: ");
			scanf("%d", &b);
			bagi=(float)a/b;
			printf("hasil pembagian= %.1f\n", bagi);
			printf("ulangi: ");
			scanf("%s", &jawab);
			if(jawab=='Y'|| jawab=='y')
				goto pembagian;
			else 
				goto menu;
			break;
		case 5:
			break;
			
		default:
		printf("Pilihan Salah\n");
		goto menu;
		
			
	}
	
}
