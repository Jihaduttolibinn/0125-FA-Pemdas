#include <iostream>
using namespace std;
class MataKuliah
{
	: // isi dengan access modifier yang dibutuhkan
	float presensi;
	// tambahkan dengan variabel lain yang dibutuhkan dibawah ini
public:
	MataKuliah()
	{
		presensi = 0.0;
		// isi dengan inisialisasi variabel yang dibutuhkan dibawah ini
	}
	virtual void namaMataKuliah() { return; }
	// tambahkan virtual fungsi lain yang dibutuhkan dibawah ini
	void setPresensi(float nilai)
	{
		this->presensi = nilai;
	}
	float getPresensi()
	{
		return presensi;
	}
	// tambahkan setter dan getter lain yang dibutuhkan dibawah ini
};
class Pemrograman : public MataKuliah
{
	// isi disini untuk mengisi kelas pemrograman
};
class Jaringan : public MataKuliah
{
	// isi disini untuk mengisi kelas jaringan
};
int main()
{
	char pilih;
	MataKuliah* mataKuliah;
	Pemrograman pemrograman;
	Jaringan jaringan;
	// isi disini untuk menentukan mata kuliah yang dipilih
}