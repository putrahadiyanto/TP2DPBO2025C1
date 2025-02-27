class Baju extends Aksesoris{
    private String spesies;
    private String ukuran;
    private String merk;

    public Baju(){
        super();
        this.spesies = "";
        this.ukuran = "";
        this.merk = "";
    }

    public Baju(int id, String nama_produk, int harga_produk, int stok_produk, String jenis_aksesoris, String bahan_aksesoris, String warna_aksesoris, String spesies, String ukuran, String merk){
        super(id, nama_produk, harga_produk, stok_produk, jenis_aksesoris, bahan_aksesoris, warna_aksesoris);
        this.spesies = spesies;
        this.ukuran = ukuran;
        this.merk = merk;
    }

    public String getSpesies(){ return spesies; }
    public String getUkuran(){ return ukuran; }
    public String getMerk(){ return merk; }

    public void setSpesies(String spesies){ this.spesies = spesies; }
    public void setUkuran(String ukuran){ this.ukuran = ukuran; }
    public void setMerk(String merk){ this.merk = merk; }

    public int spesiesLength(){ return spesies.length(); }
    public int ukuranLength(){ return ukuran.length(); }
    public int merkLength(){ return merk.length(); }

}