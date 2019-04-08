#include <iostream.h>
#include <conio.h>
main ()
{
int nilai_keaktifan, nilai_tugas, nilai_ujian, nilai_akhir;
char namasiswa[30];

cout<<"Nama Mahasiswa = "; cin>> namasiswa;
cout<<"Masukkan Nilai Keaktifan = "; cin>>nilai_keaktifan;
cout<<"Masukkan Nilai Tugas = "; cin>>nilai_tugas;
cout<<"Masukkan Nilai Ujian = "; cin>>nilai_ujian;
nilai_akhir =nilai_keaktifan*20/100 + nilai_tugas*30/100 + nilai_ujian*50/100;
cout<<"Nilai akhir = " <<nilai_akhir;
getch();
}