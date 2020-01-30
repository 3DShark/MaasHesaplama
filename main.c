#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int Hesap(int tamPara)
{
    int bankNot[] = {20000,10000,5000,2000,1000,500,100};
    int madeni[] = {50,25,10,5,1};
    int i,j,banknotSayisi;
     for(i=0;i<7;i++){
            banknotSayisi = tamPara / bankNot[i] ;
            tamPara %=  bankNot[i];
            if(banknotSayisi!=0){
            printf("%d'TL Adedi:%d\n",bankNot[i] /100,banknotSayisi);
            }

            if(tamPara<100){

                for(j=0;j<5;j++){

                    banknotSayisi = tamPara /madeni[j];
                    tamPara %= madeni[j];
                    if(banknotSayisi!=0){
                        printf("%d'Kurus Adedi:%d\n",madeni[j],banknotSayisi);

                    }
                    if(tamPara == 0)
                    {
                        break;
                    }
                }
            }
    }
}

int butunHesap(int tamPara2)
{
  int bankNot[] = {20000,10000,5000,2000,1000,500,100};
    int madeni[] = {50,25,10,5,1};
    int i,j,banknotSayisi;
     for(i=0;i<7;i++){
            banknotSayisi = tamPara2 / bankNot[i] ;
            tamPara2 %=  bankNot[i];
            if(banknotSayisi!=0){
            printf("%d'TL Adedi:%d\n",bankNot[i] /100,banknotSayisi);
            }

            if(tamPara2<100){

                for(j=0;j<5;j++){

                    banknotSayisi = tamPara2 /madeni[j];
                    tamPara2 %= madeni[j];
                    if(banknotSayisi!=0){
                        printf("%d'Kurus Adedi:%d\n",madeni[j],banknotSayisi);

                    }
                    if(tamPara2 == 0)
                    {
                        break;
                    }
                }
            }
    }
}







int main()

