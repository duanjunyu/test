#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define WHITE 1
#define RED 1

typedef struct _Apple
{
    void (*print_apple)();
}Apple;

typedef struct _Grape
{
    void (*print_grape)();
}Grape;

typedef struct _FruitShop  
{  
    Apple* (*sell_apple)();  
    Grape* (*sell_grape)();  
}FruitShop;  

void print_white_apple()
{
        printf("white apple!\n");
}

void print_red_apple()
{
        printf("red apple!\n");
}

void print_white_grape()
{
        printf("white grape!\n");
}

void print_red_grape()
{
        printf("red grape!\n");
}

Apple* sell_white_apple()
{
    Apple* pApple = (Apple*) malloc(sizeof(Apple));
    assert(NULL != pApple);

    pApple->print_apple = print_white_apple;
    return pApple;
}

Apple* sell_red_apple()
{
    Apple* pApple = (Apple*) malloc(sizeof(Apple));
    assert(NULL != pApple);

    pApple->print_apple = print_red_apple;
    return pApple;
}

Grape* sell_white_grape()
{
    Grape* pGrape = (Grape*) malloc(sizeof(Grape));
    assert(NULL != pGrape);

    pGrape->print_grape = print_white_grape;
    return pGrape;
} 

Grape* sell_red_grape()
{
    Grape* pGrape = (Grape*) malloc(sizeof(Grape));
    assert(NULL != pGrape);

    pGrape->print_grape = print_red_grape;
    return pGrape;
} 

FruitShop* create_fruit_shop(int color)
{
    FruitShop* pFruitShop = (FruitShop*) malloc(sizeof(FruitShop));
    assert(NULL != pFruitShop);

    if(WHITE == color)
    {
        pFruitShop->sell_apple = sell_white_apple;
        pFruitShop->sell_grape = sell_white_grape;
    }
    else
    {
        pFruitShop->sell_apple = sell_red_apple;
        pFruitShop->sell_grape = sell_red_grape;
    }

    return pFruitShop;
}

int main()
{
    FruitShop *newfruitshop;
    Apple *newApple;
    Grape *newGrape;

    newfruitshop = create_fruit_shop(WHITE);

    newGrape = (*(newfruitshop->sell_grape))();
    newApple = (*(newfruitshop->sell_apple))();

    (*(newGrape->print_grape))();
    (*(newApple->print_apple))();

    
    return 0;
}
