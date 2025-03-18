#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct ktp {
	string nik;
	string nama;
	string tempat_tanggal_lahir;
	string jenis_kelamin;
	string gol_darah;
	string alamat;
	string rt_rw;
	string kel_desa;
	string kecamataan;
	string agama;
	string status_perkawinan;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku_hingga;
};

void inputktp(ktp &ktp){
	cout<<"masukkan NIK:";
	getline(cin, ktp.nik);
	cout<<"masukkan NAMA:";
	getline(cin, ktp.nama);
	cout<<"masukkan tempat tanggal lahir:";
	getline(cin, ktp.tempat_tanggal_lahir);
	cout<<"masukkan jenis kelamin";
	getline(cin, ktp.jenis_kelamin);
	cout<<"masukkan GOL darah:";
	getline(cin, ktp.gol_darah);
	cout<<"masukkan alamat:";
	getline(cin, ktp.alamat);
	cout<<"masukkan rt rw:";
	getline(cin, ktp.rt_rw);
	cout<<"masukkan kel desa:";
	getline(cin, ktp.kel_desa);
	cout<<"masukkan kecamanatan:";
	getline(cin, ktp.kecamataan);
	cout<<"masukkan agama:";
	getline(cin, ktp.agama);
	cout<<"masukkan status:";
	getline(cin, ktp.status_perkawinan);
	cout<<"masukkan pekerjaan:";
	getline(cin, ktp.pekerjaan);
	cout<<"masukkan kewarganegaraan:";
	getline(cin, ktp.kewarganegaraan);
	cout<<"masukkan berlaku hingga:";
	getline(cin, ktp.berlaku_hingga);
	
}
void displayktp(const ktp &ktp){
	cout<<"\n=========== SIMULASI KTP ==========\n";
	cout<<left<<setw(20)<<"NIK"<<": "<<ktp.nik<<endl;
	cout<<left<<setw(20)<<"NAMA"<<": "<<ktp.nama<<endl;
	cout<<left<<setw(20)<<"tmpt tanggal"<<": "<<ktp.tempat_tanggal_lahir<<endl;
	cout<<left<<setw(20)<<"kelamin"<<": "<<ktp.jenis_kelamin<<endl;
	cout<<left<<setw(20)<<"darah"<<": "<<ktp.gol_darah<<endl;
	cout<<left<<setw(20)<<"alamat"<<": "<<ktp.alamat<<endl;
	cout<<left<<setw(20)<<"rt/rw"<<": "<<ktp.rt_rw<<endl;
	cout<<left<<setw(20)<<"kel/desa"<<": "<<ktp.kel_desa<<endl;
	cout<<left<<setw(20)<<"kecamatan"<<": "<<ktp.kecamataan<<endl;
	cout<<left<<setw(20)<<"agama"<<": "<<ktp.agama<<endl;
	cout<<left<<setw(20)<<"status perkawinan"<<": "<<ktp.status_perkawinan<<endl;
	cout<<left<<setw(20)<<"pekerjaan"<<": "<<ktp.pekerjaan<<endl;
	cout<<left<<setw(20)<<"kewarganegaraan"<<": "<<ktp.kewarganegaraan<<endl;
	cout<<left<<setw(20)<<"berlaku hingga"<<": "<<ktp.berlaku_hingga<<endl;
	cout<<"=======================================================\n";
}

int main(){
	ktp ktp;
	cout<<"input data ktp\n";
	inputktp(ktp);
	displayktp(ktp);
	
	return 0;
}
