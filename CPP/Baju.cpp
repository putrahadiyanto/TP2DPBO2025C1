#include <bits/stdc++.h>
#include "Aksesoris.cpp"

using namespace std;

class Baju: public Aksesoris{

    private:
        string spesies;
        string ukuran;
        string merk;

    public:
        Baju(){
            spesies = "";
            ukuran = "";
            merk = "";
        }

        Baju(int id, string nama_produk, int harga_produk, int stok_produk, string jenis_aksesoris, string bahan_aksesoris, string warna_aksesoris, string spesies, string ukuran, string merk):Aksesoris(id, nama_produk, harga_produk, stok_produk, jenis_aksesoris, bahan_aksesoris, warna_aksesoris){
            this->spesies = spesies;
            this->ukuran = ukuran;
            this->merk = merk;
        }

        string getSpesies(){ return spesies; }
        string getUkuran(){ return ukuran; }
        string getMerk(){ return merk; }

        void setSpesies(string spesies){ this->spesies = spesies; }
        void setUkuran(string ukuran){ this->ukuran = ukuran; }
        void setMerk(string merk){ this->merk = merk; }

        int spesiesLength(){ return spesies.length(); }
        int ukuranLength(){ return ukuran.length(); }
        int merkLength(){ return merk.length(); }

        ~Baju(){
        }
};