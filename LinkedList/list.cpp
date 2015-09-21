void deleteafter (list *l, address *p, address prec)
{
    *p = next(prec);
    next(prec) = next(*p);
    next(*p) = nil;
    dealokasi(*p);
}

address findelm(list l, infotype x)
{
    address p;
    int a=0;

    p=first(l);
    while ( p != nil)
    {
        if (strcmp(info(p).id,x.id) == 0)
        {
            a = 1;
            break;
        }
        else
        {
            p = next(p);
        }
    }
    if (a != 1)
    {
        p = nil;
    }
    return p;
}

void viewlist (list l)
{
    address p;

    p = first(l);
    if (p == nil)
    {
        cout<<"List belum tersedia";
    }
    else
    {
        while (p != nil)
        {
            cout<<"\nID : "<<info(p).id<<endl;
            cout<<"Nama : "<<info(p).nama<<endl;
            cout<<"Golongan Staff : "<<info(p).golongan<<endl;

            p = next(p);
        }
    }


}
