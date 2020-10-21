#include <stdio.h>
#include <stdlib.h>

typedef struct elem
{
    int x;
    struct elem *nast;
} el;

typedef el *wel;

wel h,s;

//zwraca tez wskanik
wel addToStart(wel l, int y)
{
    wel q = (wel)malloc(sizeof(el));
    //sprawdzenie czy faktycznie zaalokola
    if(q!==NULL)
    {
        q->x=y;
        q->nast=l;
    }
    else
    {
        printf("Nie udalo sie przydzielic pamieci");
        //zwraca co samo co przyjela l = l
        return l;
    }

    return q;
}

//teraz pokazuje adres h a nie wartosc
void addToStart2(wel *l, iny y)
{
    wel q = (wel)malloc(sizeof(el));
    if(q!==NULL)
    {
        q->x = y;
        q->nast = *l;
        *l = q;
    }
    else
    {
        printf("Nie udalo sie przydzielic pamieci");
    }
}

h=addToStart(h,17);

h=addToStart2(&h,17);

wel addToEnd(wel l, int y)
{
    wel r=l;
    wel q = (wel)malloc(sizeof(el));
    if(q!==NULL)
    {
        q->x=y;
        q->nast=NULL;

        if(r==NULL)
        {
            return q;
        }
        else
        {
            while(r->nast != NULL)
            {
                r=r->nast;
            }
            r->nast = q;
        }
    }
    else
    {
        printf("Nie udalo sie przydzielic pamieci");
        return l;
    }
    return l;
}

//napisz te funkcje i wywola funkcje dodaj1
void addToEnd2(wel *l, int y)
{
    wel *r = l;
    wel q = (wel)malloc(sizeof(el));
    if(q != NULL)
    {
        q->x=y;
        q->nast=NULL;

        if(r == NULL)
        {
            addToStart2(&l,y);
        }
        else
        {
            while(r->nast != NULL)
            {
                r = &( (*r)->nast );
            }
            r->nast = q;
            l = r;
        }
    }
    else
    {
        printf("Nie udalo sie przydzielic pamieci");
    }
}

int main()
{
    wel h,s;
    h=(wel)malloc(sizeof(el));
    s=(wel)malloc(sizeof(el));

    h->x=135;
    s->x=200;
    h->nast=s;
    s->nast=NULL;
    s=0;

    return 0;
}
