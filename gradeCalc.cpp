/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI…...: 1.ÖDEV
**				ÖĞRENCİ ADI...............:Furkan Anıl Özdemir
**				ÖĞRENCİ NUMARASI.: b231210063
**				DERS GRUBU…………: A GRUBU
****************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <locale.h>
#include <cmath>

int AAsayac = 0, BAsayac = 0, BBsayac = 0, CBsayac = 0, CCsayac = 0, DCsayac = 0, DDsayac = 0, FDsayac = 0, FFsayac = 0;

using namespace std;

struct Ogrenci {
    string isim;
    string soyisim;
    int vizeNotu;
    int odev1Notu;
    int odev2Notu;
    int kisaSinav1Notu;
    int kisaSinav2Notu;
    int finalNotu;
};

void randomIsimSoyisim(Ogrenci& ogrenci) {

    string isimler[100] = {
        "Ahmet", "Ayşe", "Mehmet", "Fatma", "Mustafa", "Zeynep", "Ali", "Aylin",
        "Emre", "Elif", "Cem", "Ceyda", "Can", "Ceren", "Kemal", "Kadir", "Selin",
        "Hakan", "Ece", "Burak", "Sena", "Recep", "Deniz", "Serkan", "Sude", "Merve",
        "Oğuz", "Zehra", "Yusuf", "Nur", "Tolga", "Gizem", "Ömer", "Derya", "Halil",
        "Elanur", "Alihan", "Aybüke", "Çınar", "Eda", "Cihan", "Beyza", "Bahadır",
        "Yaren", "Metin", "Neslihan", "Değer", "Alperen", "Berna", "Furkan", "Ezgi",
        "Tarık", "İrem", "Murat", "Sevde", "Tuna", "Şule", "Görkem", "Neşe", "Türkan",
        "Baran", "Birgül", "Abdullah", "Buse", "Emir", "Yelda", "İlker", "Acelya",
        "Efe", "Aslı", "Selçuk", "İclal", "Eray", "Tuğba", "Kadir", "Yasemin", "Umut",
        "Ela", "Hüseyin", "Ceyhun", "Ebru", "Savaş", "Ezgi", "Caner", "Zübeyde",
        "Fikret", "Deniz", "Selman", "Seval", "Hamza", "Rabia", "Suat", "Nil",
        "Serhat", "Rüya"
    };

    string soyisimler[100] = {
        "Yılmaz", "Demir", "Çelik", "Kaya", "Arslan", "Öztürk", "Şahin", "Demirci",
        "Aydın", "Koç", "Yıldırım", "Kara", "Polat", "Kılıç", "Aslan", "Taş",
        "Yaman", "Türk", "Özdemir", "Bulut", "Erdem", "Keskin", "İnce", "Çetin",
        "Doğan", "Güneş", "Güler", "Kurt", "Gündüz", "Alkan", "Kaplan", "Can",
        "Orhan", "Tuncer", "Türkoğlu", "Beyaz", "Keser", "Sarı", "Bozkurt", "Yüksel",
        "Ada", "Dal", "Şimşek", "Çoban", "Bulut", "Güzel", "Kocaman", "Eren",
        "Acar", "Sezer", "Göktaş", "Yavuz", "Başar", "Durmaz", "Aktaş", "Yazar",
        "Güler", "Aksoy", "Karakaş", "Sancak", "Erdoğan", "Beyhan", "Aydoğan",
        "Arı", "Korkmaz", "Karadağ", "Aksu", "Özen", "Yıldız", "Gökgül", "Engin",
        "Karaçam", "Yardımcı", "Şen", "Soylu", "Özkan", "Sağlam", "Kocabıyık", "Yüksek",
        "Elmas", "Karabulut", "Korkut", "Aydın", "Tekin", "Zengin", "Ay", "Yıldızoğlu",
        "Şentürk", "Buldu", "Yamaç", "Öz", "Güçlü", "Uyar", "Öztürk", "Yalçın",
        "Turan", "Güzey", "Yanar", "Önel"
    };

    int randomIsim = rand() % 90;
    int randomSoy = rand() % 90;
    ogrenci.isim = isimler[randomIsim];
    ogrenci.soyisim = soyisimler[randomSoy];
}


