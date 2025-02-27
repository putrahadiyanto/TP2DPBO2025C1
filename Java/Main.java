import java.util.Scanner;
import java.util.ArrayList;

class Main {
    public static void main(String[] args) {
        int choice = 0;
        Scanner input = new Scanner(System.in);
        ArrayList<Baju> listBaju = new ArrayList<Baju>();

        Baju tempBaju = new Baju(1, "Baju_Anjing", 50000, 10, "Kaos", "Katun", "Merah", "Anjing", "M", "Adidas");
        listBaju.add(tempBaju);

        tempBaju = new Baju(2, "Baju_Kucing", 40000, 15, "Kaos", "Katun", "Biru", "Kucing", "S", "Nike");
        listBaju.add(tempBaju);

        tempBaju = new Baju(3, "Baju_Anjing", 60000, 20, "Kaos", "Katun", "Hijau", "Anjing", "L", "Puma");
        listBaju.add(tempBaju);

        tempBaju = new Baju(4, "Baju_Kucing", 45000, 25, "Kaos", "Katun", "Kuning", "Kucing", "M", "Adidas");
        listBaju.add(tempBaju);

        tempBaju = new Baju(5, "Baju_Anjing", 55000, 30, "Kaos", "Katun", "Merah", "Anjing", "S", "Nike");
        listBaju.add(tempBaju);

        while(choice != 3){
            System.out.println("Pilih Menu: ");
            System.out.println("1. Tampilkan Data");
            System.out.println("2. Tambah Data");
            System.out.println("3. Keluar");
            
            try{
                choice = input.nextInt();
                input.nextLine();
            }catch(Exception e){
                System.out.println("Inputan tidak valid");
                input.nextLine();
                continue;
            }

            if(choice == 1){
                
                if(listBaju.size() == 0){
                    System.out.println("Data masih kosong");
                } else{
                    int[] length = {2, 4, 5, 4, 5, 5, 5, 7, 6, 4};
                    for(Baju baju : listBaju){
                        length[0] = Math.max(length[0], baju.idLength());
                        length[1] = Math.max(length[1], baju.namaProdukLength());
                        length[2] = Math.max(length[2], baju.hargaProdukLength());
                        length[3] = Math.max(length[3], baju.stokProdukLength());
                        length[4] = Math.max(length[4], baju.jenisAksesorisLength());
                        length[5] = Math.max(length[5], baju.bahanAksesorisLength());
                        length[6] = Math.max(length[6], baju.warnaAksesorisLength());
                        length[7] = Math.max(length[7], baju.spesiesLength());
                        length[8] = Math.max(length[8], baju.ukuranLength());
                        length[9] = Math.max(length[9], baju.merkLength());
                    }

                    System.out.println("+" + "-".repeat(length[0] + 2) + "+" + "-".repeat(length[1] + 2) + "+" + "-".repeat(length[2] + 2) + "+" + "-".repeat(length[3] + 2) + "+" + "-".repeat(length[4] + 2) + "+" + "-".repeat(length[5] + 2) + "+" + "-".repeat(length[6] + 2) + "+" + "-".repeat(length[7] + 2) + "+" + "-".repeat(length[8] + 2) + "+" + "-".repeat(length[9] + 2) + "+");
                    System.out.println("| " + "ID" + " ".repeat(length[0] - 2) + " | " + "Nama" + " ".repeat(length[1] - 4) + " | " + "Harga" + " ".repeat(length[2] - 5) + " | " + "Stok" + " ".repeat(length[3] - 4) + " | " + "Jenis" + " ".repeat(length[4] - 5) + " | " + "Bahan" + " ".repeat(length[5] - 5) + " | " + "Warna" + " ".repeat(length[6] - 5) + " | " + "Spesies" + " ".repeat(length[7] - 7) + " | " + "Ukuran" + " ".repeat(length[8] - 6) + " | " + "Merk" + " ".repeat(length[9] - 4) + " |");
                    System.out.println("+" + "-".repeat(length[0] + 2) + "+" + "-".repeat(length[1] + 2) + "+" + "-".repeat(length[2] + 2) + "+" + "-".repeat(length[3] + 2) + "+" + "-".repeat(length[4] + 2) + "+" + "-".repeat(length[5] + 2) + "+" + "-".repeat(length[6] + 2) + "+" + "-".repeat(length[7] + 2) + "+" + "-".repeat(length[8] + 2) + "+" + "-".repeat(length[9] + 2) + "+");
                    for(Baju baju : listBaju)
                    {
                        System.out.println("| " + baju.getId() + " ".repeat(length[0] - baju.idLength()) + " | " + baju.getNamaProduk() + " ".repeat(length[1] - baju.namaProdukLength()) + " | " + baju.getHargaProduk() + " ".repeat(length[2] - baju.hargaProdukLength()) + " | " + baju.getStokProduk() + " ".repeat(length[3] - baju.stokProdukLength()) + " | " + baju.getJenisAksesoris() + " ".repeat(length[4] - baju.jenisAksesorisLength()) + " | " + baju.getBahanAksesoris() + " ".repeat(length[5] - baju.bahanAksesorisLength()) + " | " + baju.getWarnaAksesoris() + " ".repeat(length[6] - baju.warnaAksesorisLength()) + " | " + baju.getSpesies() + " ".repeat(length[7] - baju.spesiesLength()) + " | " + baju.getUkuran() + " ".repeat(length[8] - baju.ukuranLength()) + " | " + baju.getMerk() + " ".repeat(length[9] - baju.merkLength()) + " |");
                    }
                    System.out.println("+" + "-".repeat(length[0] + 2) + "+" + "-".repeat(length[1] + 2) + "+" + "-".repeat(length[2] + 2) + "+" + "-".repeat(length[3] + 2) + "+" + "-".repeat(length[4] + 2) + "+" + "-".repeat(length[5] + 2) + "+" + "-".repeat(length[6] + 2) + "+" + "-".repeat(length[7] + 2) + "+" + "-".repeat(length[8] + 2) + "+" + "-".repeat(length[9] + 2) + "+");
                }
                
            }else if(choice == 2){
                int id = listBaju.size() + 1;
                String nama_produk, jenis_aksesoris, ukuran_aksesoris, warna_aksesoris, spesies, ukuran, merk;
                int harga_produk, stok_produk;
                
                System.out.print("Masukkan Nama Produk: ");
                nama_produk = input.nextLine();

                System.out.print("Masukkan Harga Produk: ");
                harga_produk = input.nextInt();

                System.out.print("Masukkan Stok Produk: ");
                stok_produk = input.nextInt();
                input.nextLine();

                System.out.print("Masukkan Jenis Aksesoris: ");
                jenis_aksesoris = input.nextLine();

                System.out.print("Masukkan Ukuran Aksesoris: ");
                ukuran_aksesoris = input.nextLine();

                System.out.print("Masukkan Warna Aksesoris: ");
                warna_aksesoris = input.nextLine();

                System.out.print("Masukkan Spesies: ");
                spesies = input.nextLine();

                System.out.print("Masukkan Ukuran: ");
                ukuran = input.nextLine();

                System.out.print("Masukkan Merk: ");
                merk = input.nextLine();

                Baju baju = new Baju(id, nama_produk, harga_produk, stok_produk, jenis_aksesoris, ukuran_aksesoris, warna_aksesoris, spesies, ukuran, merk);
                listBaju.add(baju);   
            }
            
        }   
        input.close();  
    }

}
