void insertlast (list *l, address p)
{
    address q;

    if (first(*l) == nil)
    {
        first(*l) = p;
    }
    else
    {
        q = first(*l);
        while (next(q) != nil)
        {
            q = next(q);
        }
        next(q) = p;
    }
}

void deletelast (list *l, address *p)
{
    address q;

    if (first(*l) == nil)
    {
        cout<<"List belum tersedia";
    }
    else if (next(first(*l)) == nil)
    {
        *p=first(*l);
        first(*l) = nil;
        dealokasi(*p);
    }
    else
    {
        q=first(*l);
        while (next(next(q)) != nil)
        {
            q=next(q);
        }
        *p = next(q);
        next(q) = nil;
        dealokasi(*p);
    }
}
