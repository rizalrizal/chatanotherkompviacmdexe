#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	
	string nama, pesan, no;
	cout << "Masukan Nama komputer: ";
	getline(cin,nama);
	system("cls");
	
	while(1==1){
		cout << "Masukan Pesan: ";
		getline(cin,pesan);
		no= "msg.exe /server:"+nama+" * \""+pesan+"\"";
		cout << "berhasil\n";
		system(no.c_str());	
	}
	
	return 0;
}