class Aksesoris extends Petshop {

    private String jenis_aksesoris;
    private String bahan_aksesoris;
    private String warna_aksesoris;

	public Aksesoris() {
		super();
        this.jenis_aksesoris = "";
        this.bahan_aksesoris = "";
        this.warna_aksesoris = "";
	}

    public Aksesoris(int id, String nama_produk, int harga_produk, int stok_produk, String jenis_aksesoris, String bahan_aksesoris, String warna_aksesoris) {
        super(id, nama_produk, harga_produk, stok_produk);
        this.jenis_aksesoris = jenis_aksesoris;
        this.bahan_aksesoris = bahan_aksesoris;
        this.warna_aksesoris = warna_aksesoris;
    }

    public String getJenisAksesoris() { return jenis_aksesoris; }
    public String getBahanAksesoris() { return bahan_aksesoris; }
    public String getWarnaAksesoris() { return warna_aksesoris; }

    public void setJenisAksesoris(String jenis_aksesoris) { this.jenis_aksesoris = jenis_aksesoris; }
    public void setBahanAksesoris(String ukuran_aksesoris) { this.bahan_aksesoris = ukuran_aksesoris; }
    public void setWarnaAksesoris(String warna_aksesoris) { this.warna_aksesoris = warna_aksesoris; }

    public int jenisAksesorisLength() { return jenis_aksesoris.length(); }
    public int bahanAksesorisLength() { return bahan_aksesoris.length(); }
    public int warnaAksesorisLength() { return warna_aksesoris.length(); }
}
