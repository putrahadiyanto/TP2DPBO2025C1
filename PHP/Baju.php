<?php

    class Baju extends Aksesoris{

        private $spesies = "";
        private $ukuran = "";
        private $merk = "";
        
        public function __construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk, $jenis, $bahan, $warna, $spesies, $ukuran, $merk){
            parent::__construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk, $jenis, $bahan, $warna);
            $this->spesies = $spesies;
            $this->ukuran = $ukuran;
            $this->merk = $merk;
        }

        public function setSpesies($spesies){ $this->spesies = $spesies; }
        public function setUkuran($ukuran){ $this->ukuran = $ukuran; }
        public function setMerk($merk){ $this->merk = $merk; }

        public function getSpesies(){ return $this->spesies; }
        public function getUkuran(){ return $this->ukuran; }
        public function getMerk(){ return $this->merk; }

        public function spesiesLen(){ return strlen($this->spesies); }
        public function ukuranLen(){ return strlen($this->ukuran); }
        public function merkLen(){ return strlen($this->merk); }
    }

?>