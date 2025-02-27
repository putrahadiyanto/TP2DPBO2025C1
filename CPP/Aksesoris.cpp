#include <bits/stdc++.h>
#include "Petshop.cpp"

using namespace std;

class Aksesoris: public Petshop{

    private:
        string jenis_aksesoris;
        string bahan_aksesoris;
        string warna_aksesoris;
    
    public:
        Aksesoris(){
            jenis_aksesoris = "";
            bahan_aksesoris = "";
            warna_aksesoris = "";
        }

        Aksesoris(int id, string nama_produk, int harga_produk, int stok_produk, string jenis_aksesoris, string bahan_aksesoris, string warna_aksesoris):Petshop(id, nama_produk, harga_produk, stok_produk){
            this->jenis_aksesoris = jenis_aksesoris;
            this->bahan_aksesoris = bahan_aksesoris;
            this->warna_aksesoris = warna_aksesoris;
        }

        string getJenisAksesoris(){ return jenis_aksesoris; }
        string getBahanAksesoris(){ return bahan_aksesoris; }
        string getWarnaAksesoris(){ return warna_aksesoris; }

        void setJenisAksesoris(string jenis_aksesoris){ this->jenis_aksesoris = jenis_aksesoris; }
        void setBahanAksesoris(string bahan_aksesoris){ this->bahan_aksesoris = bahan_aksesoris; }
        void setWarnaAksesoris(string warna_aksesoris){ this->warna_aksesoris = warna_aksesoris; }

        int jenisAksesorisLength(){ return jenis_aksesoris.length(); }
        int bahanAksesorisLength(){ return bahan_aksesoris.length(); }
        int warnaAksesorisLength(){ return warna_aksesoris.length(); }
        
        ~Aksesoris(){
        }
};  