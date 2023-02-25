#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	cout << "~ UAS ALGORITMA & PEMROGRAMAN  ~" << endl;
	cout << "---------------------------------------------------------------------" << endl;
	cout << "Nama          : Sella Andira Bintang Wulandari" << endl;
  	cout << "NIM           : 5520122013" << endl;
   	cout << "Program Studi : Informatika" << endl;
   	cout << "---------------------------------------------------------------------" << endl;
   	
    // harga perporsi dan perbotol
    int harga_bakso = 13000;
    int harga_mie_ayam = 12000;
    int harga_es_teh = 5000;
    int harga_es_jeruk = 6000;
    int harga_air_putih = 3000;

    // jumlah porsi dan botol yang dipesan
    int jumlah_bakso = 0;
    int jumlah_mie_ayam = 0;
    int jumlah_es_teh = 0;
    int jumlah_es_jeruk = 0;
    int jumlah_air_putih = 0;

    // mengambil input jumlah porsi dan botol yang dipesan
    cout << "Selamat datang di Warung Bakso Djuara" << endl;
    cout << "Menu makanan dan minuman yang tersedia:" << endl;
    cout << "1. Bakso        Rp " << harga_bakso << "/porsi" << endl;
    cout << "2. Mie Ayam     Rp " << harga_mie_ayam << "/porsi" << endl;
    cout << "3. Es Teh       Rp " << harga_es_teh << "/gelas" << endl;
    cout << "4. Es Jeruk     Rp " << harga_es_jeruk << "/gelas" << endl;
    cout << "5. Air Putih    Rp " << harga_air_putih << "/gelas" << endl;
    cout << "Pesan makanan dan minuman yang anda inginkan" << endl;

    cout << "Jumlah porsi Bakso: ";
    cin >> jumlah_bakso;

    cout << "Jumlah porsi Mie Ayam: ";
    cin >> jumlah_mie_ayam;

    cout << "Jumlah Pesanan Es Teh: ";
    cin >> jumlah_es_teh;

    cout << "Jumlah Pesanan Es Jeruk: ";
    cin >> jumlah_es_jeruk;
    
    cout << "Jumlah Pesanan Air Putih: ";
    cin >> jumlah_air_putih;
    

    // menghitung total harga pesanan
    int total_harga = jumlah_bakso * harga_bakso + jumlah_mie_ayam * harga_mie_ayam + jumlah_es_teh * harga_es_teh + jumlah_es_jeruk * harga_es_jeruk + jumlah_air_putih * harga_air_putih;

    // menampilkan total harga pesanan
    cout << "Total Harga Pesanan: Rp " << total_harga << endl;

    // mengambil input jumlah uang yang dibayarkan oleh pelanggan
    double jumlah_uang = 0.0;
    do {
        cout << "Jumlah uang yang dibayarkan: Rp ";
        cin >> jumlah_uang;

        if (jumlah_uang < total_harga) {
            cout << "Jumlah uang yang dibayarkan tidak cukup" << endl;
        }
    } while (jumlah_uang < total_harga);

    // menghitung kembalian
    double kembalian = jumlah_uang - total_harga;

    // menampilkan kembalian dengan presisi 2 angka di belakang koma
    cout << "Kembalian: Rp " << fixed << setprecision(2) << kembalian << endl;

    cout << "Terima kasih telah memesan di Warung Bakso Djuara" << endl;

    return 0;
}

    