#include <bits/stdc++.h>

using namespace std;

class Petshop{

    private:
        int id;
        string nama_produk;
        int harga_produk;
        int stok_produk;
    
    public:
        Petshop(){
            id = 0;
            nama_produk = "";
            harga_produk = 0;
            stok_produk = 0;
        }

        Petshop(int id, string nama_produk, int harga_produk, int stok_produk){
            this->id = id;
            this->nama_produk = nama_produk;
            this->harga_produk = harga_produk;
            this->stok_produk = stok_produk;
        }

        int getId(){ return id; }
        string getNamaProduk(){ return nama_produk; }
        int getHargaProduk(){ return harga_produk; }
        int getStokProduk(){ return stok_produk; }

        void setId(int id){ this->id = id; }
        void setNamaProduk(string nama_produk){ this->nama_produk = nama_produk; }
        void setHargaProduk(int harga_produk){ this->harga_produk = harga_produk; }
        void setStokProduk(int stok_produk){ this->stok_produk = stok_produk; }
        
        int idLength(){ return to_string(id).length(); }
        int namaProdukLength(){ return nama_produk.length(); }
        int hargaProdukLength(){ return to_string(harga_produk).length(); }
        int stokProdukLength(){ return to_string(stok_produk).length(); }

        ~Petshop(){
        }
};