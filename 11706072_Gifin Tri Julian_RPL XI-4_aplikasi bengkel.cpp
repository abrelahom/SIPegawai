hello cpp

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

using namespace std;

int main() {
	char plat[10], servis, ktgr;
	int tarif, kode_servis, banyak, tarif_1=200000, tarif_2=500000, tarif_3=50000, tarif_4=100000, tarif_5=150000, diskon, tarif_awal, bayar, kembalian;

	before:
	cout<<"	================================================================="<<endl;
	cout<<"	                    Aplikasi Bengkel Abrelahom                   "<<endl;
	cout<<"	================================================================="<<endl;
	cout<<"	"<<endl;

	cout<<"	KODE SERVIS  |        SERVIS              |  KATEGORI  |   TARIF "<<endl;
	cout<<"	     1       |  membersihkan mesin        |  sedang    |  200.000"<<endl;
	cout<<"	     2       |  memperbaiki mesin         |  berat     |  500.000"<<endl;
	cout<<"	     3       |  membersihkan suku cadang  |  ringan    |   50.000"<<endl;
	cout<<"	     4       |  memperbaiki suku cadang   |  sedang    |  100.000"<<endl;
	cout<<"	     5       |  mengganti suku cadang     |  sedang    |  150.000"<<endl;
	cout<<"	-----------------------------------------------------------------"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	
	cout<<"	Masukkan plat kendaraan : "<<setw(5); cin>>plat;
	cout<<"	Masukkan kode servis    : "<<setw(5); cin>>kode_servis;
	cout<<"	-----------------------------------------------------------------"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	
	switch(kode_servis){
		case 1:
			goto kode_servis_1;
			break;
		case 2:
			goto kode_servis_2;
			break;
		case 3:
			goto kode_servis_3;
			break;
		case 4:
			goto kode_servis_4;
			break;
		case 5:
			goto kode_servis_5;
			break;
		default:
		goto kode_servis_yang_lain;
	}
	
	
	kode_servis_1:
	cout<<"	Servis   : Membersihkan Mesin"<<endl;
	cout<<"	Kategori : Sedang"<<endl;
	cout<<"	Tarif    : "<<tarif_1<<endl;
	tarif = tarif_1;
	goto next;
	
	kode_servis_2:
	cout<<"	Servis   : Memperbaiki Mesin"<<endl;
	cout<<"	Kategori : Berat"<<endl;
	cout<<"	Tarif    : "<<tarif_2<<endl;
	tarif = tarif_2;
	goto next;
	
	kode_servis_3:
	cout<<"	Servis   : Membersihkan Suku Cadang"<<endl;
	cout<<"	Kategori : Ringan"<<endl;
	cout<<"	Tarif    : "<<tarif_3<<endl;
	tarif = tarif_3;
	goto next;
	
	kode_servis_4:
	cout<<"	Servis   : Memperbaiki Suku Cadang"<<endl;
	cout<<"	Kategori : Sedang"<<endl;
	cout<<"	Tarif    : "<<tarif_4<<endl;
	tarif = tarif_4;
	goto next;
	
	kode_servis_5:
	cout<<"	Servis   : Mengganti Suku Cadang"<<endl;
	cout<<"	Kategori : Sedang"<<endl;
	cout<<"	Tarif    : "<<tarif_5<<endl;
	tarif = tarif_5;
	goto next;
	
	kode_servis_yang_lain:
	system("cls");
	goto before;
	
	
	next:
	cout<<"	-----------------------------------------------------------------"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"	Berapa banyak servis yang anda lakukan? : "<<setw(5);cin>>banyak;
	tarif_awal = tarif*banyak;
	cout<<"	-----------------------------------------------------------------"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"	Harga awal  : "<<tarif_awal<<endl;
	
	
	if (tarif_awal >= 1000000) {
		diskon = tarif_awal * 10/100;
		cout<<"	Diskon     : 10%"<<endl;
	}else if(tarif_awal >= 800000) {
		diskon = tarif_awal * 8/100;
		cout<<"	Diskon      : 8%"<<endl;
	}else if(tarif_awal >= 600000) {
		diskon = tarif_awal * 6/100;
		cout<<"	Diskon      : 6%"<<endl;
	}else if(tarif_awal >= 400000) {
		diskon = tarif_awal * 4/100;
		cout<<"	Diskon      : 4%"<<endl;
	}else if(tarif_awal >= 200000) {
		diskon = tarif_awal * 2/100;
		cout<<"	Diskon      : 2%"<<endl;
	}else if(tarif_awal >= 0) {
		diskon = tarif_awal * 0/100;
		cout<<"	Diskon      : tidak ada diskon"<<endl;
	}
	
	
	cout<<"	Harga akhir : "<<tarif_awal - diskon<<endl;
	cout<<"	-----------------------------------------------------------------"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"	Bayar       : "<<setw(5); cin>>bayar;
	cout<<"	Kembalian   : "<<bayar-(tarif_awal - diskon);
	cout<<""<<endl;
	cout<<""<<endl;
}
