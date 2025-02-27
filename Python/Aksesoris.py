from Petshop import Petshop

class Aksesoris(Petshop):
    __jenis_aksesoris = ""
    __bahan_aksesoris = ""
    __warna_aksesoris = ""

    def __init__(self, id, nama_produk, harga_produk, stok_produk, jenis_aksesoris, bahan_aksesoris, warna_aksesoris):
        super().__init__(id, nama_produk, harga_produk, stok_produk)
        self._jenis_aksesoris = jenis_aksesoris
        self._bahan_aksesoris = bahan_aksesoris
        self._warna_aksesoris = warna_aksesoris
    
    def getJenisAksesoris(self):
        return self._jenis_aksesoris
    
    def getBahanAksesoris(self):
        return self._bahan_aksesoris
    
    def getWarnaAksesoris(self):
        return self._warna_aksesoris
    
    def setJenisAksesoris(self, jenis_aksesoris):
        self._jenis_aksesoris = jenis_aksesoris
    
    def setBahanAksesoris(self, bahan_aksesoris):
        self._bahan_aksesoris = bahan_aksesoris

    def setWarnaAksesoris(self, warna_aksesoris):
        self._warna_aksesoris = warna_aksesoris
    
    def jenisAksesorisLength(self):
        return len(self._jenis_aksesoris)

    def bahanAksesorisLength(self):
        return len(self._bahan_aksesoris)

    def warnaAksesorisLength(self):
        return len(self._warna_aksesoris)
