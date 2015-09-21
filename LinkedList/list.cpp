void createlist (list *l)
{
    first(*l) = nil;
}



void dealokasi (address p)
{
    free(p);
}

address alokasi (infotype x)
{
    address p;
    p = (address) malloc (sizeof(elmlist));
    info(p) = x;
    next(p) = nil;
    return p;
}

void insertfirst (list *l, address p)
{
    if (first(*l) == nil)
    {
        first(*l) = p;
    }
    else
    {
        next(p) = first(*l);
        first(*l) = p;
    }
}

void insertafter (list *l, address p, address prec)
{
    next(p) = next(prec);
    next(prec) = p;
}

void deletefirst (list *l, address *p)
{
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
        *p = first(*l);
        first(*l) = next(first(*l));
        next(*p) = nil;
        dealokasi(*p);
    }
}
