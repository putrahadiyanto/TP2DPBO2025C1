<?php

    require_once 'Petshop.php';
    require_once 'Aksesoris.php';
    require_once 'Baju.php';

    session_start();

    if (!isset($_SESSION['list_baju'])) {
        $_SESSION['list_baju'] = array();

        $_SESSION['list_baju'][] = new Baju(1, "Baju_Anjing", 50000, 10, "images/default.png", "Kaos", "Katun", "Merah", "Anjing", "M", "Adidas");
        $_SESSION['list_baju'][] = new Baju(2, "Baju_Kucing", 40000, 15, "images/default.png", "Kaos", "Katun", "Biru", "Kucing", "S", "Nike");
        $_SESSION['list_baju'][] = new Baju(3, "Baju_Anjing", 60000, 20, "images/default.png", "Kaos", "Katun", "Hijau", "Anjing", "L", "Puma");
        $_SESSION['list_baju'][] = new Baju(4, "Baju_Kucing", 45000, 25, "images/default.png", "Kaos", "Katun", "Kuning", "Kucing", "M", "Adidas");
        $_SESSION['list_baju'][] = new Baju(5, "Baju_Anjing", 55000, 30, "images/default.png", "Kaos", "Katun", "Merah", "Anjing", "S", "Nike");
    }
    $list_baju = $_SESSION['list_baju'];

    if ($_SERVER['REQUEST_METHOD'] === 'POST') {
        $id = count($list_baju) + 1;
        $nama_produk = $_POST['nama_produk'];
        $harga_produk = $_POST['harga_produk'];
        $stok_produk = $_POST['stok_produk'];
        $foto_produk = "images/" . $_FILES['foto_produk']['name'];
        $jenis = $_POST['jenis'];
        $bahan = $_POST['bahan'];
        $warna = $_POST['warna'];
        $spesies = $_POST['spesies'];
        $ukuran = $_POST['ukuran'];
        $merk = $_POST['merk'];

        move_uploaded_file($_FILES['foto_produk']['tmp_name'], $foto_produk);

        $list_baju[] = new Baju($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk, $jenis, $bahan, $warna, $spesies, $ukuran, $merk);
        $_SESSION['list_baju'] = $list_baju;
    }

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet">
    <title>List Data Baju</title>
</head>
<body>
    <nav class="navbar navbar-expand-lg navbar-light bg-light">
        <a class="navbar-brand" href="#">Petshop Uhuy</a>
    </nav>
    <div class="container mt-3">
        <h1>List Data Baju</h1>
        <table class="table table-bordered table-striped">
            <thead>
                <tr>
                    <th>ID</th>
                    <th>Nama Produk</th>
                    <th>Harga Produk</th>
                    <th>Stok Produk</th>
                    <th>Foto Produk</th>
                    <th>Jenis</th>
                    <th>Bahan</th>
                    <th>Warna</th>
                    <th>Spesies</th>
                    <th>Ukuran</th>
                    <th>Merk</th>
                </tr>
            </thead>
            <tbody>
                <?php foreach($list_baju as $baju): ?>
                    <tr>
                        <td><?php echo $baju->getId(); ?></td>
                        <td><?php echo $baju->getNamaProduk(); ?></td>
                        <td><?php echo $baju->getHargaProduk(); ?></td>
                        <td><?php echo $baju->getStokProduk(); ?></td>
                        <td><img src="<?php echo $baju->getFotoProduk(); ?>" width="100" height="100" ></td>
                        <td><?php echo $baju->getJenis(); ?></td>
                        <td><?php echo $baju->getBahan(); ?></td>
                        <td><?php echo $baju->getWarna(); ?></td>
                        <td><?php echo $baju->getSpesies(); ?></td>
                        <td><?php echo $baju->getUkuran(); ?></td>
                        <td><?php echo $baju->getMerk(); ?></td>
                    </tr>
                <?php endforeach; ?>
            </tbody>
        </table>
    </div>
    <div class="container mt-3 mb-3 d-flex justify-content-center">
        <button class="btn btn-primary" onclick="addButton()">Add New Baju</button>
    </div>
    <div class="container mt-3 mb-3" id="addBajuForm" style="display: none;">
        <h2>Add New Baju</h2>
        <form action="" method="post" enctype="multipart/form-data">
            <div class="form-group">
                <label for="nama_produk">Nama Produk:</label>
                <input type="text" class="form-control" id="nama_produk" name="nama_produk" required>
            </div>
            <div class="form-group">
                <label for="harga_produk">Harga Produk:</label>
                <input type="number" class="form-control" id="harga_produk" name="harga_produk" required>
            </div>
            <div class="form-group">
                <label for="stok_produk">Stok Produk:</label>
                <input type="number" class="form-control" id="stok_produk" name="stok_produk" required>
            </div>
            <div class="form-group">
                <label for="foto_produk">Foto Produk:</label>
                <input type="file" class="form-control" id="foto_produk" name="foto_produk" required>
            </div>
            <div class="form-group">
                <label for="jenis">Jenis:</label>
                <input type="text" class="form-control" id="jenis" name="jenis" required>
            </div>
            <div class="form-group">
                <label for="bahan">Bahan:</label>
                <input type="text" class="form-control" id="bahan" name="bahan" required>
            </div>
            <div class="form-group">
                <label for="warna">Warna:</label>
                <input type="text" class="form-control" id="warna" name="warna" required>
            </div>
            <div class="form-group">
                <label for="spesies">Spesies:</label>
                <input type="text" class="form-control" id="spesies" name="spesies" required>
            </div>
            <div class="form-group">
                <label for="ukuran">Ukuran:</label>
                <input type="text" class="form-control" id="ukuran" name="ukuran" required>
            </div>
            <div class="form-group">
                <label for="merk">Merk:</label>
                <input type="text" class="form-control" id="merk" name="merk" required>
            </div>
            <button type="submit" class="btn btn-primary">Add Baju</button>
        </form>
    </div>

</body>

<script>
    function addButton() {
        var form = document.getElementById('addBajuForm');
        if (form.style.display === 'none') {
            form.style.display = 'block';
        } else {
            form.style.display = 'none';
        }
    }
</script>
</html>