int randomNotveHarfNotu(string sinavAdi, int& AAsayac, int& BAsayac, int& BBsayac, int& CBsayac, int& CCsayac, int& DCsayac, int& DDsayac, int& FDsayac, int& FFsayac) {
    int notSansi = rand() % 10 + 1;
    int notlar;

//HER BİR SINAV NOTUNU SINIFIN %20’si  80 ile 100 arası, %50 80 ile 50 arası, %30’u 50 ile 0 arası random olarak belirlenecek ŞEKİLDE ATAYAN KOŞUL İFADESİ
    if (notSansi <= 2) {//SINIFIN %20’sinin sınav notlarını  80 ile 100 arası atayan ifade
        notlar = rand() % 20 + 80;
        cout << sinavAdi << " NOTU: " << notlar << endl;
    }
    else if (notSansi <= 7) {//SINIFIN %50’sinin sınav notlarını  80 ile 50 arası atayan ifade
        notlar = rand() % 30 + 50;
        cout << sinavAdi << " NOTU: " << notlar << endl;
    }
    else {
        notlar = rand() % 50;//SINIFIN %30’unun sınav notlarını  0 ile 50 arası atayan ifade
        cout << sinavAdi << " NOTU: " << notlar << endl;
    }


//ÜNİVERSİTENİN WEB SİTESİNE GÖRE ;HER BİR SINAV NOTLARININ HARF KARŞILIĞINI YAZDIRAN KOŞUL İFADESİ (NOT >=90 ISE HARF NOTU;AA GİBİ)
    if (notlar >= 90) {
        cout << sinavAdi << "; harf notu: AA" << endl << endl;
        AAsayac++;
    }
    else if (notlar < 90 && notlar >= 85) {
        cout << sinavAdi << "; harf notu: BA" << endl << endl;
        BAsayac++;
    }
    else if (notlar < 85 && notlar >= 80) {
        cout << sinavAdi << "; harf notu: BB" << endl << endl;
        BBsayac++;
    }
    else if (notlar < 79 && notlar >= 75) {
        cout << sinavAdi << "; harf notu: CB" << endl << endl;
        CBsayac++;
    }
    else if (notlar < 75 && notlar >= 65) {
        cout << sinavAdi << "; harf notu: CC" << endl << endl;
        CCsayac++;
    }
    else if (notlar < 65 && notlar >= 58) {
        cout << sinavAdi << "; harf notu: DC" << endl << endl;
        DCsayac++;
    }
    else if (notlar < 58 && notlar >= 50) {
        cout << sinavAdi << "; harf notu: DD" << endl << endl;
        DDsayac++;
    }
    else if (notlar < 50 && notlar >= 40) {
        cout << sinavAdi << "; harf notu: FD" << endl << endl;
        FDsayac++;
    }
    else {
        cout << sinavAdi << "; harf notu: FF" << endl << endl;
        FFsayac++;
    }

    return notlar;
}


