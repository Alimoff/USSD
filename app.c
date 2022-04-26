#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define file "balance.txt";
#define file2 "text2.txt";

int main()
{
    // choice - choosew for menu
    int choice = 0;
    // tarif - choose for tariffs
    int tarif;
    //----------//
    // services
    int service;
    int ishonchli_tolov, plus7, extra;
    //----------//
    //internet//
    int internet;
    int oylik, haftalik, kun, tort_G;
    // oson - tariff "oson" services
    int oson = 0;
    // hammasi zo'r 1 tariff
    int zor1 = 0;
    // YES or NO
    char answer;
    // hammasi zo'r 2 tarif
    int zor2;
    // Status Silver
    int status_silver;
    // Kunlik tarifi
    int kunlik;

    printf("\n");
    printf("1. Balance\n");
    printf("2. Tariflar\n");
    printf("3. Xizmatlar\n");
    printf("4. Internet\n");

    printf("\n");
    printf(">> ");
    scanf("%d", &choice);

    FILE *f = fopen("balance.txt", "r+");
    char string[100] = "";
    char str[100];

    while (fgets(str, 100, f) != NULL)
    {
        strcat(string, str);
    }
    switch (choice)
    {
    case 1:
        printf("Hisobingizda %s so'm mavjud\n", string);
        break;

        //------------- Tariflar------------//
    case 2:
        printf("\n");
        printf("1. OSON 1\n");
        printf("2. Hammasi ZO'R 1\n");
        printf("3. Hammasi ZO'R 2\n");
        printf("4. Status Silver\n");
        printf("5. Kunlik\n");
        printf("*. Orqaga\n");
        printf("0. Bosh menyu\n");

        printf("\n");
        printf(">> ");
        scanf("%d", &tarif);

        switch (tarif)
        {
        case 1:
            printf(">>>>>>>> OSON <<<<<<<<\n");
            printf("\n");
            printf("1. OSON tarifiga o'tish\n");
            printf("2. Ma'lumot\n");
            printf("*. Orqaga\n");
            printf("0. Bosh menyu\n");

            printf("\n");
            printf(">> ");
            scanf("%d", &oson);

            switch (oson)
            {
            case 1:
                printf("Siz 'OSON' tarifiga muvaffaqiyatli o'tdingiz\n");
                string - 40000;
                break;
            case 2:
                printf("OSON 1 oylik abonent to'lovi - 40 000 so'm, O'zbekiston bo'ylab cheksiz qo'ng'iroqlar hamda 1 mb va SMS narxi 1 so'mdan. Kodi: *2*01#Batafsil: www.beeline.uz\n");
                break;
            // case '*':
            //     // Need to fix
            //     return case 1;
            //     break;
            case 0:
                main(0);
                break;
            default:
                printf("INVALID INPUT!");
                break;
            }
        case 2:
            printf(">>>>>>>> Hammasi ZO'R 1 <<<<<<<<\n");
            printf("\n");
            printf("1. Hammasi ZO'R 1 tarifiga o'tish\n");
            printf("2. Ma'lumot\n");
            printf("*. Orqaga\n");
            printf("0. Bosh menyu\n");

            printf("\n");
            printf(">> ");
            scanf("%d", &zor1);

            switch (zor1)
            {
            case 1:
                printf("Siz 'Hammasi ZO'R 1' tarifiga o'tdingiz\n");
                break;
            case 2:
                printf("Hammasi ZO'R 1, Abonent to'lovi oyiga 20 000 so'm. O'zbekiston bo'ylab 1500 daqiqa va 500 SMS, Internet uchun 3GB + 3GB tungi bonus. Kod: *2*3#.Batafsil: www.beeline.uz\n");
                break;

                // case '*':
                //     break;
            case 0:
                main(0);
                break;
            default:
                printf("INVALID INPUT!\n");
                break;
            }
        case 3:
            printf(">>>>>>>> Hammasi ZO'R 2 <<<<<<<<\n");
            printf("\n");
            printf("1. Hammasi ZO'R 2 tarifiga o'tish\n");
            printf("2. Ma'lumot\n");
            printf("*. Orqaga\n");
            printf("0. Bosh menyu\n");

            printf("\n");
            printf(">> ");
            scanf("%d", &zor2);

            switch (zor2)
            {
            case 1:
                printf("Siz 'Hammasi ZO'r 2' tarifiga o'tdingiz\n");
                break;
            case 2:
                printf("Hammasi ZO'R 2, abonent to'lovi oyiga 30 000 so'm; O'zbekiston bo'ylab 2500 daqiqa va 500 SMS; Internet uchun 5GB+5GB tungi bonus. Shuningdek, Beeline TV Telekanallaridan cheksiz foydalanish imkoniyati. Kod: *2*5#. Batafsil: www.beeline.uz\n");
                break;
                // case '*':
                //     break;
            case 0:
                main(0);
                break;
            default:
                printf("INVALID INPUT!\n");
                break;
            }
            break;
        case 4:
            printf(">>>>>>>> Status Silver <<<<<<<<\n");
            printf("\n");
            printf("1. 'Status Silver' tarifiga o'tish\n");
            printf("2. Ma'lumot\n");
            printf("*. Orqaga\n");
            printf("0. Bosh menyu\n");

            printf("\n");
            printf(">> ");
            scanf("%d", &status_silver);

            switch (status_silver)
            {
            case 1:
                printf("Siz 'Status Silver' tarifiga o'tdingiz\n");
                break;
            case 2:
                printf("STATUS SILVER, abonent to'lovi bir oyga 95 000 so'm. O'zbekiston bo'ylab cheksiz qo'ng'iroqlar va 2000 SMS; Internet uchun 30GB+30GB tungi bonus; Roumingda (VEON zonasi) uchun 100 MB. Shuningdek, Beeline Music va Beeline TV Telekanallar hamda Amediatekadan cheksiz foydalanish imkoniyati. Kod: *2*30#. Batafsil: www.beeline.uz\n");
                // case '*':
                //     break;
            case 0:
                main(0);
                break;
            default:
                printf("INVALID INPUT\n");
                break;
            }
        case 5:
            printf(">>>>>>>> Kunlik <<<<<<<<\n");
            printf("\n");
            printf("1. Kunlik tarifiga o'tish\n");
            printf("2. Ma'lumot\n");
            printf("*. Orqaga\n");
            printf("0. Bosh menyu\n");

            printf("\n");
            printf(">> ");
            scanf("%d", &kunlik);

            switch (kunlik)
            {
            case 1:
                printf("Kunlik tarifiga o'tdingiz\n");
                break;
            case 2:
                printf("Kunlik, abonent to'lovi kuniga 600 so'm. O'zbekiston bo'ylab kiritilgan chiqish qo'ng'iroqlari 60 daq/kun. Barcha yo'nalishga kiritilgan megabayt 60 MB/kun. Cashback* 10 foiz. Kod *110*580#. Batafsil: www.beeline.uz\n");
                // case '*':
                //     break;
            case 0:
                main(0);
                break;
            default:
                printf("INVALID INPUT!\n");
                break;
            }
        case 0:
            main(0);
            break;
        }
        //-------------Xizmatlar ------------//
    case 3:
        printf("1. Ishonchli to'lov\n");
        printf("2. PLUS 7\n");
        printf("3. Extra\n");
        printf("*. Orqaga\n");
        printf("0. Bosh menyu\n");

        printf("\n");
        printf(">> ");
        scanf("%d", &service);

        switch (service)
        {
        case 1:
            printf(">>>>>>>>> Ishonchli to'lov <<<<<<<<\n");
            printf("\n");
            printf("1. Foydalanish\n");
            printf("2. Ma'lumot\n");
            printf("*. Orqaga\n");
            printf("0. Bosh menyu\n");

            printf("\n");
            printf(">> ");
            scanf("%d", &ishonchli_tolov);

            switch (ishonchli_tolov)
            {
            case 1:
                printf("Siz 'Ishonchli to'lov' xizmatini muvaffaqiyatli uladingiz\n");
                break;
            case 2:
                printf("'Ishonchli to'lov' xizmatidan foydalanish uchun: *141# chaqiruv tugmasi. Xizmat narxi - taqdim etilgan mablag' miqdorining 20 foizni tashkil etadi. Aloqa xizmati uchun siz so’nggi 3 oy mobaynida o’rtacha qancha sarflaganingizdan kelib chiqqan holda hisob 2 500 so'mdan 50 000 so'mga qadar to’ldiriladi (hisobda kamida -1 000 so'm bo'lishi kerak). Ma'lumot uchun 064046 yoki 'https://bit.ly/3kQlDDK'\n");
                // case '*':
                // break;
            case 0:
                main(0);
                break;

            default:
                printf("INVALID INPUT!\n");
                break;
            }
        case 2:
            printf(">>>>>>>> PLUS 7 <<<<<<<<\n");
            printf("\n");
            printf("1. Faollashtirish (7 kunga 4900 so'm)\n");
            printf("2. Ma'lumot\n");
            printf("*. Orqaga\n");
            printf("0. Bosh menyu\n");

            printf("\n");
            printf(">> ");
            scanf("%d", &plus7);

            switch (plus7)
            {
            case 1:
                printf("Siz 'PLUS 7' xizmatini muvaffaqiyatli uladingiz\n");
                break;
            case 2:
                printf("'PLUS 7' paketida 300 daqiqa, 300 SMS va 300 MB taqdim etiladi! 7 kunga atigi 4900 so'mga! Manfaatli muloqotdan foydalaning! Ulanish uchun *110*63#. Batafsil: www.beeline.uz\n");
            // case '*':
            //     break;
            case 0:
                main(0);
                break;
            default:
                printf("INVALID INPUT!\n");
                break;
            }
        case 3:
            printf(">>>>>>>> EXTRA <<<<<<<<\n");
            printf("\n");
            printf("1. '200 MB va 200 daqiqa' -  10000 so'm\n");
            printf("2. '400 MB va 400 daqiqa' - 18000 so'm\n");
            printf("3. '600 MB va 600 daqiqa' - 25000 so'm\n");
            printf("4. Ma'lumot\n");
            printf("*. Orqaga\n");
            printf("0. Bosh menyu\n");

            printf("\n");
            printf(">> ");
            scanf("%d", &extra);

            switch (extra)
            {
            case 1:
                printf("Siz 'Extra 200 MB va 200 daqiqa' xizmatini faollashtirdingiz\n");
                break;
            case 2:
                printf("Siz 'Extra 400 MB va 400 daqiqa' xizmatini faollashtirdingiz\n");
                break;
            case 3:
                printf("Siz 'Extra 600 MB va 600 daqiqa' xizmatini faollashtirdingiz\n");
                break;
            case 4:
                printf("'Extra 200 MB va 200 daqiqa' *110*500# - 10000 so'm. 'Extra 400 MB va 400 daqiqa' *110*501# - 18000 so'm. 'Extra 600 MB va 600 daqiqa' *110*502# - 25000 so'm. Batafsil: www.beeline.uz\n");
                // case '*':
                //     break;
            case 0:
                main(0);
                break;
            default:
                printf("INVALID INPUT!\n");
                break;
            }

        // case '*':
        //     break;
        case 0:
            main(0);
            break;
        default:
            printf("INVALID INPUT!\n");
            break;
        }
        //---------Internet -------//
    case 4:
        printf("\n");
        printf("1. 30 kunlik paketlar\n");
        printf("2. 7 kunlik paketlar\n");
        printf("3. 1 kunlik paketlar\n");
        printf("4. 4G paketlar\n");
        printf("*. Orqaga\n");
        printf("0. Bosh menyu\n");

        printf("\n");
        printf(">> ");
        scanf("%d", &internet);

        switch (internet)
        {
        case 1:
            printf("1. 'Internet-paket 1' 1GB. Narxi - 10 000 so'm\n");
            printf("2. 'Internet-paket 5GB' 5GB. Narxi - 25 000 so'm\n");
            printf("3. 'Internet-paket 10GB' 10GB. Narxi - 45 000 so'm\n");
            printf("4. 'Internet-paket 30GB' 30GB. Narxi - 110 000 so'm\n");
            printf("5. 'Internet-paket 50GB' 50GB. Narxi - 140 000 so'm\n");
            printf("*. Orqaga\n");
            printf("0. Bosh menyu\n");

            printf("\n");
            printf(">> ");
            scanf("%d", &oylik);

            switch (oylik)
            {
            case 1:
                printf("'Internet-paket 1' faollashtirildi\n");
                break;
            case 2:
                printf("'Internet paket 5' faollashtirildi\n");
                break;
            case 3:
                printf("'Internet-pakert 10' faollashtirildi\n");
                break;
            case 4:
                printf("'Internet-pakert 30' faollashtirildi\n");
                break;
            case 5:
                printf("'Internet-pakert 50' faollashtirildi\n");
                break;
            // case '*':
            //     break;
            case 0:
                main(0);
                break;
            default:
                printf("INVALID INPUT!\n");
                break;
            }

            break;
        case 2:
            printf("1. 'Internet-paket 500', 500 MB  7 kunga. Narxi - 8 000 so'm\n");
            printf("2. 'Internet-paket 1', 1 GB  7 kunga. Narxi - 12 000 so'm\n");
            printf("3. 'Internet-paket 3', 3 GB  7 kunga. Narxi - 27 000 so'm\n");
            printf("4. 'Internet-paket 5', 5 GB  7 kunga. Narxi - 45 000 so'm\n");
            printf("*. Orqaga\n");
            printf("0. Bosh menyu\n");

            printf("\n");
            printf(">> ");
            scanf("%d", &haftalik);

            switch (haftalik)
            {
            case 1:
                printf("'Internet-paket 500' faollashtirildi\n");
                break;
            case 2:
                printf("'Internet-paket 1' faollashtirildi\n");
                break;
            case 3:
                printf("'Internet-paket 3' faollashtirildi\n");
                break;
            case 4:
                printf("'Internet-paket 5' faollashtirildi\n");
                break;
                // case '*':
                //     break;
            case 0:
                main(0);
                break;

            default:
                printf("INVALID INPUT!\n");
                break;
            }
        case 3:
            printf("1. 'Internet-paket 100', 100 MB  1 kunga. Narxi - 5 000 so'm\n");
            printf("2. 'Internet-paket 300', 300 MB  1 kunga. Narxi - 10 000 so'm\n");
            printf("3. 'Internet-paket 500', 500 B  1 kunga. Narxi - 15 000 so'm\n");
            printf("4. 'Internet-paket 1', 1 GB  1 kunga. Narxi - 15 000 so'm\n");
            printf("*. Orqaga\n");
            printf("0. Bosh menyu\n");

            printf("\n");
            printf(">> ");
            scanf("%d", &kun);

            switch (kun)
            {
            case 1:
                printf("'Internet-paket 500' faollashtirildi\n");
                break;
            case 2:
                printf("'Internet-paket 1' faollashtirildi\n");
                break;
            case 3:
                printf("'Internet-paket 3' faollashtirildi\n");
                break;
            case 4:
                printf("'Internet-paket 5' faollashtirildi\n");
                break;
                // case '*':
                //     break;
            case 0:
                main(0);
                break;

            default:
                printf("INVALID INPUT!\n");
                break;
            }
        case 4:
            printf("1. 4G internet-paketni ulash\n");
            printf("2. Xizmat haqida ma'lumot\n");
            printf("*. Orqaga\n");
            printf("0. Bosh menyu\n");

            printf("\n");
            printf(">>  ");
            scanf("%d", &tort_G);

            switch (tort_G)
            {
            case 1:
                printf("'4G internet-paket' xizmatiga ulandingiz\n");
                break;
            case 2:
                printf("'4G intwernet-paket' xizmati 30 kun uchun 30 GB faqatgina 4G tarmog'i uchun beriladi. Xizmat narxi: 60 000 so'm. Batafsil: www.beeline.uz\n");
                break;
            // case *:
            //     break;
            case 0:
                main(0);
                break;

            default:
                printf("INVALID INPUT!\n");
                break;
            }
        // case '*':
        //     break;
        case 0:
            main(0);
            break;
        default:
            printf("INVALID INPUT!\n");
            break;
        }
    default:
        printf("INVALID INPUT!\n");
        break;
    }
    return 0;
}