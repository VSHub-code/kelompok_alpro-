#include <iostream>

using namespace std;

int main(){
	struct test1 {
		string nama, jkl, alamat, desa, kct, prv, kota, agama, kawin, kerja, negara, berlaku, bulan;
		unsigned long long nik, rt, rw, tgl, tahun;
		char darah;  
	}
	
	test1;
	
	cout<<"masukkan nama : ";
	getline(cin, test1.nama);
	
	cout<<"masukan nik : ";
	cin>>test1.nik;
	
	cout<<"jenis kelamin : ";
	cin>>test1.jkl;
	
	cout<<"alamat :";
	cin>>test1.alamat;
	
	cout<<"kelurahan / desa : ";
	cin>>test1.desa;
	
	cout<<"kecamatan : ";
	cin>>test1.kct;
	
	cout<<"kota / kabupaten : ";
	cin.ignore();
	getline(cin,test1.kota);
	
	cout<<"provinsi : ";
	cin.ignore();
	getline(cin,test1.prv);
	
	cout<<"agama : ";
	cin>>test1.agama;
	
	cout<<"status pernikahan : ";
	cin.ignore();
	getline(cin, test1.kawin);
	
	cout<<"pekerjaan : ";
	cin>>test1.kerja;
	
	cout<<"kewrganegaraan : ";
	cin>>test1.negara;
	
	cout<<"berlaku hingga : ";
	cin.ignore();
	getline(cin,test1.berlaku);
	
	cout<<"rt : ";
	cin>>test1.rt;
	
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
	
	cout<<"		PROVINSI "<<test1.prv<<endl;
	cout<<"		KABUPATEN "<<test1.kota<<endl;
	cout.flush();
	cout<<endl;
	cout<<"NIK : "<<test1.nik;
	
	return 0;
}
