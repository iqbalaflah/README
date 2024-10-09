# README
# Pendahuluan
Pendahuluan: Tugas asistensi 
pada praktikum dasprog kali ini dengan kode P1 adalah membuat program mesin kasir bahasa C sederhana yang menampilkan harga, jumlah, dan fitur lainnya.
## Input dan Output
Pada awal program ini pengguna diminta menginput nama dua barang dan harga kedua barang yang akan dibeli. Setelah mendapatkan input nama dan harga kedua barang yang akan dibeli , program akan menghitung total harga dan menampilkan struk belanja.

 ## Penjelasan Program
 Pada, format char, yaitu  variabel ini mendeklarasikan array karakter yang digunakan untuk menyimpan nama dua barang, dengan panjang maksimal 50 karakter.
 Format float, Variabel harga_barang1 dan harga_barang2 digunakan untuk menyimpan harga dari dua barang dalam bentuk bilangan desimal (floating-point). Variabel total digunakan untuk menyimpan hasil penjumlahan harga dari dua barang tersebut.
 nama: Nama barang (dibatasi maskimal 50 karakter)
 harga: Harga barang dalam format float.

 Pada bagian input barang, printf("Masukkan nama barang 1&2: ");: Menampilkan pesan ke layar yang meminta pengguna untuk memasukkan nama barang pertama.

scanf("%s", nama_barang1&2);: Menerima input nama barang pertama dari pengguna dan menyimpannya ke variabel nama_barang1&2.

printf("Masukkan harga untuk %s: Rp ", nama_barang1);: Menampilkan pesan ke layar dengan nama barang yang telah diinput, meminta pengguna untuk memasukkan harga barang tersebut.

scanf("%f", &harga_barang1);: Menerima input harga barang pertama dari pengguna dan menyimpannya ke variabel harga_barang1.

Pada bagian menghitung total

total = harga_barang1 + harga_barang2;: Baris ini menjumlahkan harga barang pertama dan harga barang kedua, kemudian menyimpannya dalam variabel total.

Pada bagian struk belanja.

printf("\n--- Struk Belanja ---\n");: Menampilkan header untuk struk belanja.

printf("%-20s Rp%.2f\n", nama_barang1, harga_barang1);: Menampilkan nama dan harga barang pertama dengan format 20 karakter rata kiri (%-20s) dan harga dalam dua angka desimal (%.2f).

printf("%-20s Rp%.2f\n", nama_barang2, harga_barang2);: Menampilkan nama dan harga barang kedua dengan format yang sama.

printf("\nTotal Belanja: Rp%.2f\n", total);: Menampilkan total belanja dengan format dua angka desimal (%.2f).

Bagian ini menampilkan semua informasi nama barang dan harga barang yang dimasukkan pengguna dalam bentuk struk belanja yang rapi.
