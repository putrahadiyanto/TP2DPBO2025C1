from Baju import Baju

list_Baju = list()
list_Baju.append(Baju(1, "Baju_Anjing", 50000, 10, "Kaos", "Katun", "Merah", "Anjing", "M", "Adidas"))
list_Baju.append(Baju(2, "Baju_Kucing", 40000, 15, "Kaos", "Katun", "Biru", "Kucing", "S", "Nike"))
list_Baju.append(Baju(3, "Baju_Anjing", 60000, 20, "Kaos", "Katun", "Hijau", "Anjing", "L", "Puma"))
list_Baju.append(Baju(4, "Baju_Kucing", 45000, 25, "Kaos", "Katun", "Kuning", "Kucing", "M", "Adidas"))
list_Baju.append(Baju(5, "Baju_Anjing", 55000, 30, "Kaos", "Katun", "Merah", "Anjing", "S", "Nike"))


choice = 0

while choice != 3:
    print("Pilih menu : ")
    print("1. Tampilkan Data")
    print("2. Tambahkan Data")
    print("3. Keluar")

    choice = int(input(""))

    if choice == 1:
        length = [2, 4, 5, 4, 5, 5, 5, 7, 6, 4]
        for baju in list_Baju:
            length[0] = max(length[0], baju.idLength())
            length[1] = max(length[1], baju.namaProdukLength())
            length[2] = max(length[2], baju.hargaProdukLength())
            length[3] = max(length[3], baju.stokProdukLength())
            length[4] = max(length[4], baju.jenisAksesorisLength())
            length[5] = max(length[5], baju.bahanAksesorisLength())
            length[6] = max(length[6], baju.warnaAksesorisLength())
            length[7] = max(length[7], baju.spesiesLength())
            length[8] = max(length[8], baju.ukuranLength())
            length[9] = max(length[9], baju.merkLength())

        print("+" + "-" * (length[0] + 2) + "+" + "-" * (length[1] + 2) + "+" + "-" * (length[2] + 2) + "+" + "-" * (length[3] + 2) + "+" + "-" * (length[4] + 2) + "+" + "-" * (length[5] + 2) + "+" + "-" * (length[6] + 2) + "+" + "-" * (length[7] + 2) + "+" + "-" * (length[8] + 2) + "+" + "-" * (length[9] + 2) + "+")
        print("| ID" + " " * (length[0] - 2) + " | Nama" + " " * (length[1] - 4) + " | Harga" + " " * (length[2] - 5) + " | Stok" + " " * (length[3] - 4) + " | Jenis" + " " * (length[4] - 5) + " | Bahan" + " " * (length[5] - 5) + " | Warna" + " " * (length[6] - 5) + " | Spesies" + " " * (length[7] - 7) + " | Ukuran" + " " * (length[8] - 6) + " | Merk" + " " * (length[9] - 4) + " |")
        print("+" + "-" * (length[0] + 2) + "+" + "-" * (length[1] + 2) + "+" + "-" * (length[2] + 2) + "+" + "-" * (length[3] + 2) + "+" + "-" * (length[4] + 2) + "+" + "-" * (length[5] + 2) + "+" + "-" * (length[6] + 2) + "+" + "-" * (length[7] + 2) + "+" + "-" * (length[8] + 2) + "+" + "-" * (length[9] + 2) + "+")
        for baju in list_Baju:
            print("|" , baju.getId() , " " * (length[0] - baju.idLength() - 1) + " | " + baju.getNamaProduk() + " " * (length[1] - baju.namaProdukLength()) + " |" , baju.getHargaProduk() , " " * (length[2] - baju.hargaProdukLength()) + "|" , baju.getStokProduk() , " " * (length[3] - baju.stokProdukLength()) + "| " + baju.getJenisAksesoris() + " " * (length[4] - baju.jenisAksesorisLength()) + " | " + baju.getBahanAksesoris() + " " * (length[5] - baju.bahanAksesorisLength()) + " | " + baju.getWarnaAksesoris() + " " * (length[6] - baju.warnaAksesorisLength()) + " | " + baju.getSpesies() + " " * (length[7] - baju.spesiesLength()) + " | " + baju.getUkuran() + " " * (length[8] - baju.ukuranLength()) + " | " + baju.getMerk() + " " * (length[9] - baju.merkLength()) + " |")
        print("+" + "-" * (length[0] + 2) + "+" + "-" * (length[1] + 2) + "+" + "-" * (length[2] + 2) + "+" + "-" * (length[3] + 2) + "+" + "-" * (length[4] + 2) + "+" + "-" * (length[5] + 2) + "+" + "-" * (length[6] + 2) + "+" + "-" * (length[7] + 2) + "+" + "-" * (length[8] + 2) + "+" + "-" * (length[9] + 2) + "+")
    elif choice == 2:
        id = len(list_Baju) + 1
        nama_produk = input("Masukkan Nama Produk : ")
        harga = int(input("Masukkan Harga : "))
        stok = int(input("Masukkan Stok : "))
        jenis = input("Masukkan Jenis : ")
        bahan = input("Masukkan Bahan : ")
        warna = input("Masukkan Warna : ")
        spesies = input("Masukkan Spesies : ")
        ukuran = input("Masukkan Ukuran : ")
        merk = input("Masukkan Merk : ")
        list_Baju.append(Baju(id, nama_produk, harga, stok, jenis, bahan, warna, spesies, ukuran, merk))
        print("Data berhasil ditambahkan")
