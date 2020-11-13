/* Program : StudiKasus5.c
Deskripsi : Kumpulan program studi kasus
Nama /Author : Paw
Versi : 0.1
Compiler :
*/
#include <stdio.h>
#include <stdbool.h>

int main(){
	
	
	//bagiPermen(100,10); // memanggil fungsi bagi permen
	
	//minibusDms(56); // memanggil fungsi minibus versi dimas
	
	//minibusPaw(52); // memanggil fungsi minibus versi paw
	
	//bonusPegawai('1', 6, 50); // urutan argumen kategori(staf '1', non-staf '2'), lama kerja, usia
	
	//hitungHariDms(2, 2000); // urutan argumen bulan, tahun
	
	hitungHariPaw(2, 2000);
	
	return 0;
}

// program bagi permen
//menerima 2 inputan untuk jumlah permen dan jumlah anak
void bagiPermen(n,k)
{
	if(n>0)
	{
		if(n % k == 0)
		{
			printf("Hore ^_^");
		} else
		{
			printf("Kecewa :(");
		}
	}else
	{
		printf("Masukan tidak valid");
	}
}

// program minibus = versi Dimas
// menerima 1 inputan untuk jumlah penumpang
void minibusDms(n)
{
	int m = 7;
	float miniBus = 0;
	if(n>0)
	{
		if(n % m == 0)
		{
			miniBus = n/m;
			printf("%f", miniBus);
		}else
		{
			miniBus = (n/m - (n % m)/m) - n/m;
			printf("%f", miniBus);
		}
	}else
	{
		printf("Masukan tidak valid");
	}
}

void minibusPaw(n)
{
	int maxBus = 7;
	int minibus = 1;
	bool terhitung = false;

	while(terhitung == false)
	{
		if(n <= maxBus){
			printf("jumlah bus yang digunakan adalah %d", minibus);
			terhitung = true;
		}else{
			maxBus = maxBus +7;
			minibus++;
		}
	}
}

void bonusPegawai(p,k,u)
{
	
	
	if(p == '1')
	{
		if(k>=5)
		{
		
			if(u >= 50)
			{
				printf("1000000");
			}else
			{
				printf("300000");
			}
		}else 
		{
			printf("500000");
		}
	}else if(p == '2')
	{
		if(k>5)
		{
			if(u >= 50)
			{
				printf("400000");
			}else 
			{
				printf("250000");
			}
		}else
		{
			printf("0");
		}
	}else
	{
		printf("masukan tidak valid");
	}
}

void hitungHariDms(b, t)
{
	int hasil;
	
	if(b<=12)
	{
		if(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
		{
			hasil = 31;
		}else if(b == 2 || b == 4 || b == 6 || b == 9 || b == 11)
		{
			hasil = 30;
			if(t % 4 == 0)
			{
				hasil = 29;
			}else
			{
				hasil = 28;
			}
		}	 
	
	} else 
	{
		printf("Masukan tidak valid");
	}
	printf("%d", hasil);
}

void hitungHariPaw(b, t)
{
	int list[12][2] =
	{
		{1,31}, {2,28}, {3,31}, {4,30}, {5,31}, {6,30}, {7,31}, {8,31}, {9,30}, {10,31}, {11,30}, {12,31}
	};
	int i;
	for(i = 1; i <=12; i++)
	{
		if(b == list[i][0])
		{
			
			if(b == list[1][0] && t % 4 == 0)
			{
				printf("%d", list[i][1] + 1);
			}else 
			{
				printf("%d", list[i][1]);
			}
			i = 12;
		}
			
			
	}
}
