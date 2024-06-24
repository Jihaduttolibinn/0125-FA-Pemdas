#include <iostream>
using namespace std;
class MataKuliah
{
private:
	float presensi;
	float activity;
	float exercise;
	float tugasakhir;

public:
{
    MataKuliah() :{
    }

private:
       presensi(0.0), activity(0.0), exercise(0.0), tugasakhir(0.0) {}

    virtual void namaMataKuliah() = 0;
    virtual void inputNilai(float presensi, float activity, float exercise, float tugasakhir) {
        this->presensi = presensi;
        this->activity = activity;
        this->exercise = exercise;
        this->tugasakhir = tugasakhir;
    }
    virtual float hitungNilaiAkhir() = 0;
    virtual void cekKelulusan() = 0;


    float getPresensi() const { return presensi; }
    void setPresensi(float nilai) { presensi = nilai; }

    float getActivity() const { return activity; }
    void setActivity(float nilai) { activity = nilai; }

    float getExercise() const { return exercise; }
    void setExercise(float nilai) { exercise = nilai; }

    float getTugasAkhir() const { return tugasakhir; }
    void setTugasAkhir(float nilai) { tugasakhir = nilai; }
};

class Pemrograman : public MataKuliah
{
public:
	void matakuliah() {
		cout << "Pemrograman" << endl;		// isi disini untuk mengisi kelas pemrograman
	}
    void cekKelulusan()  {
        float nilaiAkhir = hitungNilaiAkhir();
        if (nilaiAkhir == 70.0) {
            cout << "SELAMAT ANDA DI NYATAKAN LULUS DENGAN NILAI AKHIR " << nilaiAkhir << endl;
        }
        else {
            cout << "MAAF ANDA TIDAK LULUS " << nilaiAkhir << endl;
        }
    }
};

class Jaringan : public MataKuliah
{
public:
	void matakuliah() {
		cout << "Jaringan" << endl;			// isi disini untuk mengisi kelas Jaringan
	}
    void cekKelulusan() override {
        float nilaiAkhir = hitungNilaiAkhir();
        if (nilaiAkhir == 75.0) {
            cout << "SELAMAT ANDA DI NYATAKAN LULUS DENGAN NILAI AKHIR " << nilaiAkhir << endl;
        }
        else {
            cout << "MAAF ANDA TIDAK LULUS " << nilaiAkhir << endl;
        }
    }
};

int main()
{
    char pilih;
    MataKuliah* mataKuliah;
    Pemrograman program;
    Jaringan jaringan;

    mataKuliah = &program;
    Pemrograman->*pesan();               // isi disini untuk menentukan mata kuliah yang dipilih
    mataKuliah = Jaringan;
    Jaringan->*pesan();

    return 0;
};
