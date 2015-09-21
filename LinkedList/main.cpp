#include "ASD.h"


using namespace std;

int main()
{
    address p,prec,q = nil;
    infotype x;
    list l;

    int pil,pil1;

    createlist(&l);

    do
    {
        system("cls");
        cout<<"1. Masukan Data "<<endl;
        cout<<"2. Lihat Data "<<endl;
        cout<<"3. Hapus Data "<<endl;
        cout<<"4. Cari Data "<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"\n masukan pilihan  : ";
        cin>>pil;
        switch (pil)
        {
        case 1:
balik:
            system("cls");
            cout<<"Masukkan ID : ";
            cin>>x.id;

            cout<<"Masukkan Nama : ";
            cin>>x.nama;
            cout<<"Masukkan golongan staff : ";
            cin>>x.golongan;

            system("cls");
            cout<<"1. Insert First"<<endl;
            cout<<"2. Insert Last"<<endl;
            cout<<"3. Insert After"<<endl;
            cout<<"\nMasukan pilihan : ";
            cin>>pil1;
            switch (pil1)
            {
            case 1:
                p = alokasi(x);
                insertfirst(&l,p);
                break;
            case 2:
                p = alokasi(x);
                insertlast(&l,p);
                break;
            case 3:
                system("cls");
                p = alokasi(x);
                cout<<"Masukkan ID After : ";
                cin>>x.id;
                prec = findelm(l,x);
                insertafter(&l,p,prec);
                break;
            default :
                cout<<"\nNilai tidak valid";
                getch();
                break;
            }
            break;
        case 2:
            system("cls");
            viewlist(l);
            getch();
            break;
        case 3:
            system("cls");
            cout<<"1. Delete First"<<endl;
            cout<<"2. Delete Last"<<endl;
            cout<<"3. Delete After"<<endl;
            cout<<"\nMasukan pilihan anda : ";
            cin>>pil1;
            switch (pil1)
            {
            case 1:
                system("cls");
                deletefirst(&l,&p);
                cout<<"Horee berhasil";
                getch();
                break;
            case 2:
                system("cls");
                deletelast(&l,&p);
                cout<<"cieee berhasil hapusnya cieee";
                getch();
                break;
            case 3:
                system("cls");
                cout<<"Masukkan ID After : ";
                cin>>x.id;
                prec = findelm(l,x);
                deleteafter(&l,&p,prec);
                cout<<"berhasil di hapus";
                getch();
                break;
            default :
                cout<<"\nMasukan tidak valid";
                getch();
                break;
            }
            break;
        case 4:
            system("cls");
            cout<<"Masukkan ID yang ingin anda cari : ";
            cin>>x.id;
            p = findelm(l,x);
            cout<<"\nID : "<<info(p).id<<endl;
            cout<<"Nama : "<<info(p).nama<<endl;
            cout<<"Golongan Staff : "<<info(p).golongan<<endl;

            getch();
            break;
        case 5:
            return 0;
            break;
        default:
            system("cls");
            cout<<"invalid Input";
            getch();
            break;
        }
    }
    while (pil != 5);


}
