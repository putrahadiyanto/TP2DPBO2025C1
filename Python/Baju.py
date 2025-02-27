from Aksesoris import Aksesoris

class Baju(Aksesoris):
    __spesies = ""
    __ukuran = ""
    __merk = ""

    def __init__(self, id, nama_produk, harga_produk, stok_produk, jenis_aksesoris, bahan_aksesoris, warna_aksesoris, spesies, ukuran, merk):
        super().__init__(id, nama_produk, harga_produk, stok_produk, jenis_aksesoris, bahan_aksesoris, warna_aksesoris)
        self._spesies = spesies
        self._ukuran = ukuran
        self._merk = merk
    
    def getSpesies(self):
        return self._spesies
    
    def getUkuran(self):
        return self._ukuran
    
    def getMerk(self):
        return self._merk
    
    def setSpesies(self, spesies):
        self._spesies = spesies

    def setUkuran(self, ukuran):
        self._ukuran = ukuran

    def setMerk(self, merk):
        self._merk = merk

    def spesiesLength(self):
        return len(self._spesies)
    
    def ukuranLength(self):
        return len(self._ukuran)
    
    def merkLength(self):
        return len(self._merk)