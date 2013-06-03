#include <stdio.h>

typedef struct Bbb{
    int ida;
    int idb;
}Bbb;
typedef struct Aaa{
    struct Bbb bStru;
}Aaa;

void foo(Aaa *pAaa)
{
    pAaa->bStru.ida = 111;
    pAaa->bStru.idb = 222;
}

int main()
{
    struct Aaa aStru={
        {0, 0}
    };
    foo((Aaa *)&aStru);

    printf("aStru.bStru.ida[%d]\n", aStru.bStru.ida);
    printf("aStru.bStru.idb[%d]\n", aStru.bStru.idb);

    return 0;
}
