#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

typedef struct Nos
{
    int info;
    Nos *dir;
    Nos *esq;
}NoAvr;

typedef struct Avr
{
    NoAvr* raiz;
}Avr;

Avr* CriaArvore()
{
    Avr *aux;
    aux= (Avr*)malloc(sizeof(Avr));
    aux-> raiz = NULL;
    return aux;
}

int VaziaArvore(Arv* A)
{
    if(A-> raiz == NULL)
    {
        return 1;
    }
    return 0;
}

NoAvr* aux_InsereArv(NoAvr *A, int num)
{
    NoAvr *Pai;
    NoAvr *novo = (NoAvr)malloc(sizeof(NoAvr));
    novo->info=num;
    novo->esq=NULL;
    novo->dir=NULL;

    if(A == NULL)
    {
        return novo;
    }
    else
    {
        Pai = A;
        flag = 0;
        while(flag == 0)
        {
            if(Pai->info<num)
            {
                if(Pai->dir==NULL)
                {
                    Pai->info = novo;
                    flag = 1;
                }
                else

                {
                    Pai->dir=Pai;
                }
            }
            else(Pai->info>num)
            {
                if(Pai->esq==NULL)
                {
                    Pai->info = novo;
                    flag = 1;
                }
                else

                {
                    Pai->esq=Pai;
                }
            }
        }
    }
    return A;
}

void InsereAvr(Avr *Ar, int num)
{
    Ar->raiz=aux_InsereArv(Ar->raiz,num);
}

void VerificaValor(Avr *Ar, int num)
{
    Ar->raiz=aux_Verifica(Avr *Ar, int num);
}

NoAvr* aux_VerificaValor(NoAvr *A, int num)
{
    NoAvr *Pai;
    if(A == NULL)
    {
        printf("\nÁrvore vazia, sem elementos para a busca.");
        return;
    }
    else
    {
        Pai = A;
        flag = 0;
        while(flag == 0)
        {
            if(Pai->info<num)
            {
                if(Pai->dir==NULL)
                {
                    Pai->info = novo;
                    flag = 1;
                }
                else

                {
                    Pai->dir=Pai;
                }
            }
            else(Pai->info>num)
            {
                if(Pai->esq==NULL)
                {
                    Pai->info = novo;
                    flag = 1;
                }
                else

                {
                    Pai->esq=Pai;
                }
            }
        }
    }
    return A;
}
}

#endif // ARVORE_H_INCLUDED
