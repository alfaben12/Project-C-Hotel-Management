#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <errno.h>
#include <stdnoreturn.h>
#include <ctime>

using namespace std;

// FUNGSI
void hitung(int &hasil,int x, int y){
    hasil=x*y;
}

int main()
{
    char namakeluarga[30];

    system("color B4");
    string nama;
    char lagi;

    // POINTER
    time_t tanggal=time(0);
    char * dt =ctime (&tanggal);


    int harga,rharga,fharga,lharga,lama_menginap,kasir,kamar,fasilitas,ranjang,letak,biaya,mulai,tanya,totalbayar;
    mulai:
    int x,y;
    cout<<"                             ""______________________________________________________________"<<endl;
    cout<<"                             ""|                  Aplikasi Hotel Management                  |"<<endl;
    cout<<"                             ""|                          By :                               |"<<endl;
    cout<<"                             ""|                   Thariq Alfa Benriska                      |"<<endl;
    cout<<"                             ""|                      Kelas XI RPL-A                         |"<<endl;
    cout<<"                             ""|                      No Absen : 29                          |"<<endl;
    cout<<"                             ""|_____________________________________________________________|"<<endl;
     cout<<"                                      Hallo Selamat datang di Hotel Alfaben's          "<<endl;


    // STRING
   cout<<"Masukkan nama keluarga : ";
   cin>>strupr(namakeluarga);


    // ARRAY
    cout<<"Masukkan jumlah keluarga = ";
    cin>>x;
    string matriks[x];
    for (int c=0;c<x;c++)
    {

            cout<<"Masukkan nama-nama keluarga = ";
            cin>>matriks[c];
            getline(cin, nama);

    }
    for (int a=0;a<x;a++)
    {


            cout<<matriks[a]<<"\t";


        cout<<"\n";
    }


    cout<<"_______________________________________________________________"<<endl;
    cout<<"|             Tersedia Beberapa Kamar :                       |"<<endl;
    cout<<"|                 [1] Bangkai                                 |"<<endl;
    cout<<"|                 [2] Melati                                  |"<<endl;
    cout<<"|                 [3] Mawar                                   |"<<endl;
    cout<<"|                 [4] Anggrek                                 |"<<endl;
    cout<<"|                 [5] Sakura                                  |"<<endl;
    cout<<"|_____________________________________________________________|"<<endl;
    cout<<"Silahkan memilih no urut jenis kamar : ";
    cin>>kamar;

// OPERATOR
    cout<<"Pembayaran Atas Nama "<<nama<<" "<<endl;
        if (kamar==1)
        {
            cout<<"Jenis Kamar : Bangkai"<<endl;
            harga=300000;
        }
        else if (kamar==2)
        {
            cout<<"Jenis Kamar : Melati"<<endl;
            harga=400000;
        }
        else if (kamar==3)
        {
            cout<<"Jenis Kamar : Mawar"<<endl;
            harga=500000;
        }
        else if (kamar==4)
        {
            cout<<"Jenis Kamar : Anggrek"<<endl;
            harga=600000;
        }
        else if (kamar==5)
        {
            cout<<"Jenis Kamar : Sakura"<<endl;
            harga=800000;
        }
        else
        {
            cout<<"Kamar yang anda pilih di tidak ada !"<<endl;
            cin >> tanya;
        }

    system("CLS");
    cout<<"______________________________________________________________"<<endl;
    cout<<"|             Tersedia Beberapa Ranjang Kamar :               |"<<endl;
    cout<<"|                 [1] Ranjang                                 |"<<endl;
    cout<<"|                 [2] Ranjang                                 |"<<endl;
    cout<<"|                 [3] Ranjang                                 |"<<endl;
    cout<<"|                 [4] Ranjang                                 |"<<endl;
    cout<<"|                 [5] Ranjang                                 |"<<endl;
    cout<<"|_____________________________________________________________|"<<endl;
    cout<<"Silahkan memilih ranjang kamar : ";
    cin>>ranjang;


    if (ranjang==1)
        {
            cout<<"1"<<endl;
            rharga=50000;
        }
        else if (ranjang==2)
        {
            cout<<"2"<<endl;
            rharga=100000;
        }
        else if (ranjang==3)
        {
            cout<<"3"<<endl;
            rharga=150000;
        }
        else if (ranjang==4)
        {
            cout<<"4"<<endl;
            rharga=200000;
        }
        else if (ranjang==5)
        {
            cout<<"5"<<endl;
            rharga=250000;
        }
        else
        {
            cout<<"Kamar tidak cukup !"<<endl;
            cin >> tanya;
        }

    system("CLS");
    cout<<"_______________________________________________________________"<<endl;
    cout<<"|             Tersedia Beberapa Fasilitas :                   |"<<endl;
    cout<<"|                 [1] Ruang Tamu                              |"<<endl;
    cout<<"|                 [2] Ruang Olahraga                          |"<<endl;
    cout<<"|                 [3] Ruang Rapat                             |"<<endl;
    cout<<"|                 [4] Hiburan                                 |"<<endl;
    cout<<"|                 [5] Karaoke                                 |"<<endl;
    cout<<"|_____________________________________________________________|"<<endl;
    cout<<"Silahkan memilih Fasilitas kamar : ";
    cin>>fasilitas;

        if (fasilitas==1)
        {
            cout<<"Ruang Tamu"<<endl;
            fharga=200000;
        }
        else if (fasilitas==2)
        {
            cout<<"Ruang Olahraga"<<endl;
            fharga=150000;
        }
        else if (fasilitas==3)
        {
            cout<<"Ruang rapat"<<endl;
            fharga=100000;
        }
        else if (fasilitas==4)
        {
            cout<<"Hiburan"<<endl;
            fharga=50000;
        }
        else if (fasilitas==5)
        {
            cout<<"Karaoke"<<endl;
            fharga=25000;
        }
        else
        {
            cout<<"Fasilitas tidak ada !"<<endl;
            cin >> tanya;
        }

        // PERULANGAN
        system("CLS");
        {
            int letak=1;
            while (letak<=30)
            {
                cout<<" | Lantai | "<<letak<<endl;
                letak++;
            }
        }

    cout<<"Silahkan memilih Letak kamar : ";
    cin>>letak;

    // PERCABANGAN
        if (letak==1)
        {
            cout<<"1"<<endl;
            lharga=100000;
        }
        else if (letak==2)
        {
            cout<<"2"<<endl;
            lharga=125000;
        }
        else if (letak==3)
        {
            cout<<"3"<<endl;
            lharga=150000;
        }
        else if (letak==4)
        {
            cout<<"4"<<endl;
            lharga=170000;
        }
        else if (letak==5)
        {
            cout<<"5"<<endl;
            lharga=190000;
        }
        else if (letak==6)
        {
            cout<<"6"<<endl;
            lharga=200000;
        }
        else if (letak==7)
        {
            cout<<"7"<<endl;
            lharga=215000;
        }
        else if (letak==8)
        {
            cout<<"8"<<endl;
            lharga=250000;
        }
        else if (letak==9)
        {
            cout<<"9"<<endl;
            lharga=265000;
        }
        else if (letak==10)
        {
            cout<<"10"<<endl;
            lharga=270000;
        }
        else if (letak==11)
        {
            cout<<"11"<<endl;
            lharga=280000;
        }
        else if (letak==12)
        {
            cout<<"12"<<endl;
            lharga=290000;
        }
        else if (letak==13)
        {
            cout<<"13"<<endl;
            lharga=300000;
        }
        else if (letak==14)
        {
            cout<<"14"<<endl;
            lharga=310000;
        }
        else if (letak==15)
        {
            cout<<"15"<<endl;
            lharga=320000;
        }
        else if (letak==16)
        {
            cout<<"16"<<endl;
            lharga=330000;
        }
        else if (letak==17)
        {
            cout<<"17"<<endl;
            lharga=340000;
        }
        else if (letak==18)
        {
            cout<<"18"<<endl;
            lharga=350000;
        }
        else if (letak==19)
        {
            cout<<"19"<<endl;
            lharga=360000;
        }
        else if (letak==20)
        {
            cout<<"20"<<endl;
            lharga=370000;
        }
        else if (letak==21)
        {
            cout<<"21"<<endl;
            lharga=380000;
        }
        else if (letak==22)
        {
            cout<<"22"<<endl;
            lharga=390000;
        }
        else if (letak==23)
        {
            cout<<"23"<<endl;
            lharga=400000;
        }
        else if (letak==24)
        {
            cout<<"24"<<endl;
            lharga=410000;
        }
        else if (letak==25)
        {
            cout<<"25"<<endl;
            lharga=420000;
        }
        else if (letak==26)
        {
            cout<<"26"<<endl;
            lharga=430000;
        }
        else if (letak==27)
        {
            cout<<"27"<<endl;
            lharga=440000;
        }
        else if (letak==28)
        {
            cout<<"28"<<endl;
            lharga=450000;
        }
        else if (letak==29)
        {
            cout<<"29"<<endl;
            lharga=460000;
        }
        else if (letak==30)
        {
            cout<<"30"<<endl;
            lharga=500000;
        }
        else
        {
            cout<<"Letak tidak ada !"<<endl;
            cin >> tanya;
        }

        system("CLS");
        cout<<"Lama Menginap : ";
        cin>>lama_menginap;
        if (lama_menginap>=10)
            {
                cout<<"Diskon 30%, Lama menginap "<<lama_menginap<<""<<endl;
                kasir=harga*30/100;
            }

        else
            {
                cout<<"Lama menginap "<<lama_menginap<<" hari"<<endl;
                kasir=0;
            }
        hitung(totalbayar,kamar,lama_menginap);
        biaya=((harga-kasir)*lama_menginap)+fharga+lharga+rharga;
        cout<<"Keluarga "<<strupr(namakeluarga)<<endl;
        cout<<"Kamar Ke - : "<<kamar<<endl;
        cout<<"Harga Fasilitas : "<<fharga<<endl;
        cout<<"Harga Ranjang yang di pesan : "<<rharga<<endl;
        cout<<"Harga Letak : "<<lharga<<endl;
        cout<<"Total Keseluruhan : "<<(harga*lama_menginap)+fharga+lharga+rharga<<endl;
        cout<<"Total Diskon : "<<kasir<<endl;
        cout<<"Total akhir pembayaran : "<<biaya<<endl;
        cout<<"Waktu Pesan "<<dt;
        tanya;
        cout<<"Pesan lagi ? (y/n)"<<endl;
        cin>> lagi;
        system("CLS");
            if (lagi=='y'){
            goto mulai;
            }
            else{
                cout<<"Terima Kasih Telah Berkunjung";
            }
        getch();
        return 0;

}
