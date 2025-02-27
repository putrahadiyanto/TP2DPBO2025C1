<?php

class Aksesoris extends Petshop{

    private $jenis = "";
    private $bahan = "";
    private $warna = "";
    
    public function __construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk, $jenis, $bahan, $warna){
        parent::__construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk);
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }

    public function setJenis($jenis){ $this->jenis = $jenis; }
    public function setBahan($bahan){ $this->bahan = $bahan; }
    public function setWarna($warna){ $this->warna = $warna; }

    public function getJenis(){ return $this->jenis; }
    public function getBahan(){ return $this->bahan; }
    public function getWarna(){ return $this->warna; }

    public function jenisLen(){ return strlen($this->jenis); }
    public function bahanLen(){ return strlen($this->bahan); }
    public function warnaLen(){ return strlen($this->warna); }
}   

?>