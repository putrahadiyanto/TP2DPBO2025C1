#include <bits/stdc++.h>
#include "Baju.cpp"

using namespace std;

int main()
{

    list<Baju> listBaju;

    Baju tempBaju = Baju(1, "Baju_Anjing", 50000, 10, "Kaos", "Katun", "Merah", "Anjing", "M", "Adidas");
    listBaju.push_back(tempBaju);

    tempBaju = Baju(2, "Baju_Kucing", 40000, 15, "Kaos", "Katun", "Biru", "Kucing", "S", "Nike");
    listBaju.push_back(tempBaju);

    tempBaju = Baju(3, "Baju_Anjing", 60000, 20, "Kaos", "Katun", "Hijau", "Anjing", "L", "Puma");
    listBaju.push_back(tempBaju);

    tempBaju = Baju(4, "Baju_Kucing", 45000, 25, "Kaos", "Katun", "Kuning", "Kucing", "M", "Adidas");
    listBaju.push_back(tempBaju);

    tempBaju = Baju(5, "Baju_Anjing", 55000, 30, "Kaos", "Katun", "Merah", "Anjing", "S", "Nike");
    listBaju.push_back(tempBaju);

    int choice = 0;
    while(choice != 3)
    {
        cout << "Pilih menu: " << endl;
        cout << "1. Tampilkan data" << endl;
        cout << "2. Tambah data" << endl;
        cout << "3. Keluar" << endl;
        cin >> choice;

        if(choice == 1){
            if(listBaju.empty() == 1)
            {
                cout << "Data kosong" << endl;
            }else{ 
                int length[10] = {2, 4, 5, 4, 5, 5, 5, 7, 6, 4};
                for(list<Baju>::iterator it = listBaju.begin(); it != listBaju.end(); it++)
                {   
                    length[0] = max(length[0], it->idLength());
                    length[1] = max(length[1], it->namaProdukLength());
                    length[2] = max(length[2], it->hargaProdukLength());
                    length[3] = max(length[3], it->stokProdukLength());
                    length[4] = max(length[4], it->jenisAksesorisLength());
                    length[5] = max(length[5], it->bahanAksesorisLength());
                    length[6] = max(length[6], it->warnaAksesorisLength());
                    length[7] = max(length[7], it->spesiesLength());
                    length[8] = max(length[8], it->ukuranLength());
                    length[9] = max(length[9], it->merkLength());
                }
                
                cout << "+" << string(length[0] + 2, '-') << "+"
                    << string(length[1] + 2, '-') << "+"
                    << string(length[2] + 2, '-') << "+"
                    << string(length[3] + 2, '-') << "+"
                    << string(length[4] + 2, '-') << "+"
                    << string(length[5] + 2, '-') << "+"
                    << string(length[6] + 2, '-') << "+"
                    << string(length[7] + 2, '-') << "+"
                    << string(length[8] + 2, '-') << "+"
                    << string(length[9] + 2, '-') << "+" << endl;
                
                cout << "| " << left << setw(length[0]) << "ID" << " | "
                    << left << setw(length[1]) << "Nama" << " | "
                    << left << setw(length[2]) << "Harga" << " | "
                    << left << setw(length[3]) << "Stok" << " | "
                    << left << setw(length[4]) << "Jenis" << " | "
                    << left << setw(length[5]) << "Bahan" << " | "
                    << left << setw(length[6]) << "Warna" << " | "
                    << left << setw(length[7]) << "Spesies" << " | "
                    << left << setw(length[8]) << "Ukuran" << " | "
                    << left << setw(length[9]) << "Merk" << " | " << endl;

                cout << "+" << string(length[0] + 2, '-') << "+"
                    << string(length[1] + 2, '-') << "+"
                    << string(length[2] + 2, '-') << "+"
                    << string(length[3] + 2, '-') << "+"
                    << string(length[4] + 2, '-') << "+"
                    << string(length[5] + 2, '-') << "+"
                    << string(length[6] + 2, '-') << "+"
                    << string(length[7] + 2, '-') << "+"
                    << string(length[8] + 2, '-') << "+"
                    << string(length[9] + 2, '-') << "+" << endl;
                    
                
                for(list<Baju>::iterator it = listBaju.begin(); it != listBaju.end(); it++)
                {
                    cout << "| "<< left << setw(length[0]) << it->getId() << " | "
                         << left << setw(length[1]) << it->getNamaProduk() << " | "
                         << left << setw(length[2]) << it->getHargaProduk() << " | "
                         << left << setw(length[3]) << it->getStokProduk() << " | "
                         << left << setw(length[4]) << it->getJenisAksesoris() << " | "
                         << left << setw(length[5]) << it->getBahanAksesoris() << " | "
                         << left << setw(length[6]) << it->getWarnaAksesoris() << " | "
                         << left << setw(length[7]) << it->getSpesies() << " | "
                         << left << setw(length[8]) << it->getUkuran() << " | "
                         << left << setw(length[9]) << it->getMerk() << " | " << endl;
                }

                cout << "+" << string(length[0] + 2, '-') << "+"
                    << string(length[1] + 2, '-') << "+"
                    << string(length[2] + 2, '-') << "+"
                    << string(length[3] + 2, '-') << "+"
                    << string(length[4] + 2, '-') << "+"
                    << string(length[5] + 2, '-') << "+"
                    << string(length[6] + 2, '-') << "+"
                    << string(length[7] + 2, '-') << "+"
                    << string(length[8] + 2, '-') << "+"
                    << string(length[9] + 2, '-') << "+" << endl;
            }
        }else if(choice == 2){
            string nama_produk, jenis_aksesoris, bahan_aksesoris, warna_aksesoris, spesies, ukuran, merk;
            int harga_produk, stok_produk, id;
            id = listBaju.size() + 1;
            cout << "Masukkan Data Baju" << endl;
            cout << "Masukkan Nama Produk: ";
            cin >> nama_produk;
            cout << "Masukkan Harga Produk: ";
            cin >> harga_produk;
            cout << "Masukkan Stok Produk: ";
            cin >> stok_produk;
            cout << "Masukkan Jenis Aksesoris: ";
            cin >> jenis_aksesoris;
            cout << "Masukkan Bahan Aksesoris: ";
            cin >> bahan_aksesoris;
            cout << "Masukkan Warna Aksesoris: ";
            cin >> warna_aksesoris;
            cout << "Masukkan Spesies: ";
            cin >> spesies;
            cout << "Masukkan Ukuran: ";
            cin >> ukuran;
            cout << "Masukkan Merk: ";
            cin >> merk;
            tempBaju = Baju(id, nama_produk, harga_produk, stok_produk, jenis_aksesoris, bahan_aksesoris, warna_aksesoris, spesies, ukuran, merk);
            listBaju.push_back(tempBaju);
            cout << "Data berhasil dimasukkan" << endl;
        }
    }


    return 0;
}