{
    // DEGİSKEN TANIMLAMALARI

    char adSoyad[35],kimlikNo[15],enYuksekAdSoyad[35],enYuksekKimlikNo[15],netEnYuksekKimlikNo[15],netEnYuksekAdSoyad[35],medeniDurum,hanimIs,engelDurum,calisanDurum;
    float brutUcret,toplamBrutUcret,netUcret,gelirVergisi,tumCalisanNetUcret,tumCalisanBrutUcret,tumCalisanGelirVergisi,gelirVergisi15=0,gelirVergisi20=0,gelirVergisi27=0,gelirVergisi35=0;
    float yuksekNetUcret = 0,yuksekBrutUcret = 0,enYuksekBrutUcret,netEnYuksekBrutUcret,enYuksekGelirVergisi,netEnYuksekGelirVergisi,enYuksekNetUcret;
    int  cocukSayisi,buyukCocukSayisi,kucukCocukSayisi,engelOran,engelDerece,vergiOrani;
    int  calisanSayisi=0,evli=0,bekar=0,hanimCalisiyor=0,cocukluCalisan = 0,cocukFazla=0,engelliCalisan =0;
    int aileYardim=0,cocukAileYardim=0,netUcretIkiBin=0;



    do{
    printf("TC ' Kimlik Numarasini Giriniz:");
    scanf(" %[^\n]s", kimlikNo);

    printf("Adinizi Ve Soyadinizi Giriniz:");
    scanf (" %[^\n]s ", adSoyad);



    do{
        printf("Aylik Brut ucreti(TL) Giriniz:");
        scanf("%f",&brutUcret);
    }
    while(brutUcret<1777);

    toplamBrutUcret = brutUcret;


    do{

        printf("Medeni Durumu...Evli/Bekar(e/b):");
        scanf(" %c", &medeniDurum);
        if(medeniDurum == 'e')
        {
            evli++;
            printf("Esi Calisiyor Mu ? ...Evet/Hayir(e/h):");
            scanf(" %c", &hanimIs);

            if(hanimIs=='h'){

                aileYardim = 220;
                toplamBrutUcret += aileYardim;
            }
            else{

                hanimCalisiyor++;

            }
        }
        else{
            bekar++;
        }
    }


    while(medeniDurum != 'e' && medeniDurum != 'b');



    do{
        printf("Bakmakla yukumlu oldugu cocuk sayisi:");
        scanf("%d",&cocukSayisi);

    }



    while(cocukSayisi<0);

     if(cocukSayisi>3){
                cocukFazla++;
     }
    if(cocukSayisi>0){
            cocukluCalisan++;
        do{

        printf("6 Yasindan buyuk olanlarin sayisi:");
        scanf("%d",&buyukCocukSayisi);
        }
        while(buyukCocukSayisi<0 || cocukSayisi<buyukCocukSayisi);
         kucukCocukSayisi = cocukSayisi - buyukCocukSayisi;
         cocukAileYardim = kucukCocukSayisi *25 + buyukCocukSayisi *45;
         toplamBrutUcret += cocukAileYardim;
        }



    if(toplamBrutUcret<2000){
        gelirVergisi = (toplamBrutUcret*15)/100;
        netUcret = toplamBrutUcret - gelirVergisi;
        vergiOrani = 15;
        gelirVergisi15++;

    }
    else if (toplamBrutUcret>=2000 && toplamBrutUcret<5000){
        gelirVergisi = (toplamBrutUcret*20)/100;
        netUcret =  toplamBrutUcret - gelirVergisi;
        vergiOrani = 20;
        gelirVergisi20++;

    }
    else if  (toplamBrutUcret>=5000 && toplamBrutUcret<10000){
        gelirVergisi = (toplamBrutUcret*27)/100;
        netUcret = toplamBrutUcret - gelirVergisi;
        vergiOrani = 27;
        gelirVergisi27++;
    }
    else {
        gelirVergisi = (toplamBrutUcret*35)/100;
        netUcret = toplamBrutUcret - gelirVergisi;
        vergiOrani=35;
        gelirVergisi35++;
        }

    do{

            printf("Engel Durumu Var mi ?...Evet/Hayir(e/h)");
            scanf(" %c", &engelDurum);

            do{
            if(engelDurum == 'e'){
                    engelliCalisan++;
                printf("Engel Orani % kac ?...:");
                scanf("%d",&engelOran);
            }
            if(engelOran>=40 && engelOran<60){
                if(gelirVergisi>210){
                        netUcret += 210;

                }
                else {

                    netUcret += gelirVergisi;
                }


                engelDerece = 3;
            }
            else if(engelOran>=60 && engelOran<80){
                 if(gelirVergisi>470){
                           netUcret += 470;


                }
                else {
                    netUcret += gelirVergisi;
                }


                engelDerece = 2;
            }
            else if (engelOran>=80 && engelOran<=100){
                     if(gelirVergisi>900){
                           netUcret += 900;

                }
                else {
                    netUcret+= gelirVergisi;
                }



                engelDerece = 1;
            }


            }
            while(engelOran<0 && engelOran>100);



    }
    while(engelDurum != 'e' && engelDurum != 'h');

    // İSTATİSTİKLERİN OLUŞTURULDUĞU YER:



    printf("\n");
    printf("-----------------\n");


    printf("TC Kimlik Numarasi: %s\n",kimlikNo);
    printf("Adi Soyadi:%s\n",adSoyad);
    printf("Aylik Brut Ucreti: %.2f\n",brutUcret);
    printf("Es icin aile yardimi odenegi: %d ' TL\n",aileYardim);
    printf("Cocuk icin aile yardimi odenegi: %d ' TL\n",cocukAileYardim);
    printf("Aylik Toplam brut ucreti: %.2f ' TL\n",toplamBrutUcret);
    printf("Gelir Vergisi Kesintisi: %.2f TL\n", gelirVergisi);
    if(engelDurum == 'e'){
        printf("Engel Derecesi(1/2/3):%d\n",engelDerece);
    }
    printf("Aylik Net Ucreti %.2f ' TL\n",netUcret);



     tumCalisanBrutUcret += toplamBrutUcret;
     tumCalisanNetUcret += netUcret;
     tumCalisanGelirVergisi += gelirVergisi;

     calisanSayisi++;






     if(netUcret<2000){
            netUcretIkiBin++;

     }

       if(yuksekNetUcret<netUcret){

             yuksekNetUcret = netUcret;
             memcpy(netEnYuksekKimlikNo, kimlikNo, sizeof(netEnYuksekKimlikNo));
             memcpy(netEnYuksekAdSoyad, adSoyad, sizeof(netEnYuksekAdSoyad));
             netEnYuksekGelirVergisi = gelirVergisi;
             netEnYuksekBrutUcret = toplamBrutUcret;


       }


       if(yuksekBrutUcret<toplamBrutUcret)
       {
           yuksekBrutUcret = toplamBrutUcret;
           memcpy(enYuksekKimlikNo, kimlikNo, sizeof(enYuksekKimlikNo));
           memcpy(enYuksekAdSoyad, adSoyad, sizeof(enYuksekAdSoyad));
           enYuksekGelirVergisi = gelirVergisi;
           enYuksekNetUcret = netUcret;

       }


     int tamPara = (int)(netUcret * 100.0 + 0.5);



     Hesap(tamPara);


    printf("---------------------------\n");
    printf("Baska Calisan Var Mi ?..Evet/Hayir(e/h)");
    scanf(" %c",& calisanDurum);
    }

    while(calisanDurum =='e');








    int tamPara2 = (int) (tumCalisanNetUcret * 100.0 + 0.5);

    printf("\n");

    printf("Tum Calisanlara Odenen Aylik Net Ucret: %.2f\n",tumCalisanNetUcret);
    printf("Devlete Aktarilan Toplam Gelir Vergisi Tutari: %.2f\n", tumCalisanGelirVergisi);
    printf("Tum Calisanlarin Brut Ucret Ortalamasi:%.2f\n",tumCalisanBrutUcret/calisanSayisi);
    printf("Tum Calisanlarin Net Ucret Ortalamasi:%.2f\n",tumCalisanNetUcret/calisanSayisi);
    printf("Calisan Sayisi: %d\n",calisanSayisi);
    butunHesap(tamPara2);
    printf("\n");
    printf("2000 TL'nin altinda aylik net ucret alanlarin sayisi:%d\n",netUcretIkiBin);
    printf("Gelir Vergisi %%15 Diliminde olanlarin Sayisi Ve Yuzdesi: %.0f %% %.2f\n",gelirVergisi15,(gelirVergisi15*100)/calisanSayisi);
     printf("Gelir Vergisi %%20 Diliminde olanlarin Sayisi Ve Yuzdesi: %.0f %% %.2f\n",gelirVergisi20,(gelirVergisi20*100)/calisanSayisi);
      printf("Gelir Vergisi %%27 Diliminde olanlarin Sayisi Ve Yuzdesi: %.0f %% %.2f\n",gelirVergisi27,(gelirVergisi27*100)/calisanSayisi);
       printf("Gelir Vergisi %%35 Diliminde olanlarin Sayisi Ve Yuzdesi: %.0f %% %.2f\n",gelirVergisi35,(gelirVergisi35*100)/calisanSayisi);

    printf("**************\n");
    printf("Aylik toplam brut ucreti En yuksek olan calisanin:\n");
    printf("**************\n");
    printf("TC Kimlik No:%s \n",enYuksekKimlikNo);
    printf("Adi Soyadi:%s \n",enYuksekAdSoyad);
    printf("Aylik toplam brut ucreti:%.2f\n",yuksekBrutUcret);
    printf("Gelir vergisi kesintisi:%.2f\n",enYuksekGelirVergisi);
    printf("Aylik net ucreti:%.2f\n",enYuksekNetUcret);
    printf("**************");

    printf("\n");


    printf("Aylik net ucreti en yuksek olan calisanin:\n");
    printf("**************");
    printf("TC Kimlik No:%s \n",netEnYuksekKimlikNo);
    printf("Adi Soyadi:%s \n",netEnYuksekAdSoyad);
    printf("Aylik toplam brut ucreti:%.2f\n",netEnYuksekBrutUcret);
    printf("Gelir vergisi kesintisi:%.2f\n",netEnYuksekGelirVergisi);
    printf("Aylik net ucreti:%.2f\n",yuksekNetUcret);
    printf("**************\n");

    printf("Tum calisanlar icindeki Evli'olanlarin yuzdesi:%% %d\n",(evli*100)/calisanSayisi );
    printf("Tum calisanlar icindeki Bekar'olanlarin yuzdesi:%% %d\n",(bekar*100)/calisanSayisi);


    if(hanimCalisiyor>0){
            float hanimOrt = (hanimCalisiyor*100)/evli;
    printf("Evli olan calisanlarin icinde,esleri'de calisanlarin yuzdesi:%% %.2f\n",hanimOrt);
    }
    if(cocukSayisi>0){
    float cocukOrt = cocukSayisi / cocukluCalisan;
        printf("Calisanlarin bakmakla yukumlu oldugu cocuklarin ortalamasi: %.2f\n",cocukOrt);
    }
     printf("Bakmakla yukumlu oldugu cocuk sayisi 3'ten fazla olan calisanlarin sayisi: %d\n ",cocukFazla);


    printf("Engelli Calisanlarin Sayisi:%d\n",engelliCalisan);
    printf("ve tum Calisanlarin icindeki yuzdesi:%% %d ",(engelliCalisan*100)/calisanSayisi);


















}
