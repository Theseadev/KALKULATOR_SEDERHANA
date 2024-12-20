#include <iostream>
using namespace std;

int main (){
	
	int pilih, a, b;
	
	cout<<"================================"<<endl;
	cout<<"===== KALKULATOR SEDERHANA ====="<<endl;
	cout<<"================================"<<endl;
	cout<<"1. PENJUMLAHAN (+)              "<<endl;
	cout<<"2. PENGURANGAN (-)              "<<endl;
	cout<<"3. PERKALIAN (*)                "<<endl;
	cout<<"4. PEMBAGIAN (/)                "<<endl;
	cout<<"5. HASIL BAGI (%)               "<<endl;
	cout<<"================================"<<endl;
	cout<<"SILAHKAN PILIH MAU YANG MANA : ";
	cin>>pilih;
	
	if (pilih==1){
	cout<<"\n";
	cout<<"================================"<<endl;
	cout<<"=====     PENJUMLAHAN      ====="<<endl;
	cout<<"================================"<<endl;
	cout<<"Silahkan Masukkan Nilai Pertama: ";
	cin>>a;
	cout<<"Silahkan Masukkan Nilai Kedua: ";
	cin>>b;
	cout<<"Maka Hasilnya Adalah = " << a + b << endl;
}else

	if (pilih==2){
	cout<<"\n";
	cout<<"================================"<<endl;
	cout<<"=====     PENGURANGAN      ====="<<endl;
	cout<<"================================"<<endl;
	cout<<"Silahkan Masukkan Nilai Pertama: ";
	cin>>a;
	cout<<"Silahkan Masukkan Nilai Kedua: ";
	cin>>b;
	cout<<"Maka Hasilnya Adalah = " << a - b << endl;
}else

	if (pilih==3){
	cout<<"\n";
	cout<<"================================"<<endl;
	cout<<"=====      PERKALIAN       ====="<<endl;
	cout<<"================================"<<endl;
	cout<<"Silahkan Masukkan Nilai Pertama: ";
	cin>>a;
	cout<<"Silahkan Masukkan Nilai Kedua: ";
	cin>>b;
	cout<<"Maka Hasilnya Adalah = " << a * b << endl;
}else

	if (pilih==4){
	cout<<"\n";
	cout<<"================================"<<endl;
	cout<<"=====     PEMBAGIAN        ====="<<endl;
	cout<<"================================"<<endl;
	cout<<"Silahkan Masukkan Nilai Pertama: ";
	cin>>a;
	cout<<"Silahkan Masukkan Nilai Kedua: ";
	cin>>b;
	cout<<"Maka Hasilnya Adalah = " << a / b << endl;
}else

	if (pilih==5){
	cout<<"\n";
	cout<<"================================"<<endl;
	cout<<"=====     HASIL BAGI       ====="<<endl;
	cout<<"================================"<<endl;
	cout<<"Silahkan Masukkan Nilai Pertama: ";
	cin>>a;
	cout<<"Silahkan Masukkan Nilai Kedua: ";
	cin>>b;
	cout<<"Maka Hasilnya Adalah = " << a % b << endl;
}else
	cout<<"================================"<<endl;
	

 return 0;
}
