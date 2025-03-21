#include <iostream>
#include <string>

using namespace std;

int main(){
	struct test1 {
		string nama, jkl, alamat, desa, kct, prv, kota, agama, kawin, kerja, negara, berlaku, bulan;
		long long int nik, rt, rw, tgl, tahun;
		char darah;  
	}test1;
	
	cout<<"masukkan nama : ";
	getline(cin, test1.nama);
	
	cout<<"masukan nik : ";
	cin>>test1.nik;
	cin.ignore();
	
	cout<<"jenis kelamin : ";
	getline(cin, test1.jkl);
	
	cout<<"alamat :";
	getline(cin, test1.alamat);
	
	cout<<"kelurahan / desa : ";
	getline(cin, test1.desa);
	
	cout<<"kecamatan : ";
	getline(cin, test1.kct);
	
	cout<<"kota / kabupaten : ";
	getline(cin,test1.kota);
	
	cout<<"provinsi : ";
	getline(cin,test1.prv);
	
	
	cout<<"agama : ";
	cin>>test1.agama;
		cin.ignore();
	
	cout<<"status pernikahan : ";
	getline(cin, test1.kawin);

	

	cout<<"pekerjaan : ";
	cin>>test1.kerja;
	cin.ignore();
	
	cout<<"kewrganegaraan : ";
	cin>>test1.negara;
	cin.ignore();
	
	cout<<"berlaku hingga : ";
	getline(cin,test1.berlaku);

	
	cout<<"rt : ";
	cin>>test1.rt;
	cin.ignore();
	
	
	cout<<"rw : ";
	cin>>test1.rw;
	
	cout<<"tanggal lahir : ";
	cin>>test1.tgl;
	
	
	cout<<"bulan lahir : ";
	cin>>test1.bulan;
	
	cout<<"tahun : ";
	cin>>test1.tahun;
	
	cout<<"golongan darah : ";
	cin>>test1.darah;
	
	cout<<endl<<endl;
	
	 
    cout << "\n\n";
    cout << "\t\tPROVINSI " << test1.prv << endl;
    cout << "\t\tKABUPATEN " << test1.kota << endl;
    cout << "\nNIK		  : " << test1.nik << endl;
    cout << "Nama		  : " << test1.nama << endl;
    cout << "Tempat/Tgl Lahir  : " << test1.tgl << " " << test1.bulan << " " << test1.tahun << endl;
    cout << "Jenis Kelamin	 : " << test1.jkl << "\tGol. Darah : " << test1.darah << endl;
    cout << "Alamat		  : " << test1.alamat << endl;
    cout << "	RT/RW		: " << test1.rt << "/" << test1.rw << endl;
    cout << "	Kel/Desa	: " << test1.desa << endl;
    cout << "	Kecamatan	: " << test1.kct << endl;
    cout << "Agama			: " << test1.agama << endl;
    cout << "Status Perkawinan : " << test1.kawin << endl;
    cout << "Pekerjaan		: " << test1.kerja << endl;
    cout << "Kewarganegaraan : " << test1.negara << endl;
    cout << "Berlaku Hingga 	: " << test1.berlaku << endl;	 
  
  
	
	return 0;
}
