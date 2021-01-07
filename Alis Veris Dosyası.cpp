#include <iostream>
#include <fstream>
using namespace std;
void menu();
int main()
{
      string ad;
      string Soyad;

      cout << "Koton Bilisim--> HOSGELDINIZ\n" << endl;
      cout << "------------------------------------------\n" << endl;
      cout<<"Lutfen Adinizi ve Soyadinizi Giriniz:\n"<<endl;
      cin >> ad>>Soyad;
      cout<<" Sayin "<<ad<<Soyad <<" Asagidaki Menuden alis-veris yapabilirsiniz.\n"<<endl;
     cout << "------------------------------------------------------------\n" << endl;
     cout << "                          ANAMENU\n"                               << endl;
     menu();
      float hpMarka=2500;
     float appleMarka=500;
     float vestelMarka=250;
     float sunnyMarka=1500;


     char secim;

    int adet;
    float toplam=0;

            ofstream yazmaDosyasi;// dosya açma
              yazmaDosyasi.open("Fatura.txt");
              yazmaDosyasi<<"Musteri Adi:\n ";
              yazmaDosyasi<<ad<<Soyad<<"\n";
    while(1==1)
    {

        cout<<"Seciminiz: "<<endl;
        cin>>secim;
          if(secim=='1')
          {
                    cout<<"Adet Sayisini Giriniz: "<<endl;
                    cin>>adet;
                    toplam=toplam+hpMarka*adet;
                    cout<<"Su anki toplam borcunuz:  "<<toplam<<endl;
          }
          else if(secim=='2')
          {
                    cout<<"Adet Sayisini Giriniz: "<<endl;
                    cin>>adet;
                    toplam=toplam+appleMarka*adet;
                    cout<<"Su anki toplam borcunuz:  "<<toplam<<endl;

          }
           else if(secim=='3')
          {
                    cout<<"Adet Sayisini Giriniz: "<<endl;
                    cin>>adet;
                    toplam=toplam+vestelMarka*adet;
                    cout<<"Su anki toplam borcunuz:  "<<toplam<<endl;
          }
           else if(secim=='4')
          {
                    cout<<"Adet Sayisini Giriniz: "<<endl;
                    cin>>adet;
                    toplam=toplam+sunnyMarka*adet;
                    cout<<"Su anki toplam borcunuz:  "<<toplam<<endl;

          }
          else
          {
              cout<<"Yanlis secim yaptiniz"<<endl;
          }

          char devamMi;
          cout<<"Alisvererise devam etmek istiyormusunuz(E/H):\n "<<endl;
          cin>>devamMi;
           if(devamMi=='H' || devamMi=='h')
           break;

            if(devamMi=='E' || devamMi=='e')
           menu();

    }// while sonu

              char kdvMi,taksit;
             cout<<"%18 KDV eklensin mi?(E/H)\n"<<endl;
            cin>>kdvMi;
              if(kdvMi=='E' || kdvMi=='e')
              {
                  toplam=toplam+toplam*18/100;

                    yazmaDosyasi<<"Toplam Borç Tutar: ";
                    yazmaDosyasi<<toplam<<"\n";
                    yazmaDosyasi<<"Ödeme Cizelgesi:\n ";
                    yazmaDosyasi<<"----------------------------";

                  cout<<"Toplam Borcunuz="<<toplam<<endl;

                  cout<<"Taksitlendirmek istiyor musunuz ?:(E/H)\n"<<endl;
                cin>>taksit;
                    if(taksit=='H' || taksit=='h')
                    {
                            cout<<"Toplam Pesin Borcunuz= "<<toplam<<endl;

                    }
                    else if(taksit=='E' || taksit=='e')
                    {
                          int taksitSayisi;
                          cout<<"Taksit Sayisi Giriniz:(Max:12 taksit) \n"<<endl;
                          cin>>taksitSayisi;
                          cout<<"Aylik odeme tutariniz= "<<toplam/taksitSayisi<<endl;
                          cout<<"Odeme cizelgeniz: \n" << endl;
                          cout<<"----------------------------------------------\n"<<endl;
                          for(int i=0;i<taksitSayisi;i++)
                          {
                              cout<<i+1<<". ay: "<<toplam/taksitSayisi<<" \n"<<endl;
                              yazmaDosyasi<<"\n"<<i+1<<". ay: "<<toplam/taksitSayisi<<" \n";
                          }
                    }
              }
              else if(kdvMi=='H' || kdvMi=='h')
              {
                  cout<<"Toplam Borcunuz="<<toplam<<endl;

                   yazmaDosyasi<<"Toplam Borç Tutar: ";
                    yazmaDosyasi<<toplam<<"\n";

                  cout<<"Taksitlendirmek istiyor musunuz(E/H) ?:"<<endl;
                  cin>>taksit;
                    if(taksit=='H' || taksit=='h')
                    {
                            cout<<"Toplam Pesin Borcunuz= "<<toplam<<endl;
                    }
                    else if(taksit=='E' || taksit=='e')
                    {
                          int taksitSayisi;
                          cout<<"Taksit Sayisi Giriniz:(Max:12 taksit) \n"<<endl;
                          cin>>taksitSayisi;
                          cout<<"Aylik odeme tutariniz= "<<toplam/taksitSayisi<<endl;
                          cout<<"Odeme cizelgeniz: \n" << endl;
                          cout<<"----------------------------------------------\n"<<endl;
                          for(int i=0;i<taksitSayisi;i++)
                          {
                              cout<<i+1<<". ay: "<<toplam/taksitSayisi<<" \n"<<endl;
                              yazmaDosyasi<<"\n"<<i+1<<". ay: "<<toplam/taksitSayisi<<" \n";

                          }
                    }
              }

                yazmaDosyasi.close();

    return 0;
}

void menu()
{

     cout<<"------------------------------------------------------------------\n"<<endl;
     cout<<"|    1- HP Marka Diz Ustu Bilgisayar\t          : 2500\n"<<endl;
     cout<<"|    2- APPLE Marka Kulaklik                       : 500 \n"<<endl;
     cout<<"|    3- VESTEL Marka Klavye&Mause Seti     : 250  \n "<<endl;
     cout<<"|    4-SUNNY Marka Monitor                      : 1500\n"<<endl;
     cout<<"------------------------------------------------------------------\n"<<endl;

}