int main() {

    setlocale(LC_ALL, "Turkish");

    int vizeAgirlik, odev1Agirlik, odev2Agirlik, kisaSinav1Agirlik, kisaSinav2Agirlik;

    int gecmeNotu;

    int derstenGecenlerSayac = 0, derstenKalanlarSayac = 0;

    double AAyuzdesi, BAyuzdesi, BByuzdesi, CByuzdesi, CCyuzdesi, DCyuzdesi, DDyuzdesi, FDyuzdesi, FFyuzdesi;

    double seksenYuzArasiNotlarYuzdesi, seksenElliArasiNotlarYuzdesi, elliSifirArasiNotlarYuzdesi;

    int sinifOrtVize = 0, sinifOrtKisaSinav1 = 0, sinifOrtKisaSinav2 = 0, sinifOrtOdev1 = 0, sinifOrtOdev2 = 0, sinifOrtYilsonu = 0;

    float standartSapma = 0, geciciDeger = 0;

    Ogrenci ogrenci;

    srand(time(0));

    int sinifMevcudu;
    cout << "LÜTFEN SINIF MEVCUDUNU GİRİNİZ : ";
    cin >> sinifMevcudu;

//HER BİR SINAVIN AĞIRLIĞINI DIŞARIDAN İSTEYEN VE EĞER AĞIRLIKLARIN TOPLAMI YUZDE 100 OLMAZ ISE TEKRAR SORAN KOŞUL İFADESİ
    do
    {
        cout << "VİZE AĞIRLIĞINI GİRİNİZ(%) ;";
        cin >> vizeAgirlik;
        cout << "ÖDEV 1 AĞIRLIĞINI GİRİNİZ(%) ;";
        cin >> odev1Agirlik;
        cout << "ÖDEV 2 AĞIRLIĞINI GİRİNİZ(%) ;";
        cin >> odev2Agirlik;
        cout << "KISA SINAV 1 AĞIRLIĞINI GİRİNİZ(%) ;";
        cin >> kisaSinav1Agirlik;
        cout << "KISA SINAV 2 AĞIRLIĞINI GİRİNİZ(%) ;";
        cin >> kisaSinav2Agirlik;

        //EGER AĞIRLIKLARIN TOPLAMI 100 İSE BİTİR DEĞİLSE TEKRAR SOR KOŞUL İFADESİ
        if ((vizeAgirlik + odev1Agirlik + kisaSinav1Agirlik + odev2Agirlik + kisaSinav2Agirlik) == 100) {
            break;
        }
        else {
            cout << "AĞIRLIKLARIN TOPLAMI YÜZDE 100 OLMALIDIR LÜTFEN TEKRAR GİRİNİZ..." << endl;
        }

    //EĞER AĞIRLIKLARIN TOPLAMI 100 İSE DO DÖNGÜSÜNDEN ÇIK DEĞİLSE TEKRAR SOR
    } while (!((vizeAgirlik + odev1Agirlik + kisaSinav1Agirlik + odev2Agirlik + kisaSinav2Agirlik) == 100));


    int finalYuzdesi, yiliciYuzdesi;

//YIL İÇİ PUANININ GEÇME NOTUNA ETKİSİNİ(%) İSTEYEN VE OTOMATİK OLARAK FİNAL YUZDESİNİ HESAPLAYAN DO DÖNGÜSÜ
    do {

        cout << "YILİÇİ PUANININ GEÇME NOTUNA ETKİSİNİ GİRİNİZ(%);";
        cin >> yiliciYuzdesi;

        finalYuzdesi = 100 - yiliciYuzdesi;

//EĞER YİL İCİ YUZDESİ YUZDE 100 DEN BÜYÜK GİRİLİRSE TEKRAR SOR
    } while (yiliciYuzdesi > 100);


    cout << "LÜTFEN DERSTEN GEÇME NOTUNU GİRİNİZ ;";
    cin >> gecmeNotu;


    float yilsonuNotlari[400]{};

    int enyukseknot = 0;
    int endusuknot = 100;


//HER BİR ÖĞRENCİNİN NOTLARINI ,HARF NOTLARINI,DERSTEN GEÇME DURUMUNU ,YILSONU NOTUNU YAZDIRAN ;SINIF MEVCUDU KADAR DÖNEN FOR DÖNGÜSÜ
    for (int i = 0; i < sinifMevcudu; i++) {

        randomIsimSoyisim(ogrenci);


        cout << "-------" << i + 1 << ".OGRENCI " << ogrenci.isim << " " << ogrenci.soyisim << "-------" << endl;


        int vizeNotu = randomNotveHarfNotu("VIZE", AAsayac, BAsayac, BBsayac, CBsayac, CCsayac, DCsayac, DDsayac, FDsayac, FFsayac);
        int odev1Notu = randomNotveHarfNotu("ODEV1", AAsayac, BAsayac, BBsayac, CBsayac, CCsayac, DCsayac, DDsayac, FDsayac, FFsayac);
        int odev2Notu = randomNotveHarfNotu("ODEV2", AAsayac, BAsayac, BBsayac, CBsayac, CCsayac, DCsayac, DDsayac, FDsayac, FFsayac);
        int kisaSinav1Notu = randomNotveHarfNotu("KISASINAV1", AAsayac, BAsayac, BBsayac, CBsayac, CCsayac, DCsayac, DDsayac, FDsayac, FFsayac);
        int kisaSinav2Notu = randomNotveHarfNotu("KISASINAV2", AAsayac, BAsayac, BBsayac, CBsayac, CCsayac, DCsayac, DDsayac, FDsayac, FFsayac);
        int finalNotu = randomNotveHarfNotu("FİNAL", AAsayac, BAsayac, BBsayac, CBsayac, CCsayac, DCsayac, DDsayac, FDsayac, FFsayac);

        
        int yilSonuNotu = (((vizeNotu * vizeAgirlik) / 100 + (kisaSinav1Notu * kisaSinav1Agirlik) / 100 + (kisaSinav2Notu * kisaSinav2Agirlik) / 100 + (odev1Notu * odev1Agirlik) / 100 + (odev2Notu * odev2Agirlik) / 100) * yiliciYuzdesi / 100) + ((finalYuzdesi * finalNotu) / 100);


        yilsonuNotlari[i] = yilSonuNotu;



//EN YÜKSEK VE EN DÜSÜK NOTLARI BULAN KOŞUL İFADESİ ; EĞER YILSONU NOTU EN YÜKSEK NOTTAN BÜYÜKSE YENİ EN YÜKSEK NOT SON DÖNEN NOT OLUR VE EN SONUNDA EN YÜKSEK NOTU YAZDIRIR
        if (yilSonuNotu > enyukseknot) {
            enyukseknot = yilSonuNotu;

        }
        //EĞER YILSONU NOTU EN DÜŞÜK NOTTAN KÜÇÜKSE YENİ EN DÜŞÜK NOT SON DÖNEN NOT OLUR VE EN SONUNDA EN DÜŞÜK NOTU YAZDIRIR
        if (yilSonuNotu < endusuknot) {
            endusuknot = yilSonuNotu;

        }


        cout << endl;
        cout << "Öğrencinin Yılsonu Notu :" << yilSonuNotu << endl;


//YIL SONUNU NOTUNUN HARF NOTU KARŞILIĞINI YAZDIRAN KOŞUL İFADESİ
//(NOT >=90 ISE YILSONU HARF NOTU;AA GİBİ)
        if (yilSonuNotu >= 90) {
            cout << "Yılsonu harf notu: AA" << endl;
            AAsayac++;

        }
        else if (yilSonuNotu < 90 && yilSonuNotu >= 85) {
            cout << "Yılsonu harf notu: BA" << endl;
            BAsayac++;

        }
        else if (yilSonuNotu < 85 && yilSonuNotu >= 80) {
            cout << "Yılsonu harf notu: BB" << endl;
            BBsayac++;

        }
        else if (yilSonuNotu < 79 && yilSonuNotu >= 75) {
            cout << "Yılsonu harf notu: CB" << endl;
            CBsayac++;

        }
        else if (yilSonuNotu < 75 && yilSonuNotu >= 65) {
            cout << "Yılsonu harf notu: CC" << endl;
            CCsayac++;

        }
        else if (yilSonuNotu < 65 && yilSonuNotu >= 58) {
            cout << "Yılsonu harf notu: DC" << endl;
            DCsayac++;

        }
        else if (yilSonuNotu < 58 && yilSonuNotu >= 50) {
            cout << "Yılsonu harf notu: DD" << endl;
            DDsayac++;

        }
        else if (yilSonuNotu < 50 && yilSonuNotu >= 40) {
            cout << "Yılsonu harf notu: FD" << endl;
            FDsayac++;

        }
        else if (yilSonuNotu < 40 && yilSonuNotu >= 0) {
            cout << "Yılsonu harf notu: FF" << endl;
            FFsayac++;

        }

        cout << endl;

//BAŞTA GİRİLEN GEÇME NOTUNA GÖRE ÖĞRENCİLERİN DERSTEN GEÇME DURUMUNU KONTROL EDEN KOŞUL İFADESİ;
        if (yilSonuNotu >= gecmeNotu) {//EĞER yilSonuNotu DERSTEN GEÇME NOTUNDAN BÜYÜKSE ÖĞRENCİ DERSTEN GEÇER


            cout << "DERSTEN GEÇME DURUMU; GEÇTİ";
            cout << endl;
            cout << "-------------------------------" << endl;
            derstenGecenlerSayac++;
        }
        else {//EĞER yilSonuNotu DERSTEN GEÇME NOTUNDAN KÜÇÜKSE ÖĞRENCİ DERSTEN KALIR
            cout << "DERSTEN GEÇME DURUMU; KALDI" << endl;
            cout << "-------------------------------" << endl;
            derstenKalanlarSayac++;
        }




        sinifOrtVize += vizeNotu;
        sinifOrtKisaSinav1 += kisaSinav1Notu;
        sinifOrtKisaSinav2 += kisaSinav2Notu;
        sinifOrtOdev1 += odev1Notu;
        sinifOrtOdev2 += odev2Notu;
        sinifOrtYilsonu += yilSonuNotu;




    }

//standartSapma HESAPLAYAN FOR DÖNGÜSÜ ,Öncelikle ilgili değişkenimizin aritmetik ortalamasını hesaplıyoruz. Sonra her gözlemi aritmetik ortalamadan çıkartıyor; elde edilen farkların karesini alıyoruz.
//Karesi alınan her gözlem için kareler toplamını hesaplayıp gözlem sayısına (n-1) bölüyoruz
    for (int i = 0; i < sinifMevcudu; i++) {

        geciciDeger = geciciDeger + (yilsonuNotlari[i] - (float(sinifOrtYilsonu) / sinifMevcudu)) * (yilsonuNotlari[i] - (float(sinifOrtYilsonu) / sinifMevcudu));
    }

    standartSapma = sqrt(geciciDeger / (sinifMevcudu - 1));

    cout << "SINIFIN VIZE ORTALAMASI;" << float(sinifOrtVize) / sinifMevcudu << endl;
    cout << "SINIFIN KISASINAV 1 ORTALAMASI;" << float(sinifOrtKisaSinav1) / sinifMevcudu << endl;
    cout << "SINIFIN KISASINAV 2 ORTALAMASI;" << float(sinifOrtKisaSinav2) / sinifMevcudu << endl;
    cout << "SINIFIN ÖDEV1 ORTALAMASI;" << float(sinifOrtOdev1) / sinifMevcudu << endl;
    cout << "SINIFIN ÖDEV2 ORTALAMASI;" << float(sinifOrtOdev2) / sinifMevcudu << endl;
    cout << "SINIFIN YILSONU NOTU ORTALAMASI;" << float(sinifOrtYilsonu) / sinifMevcudu << endl;


    cout << "-----------------------------------------------------------" << endl;

    cout << "AA notundan " << AAsayac << " tane vardir" << endl;
    cout << "BA notundan " << BAsayac << " tane vardir" << endl;
    cout << "BB notundan " << BBsayac << " tane vardir" << endl;
    cout << "CB notundan " << CBsayac << " tane vardir" << endl;
    cout << "CC notundan " << CCsayac << " tane vardir" << endl;
    cout << "DC notundan " << DCsayac << " tane vardir" << endl;
    cout << "DD notundan " << DDsayac << " tane vardir" << endl;
    cout << "FD notundan " << FDsayac << " tane vardir" << endl;
    cout << "FF notundan " << FFsayac << " tane vardir" << endl << endl;

    cout << "-----------------------------------------------------------" << endl;
    int notSayacToplam = AAsayac + BAsayac + BBsayac + CBsayac + CCsayac + DCsayac + DDsayac + FDsayac + FFsayac;

    AAyuzdesi = (100.0 * AAsayac) / notSayacToplam;
    BAyuzdesi = (100.0 * BAsayac) / notSayacToplam;
    BByuzdesi = (100.0 * BBsayac) / notSayacToplam;
    CByuzdesi = (100.0 * CBsayac) / notSayacToplam;
    CCyuzdesi = (100.0 * CCsayac) / notSayacToplam;
    DCyuzdesi = (100.0 * DCsayac) / notSayacToplam;
    DDyuzdesi = (100.0 * DDsayac) / notSayacToplam;
    FDyuzdesi = (100.0 * FDsayac) / notSayacToplam;
    FFyuzdesi = (100.0 * FFsayac) / notSayacToplam;

    seksenYuzArasiNotlarYuzdesi = AAyuzdesi + BAyuzdesi + BByuzdesi;
    seksenElliArasiNotlarYuzdesi = CByuzdesi + CCyuzdesi + DCyuzdesi + DDyuzdesi;
    elliSifirArasiNotlarYuzdesi = FDyuzdesi + FFyuzdesi;

    cout << "AA harf notunun Sınıf Yüzdesi %" << AAyuzdesi << " dir." << endl;
    cout << "BA harf notunun Sınıf Yüzdesi %" << BAyuzdesi << " dir." << endl;
    cout << "BB harf notunun Sınıf Yüzdesi %" << BByuzdesi << " dir." << endl;
    cout << "CB harf notunun Sınıf Yüzdesi %" << CByuzdesi << " dir." << endl;
    cout << "CC harf notunun Sınıf Yüzdesi %" << CCyuzdesi << " dir." << endl;
    cout << "DC harf notunun Sınıf Yüzdesi %" << DCyuzdesi << " dir." << endl;
    cout << "DD harf notunun Sınıf Yüzdesi %" << DDyuzdesi << " dir." << endl;
    cout << "FD harf notunun Sınıf Yüzdesi %" << FDyuzdesi << " dir." << endl;
    cout << "FF harf notunun Sınıf Yüzdesi %" << FFyuzdesi << " dir." << endl << endl;

    cout << "------------------------------------------------------------" << endl;

    cout << "80-100 ARASI NOTLARIN YUZDESI : %" << seksenYuzArasiNotlarYuzdesi << endl;
    cout << "50-80 ARASI NOTLARIN YUZDESI : %" << seksenElliArasiNotlarYuzdesi << endl;
    cout << "50-0 ARASI NOTLARIN YUZDESI : %" << elliSifirArasiNotlarYuzdesi << endl;

    cout << "------------------------------------------------------------" << endl;

    cout << "////DERSTEN " << derstenGecenlerSayac << " kişi geçmiştir." << endl;
    cout << "////DERSTEN " << derstenKalanlarSayac << " kişi kalmıştır." << endl;

    cout << "------------------------------------------------------------------------------------" << endl;

    cout << "EN YÜKSEK YILSONU NOTU; " << enyukseknot << endl;
    cout << "EN DÜŞÜK YILSONU NOTU; " << endusuknot << endl;

    cout << "------------------------------------------------------------------------------------" << endl;

    cout << "SINIF YILSONU NOTLARININ STANDART SAPMASI ;" << standartSapma << endl;
    cout << endl;

    cout << "------------------------------------------------------------------------------------" << endl;
}

