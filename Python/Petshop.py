class Petshop:
    __id = 0
    __nama_produk = ""
    __harga_produk = 0
    __stok_produk = 0

    def __init__(self, id, nama_produk, harga_produk, stok_produk):
        self._id = id
        self._nama_produk = nama_produk
        self._harga_produk = harga_produk
        self._stok_produk = stok_produk
    
    def getId(self):
        return self._id
    
    def getNamaProduk(self):
        return self._nama_produk
    
    def getHargaProduk(self):
        return self._harga_produk
    
    def getStokProduk(self):
        return self._stok_produk
    
    def setId(self, id):
        self._id = id

    def setNamaProduk(self, nama_produk):
        self._nama_produk = nama_produk

    def setHargaProduk(self, harga_produk):
        self._harga_produk = harga_produk

    def setStokProduk(self, stok_produk):
        self._stok_produk = stok_produk

    def idLength(self):
        return len(str(self._id))

    def namaProdukLength(self):
        return len(self._nama_produk)
    
    def hargaProdukLength(self):
        return len(str(self._harga_produk))
    
    def stokProdukLength(self):
        return len(str(self._stok_produk))
