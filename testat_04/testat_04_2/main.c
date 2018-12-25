#include <stdio.h>
#include <stdlib.h>

struct s_engine{
    int power;
    int volume;
};
typedef struct s_engine engine;

struct s_car{
    char brand[30];
    engine engine;
    int speed;
    int size[3];

};
typedef struct s_car pt_car;


int main(void) {
    //struct s_car x = {"BMW",200,300,300,{2000,1400,1300}};
    pt_car *car1, *car2;
    car1=(pt_car*)malloc(sizeof(pt_car));
    car2=(pt_car*)malloc(sizeof(pt_car));
    //1st Car
    printf("Enter Brand Name:   ");
    scanf("%s", car1->brand);
    printf("Enter Power:   ");
    scanf("%d", &car1->engine.power);
    printf("Enter Engine Volume:   ");
    scanf("%d", &car1->engine.volume);
    printf("Enter top speed:   ");
    scanf("%d", &car1->speed);
    printf("Enter length:   ");
    scanf("%d", &car1->size[0]);
    printf("Enter width:   ");
    scanf("%d", &car1->size[1]);
    printf("Enter height:   ");
    scanf("%d", &car1->size[2]);

    //2nd Car
    printf("Enter Brand Name:   ");
    scanf("%s", car2->brand);
    printf("Enter Power:   ");
    scanf("%d", &car2->engine.power);
    printf("Enter Engine Volume:   ");
    scanf("%d", &car2->engine.volume);
    printf("Enter top speed:   ");
    scanf("%d", &car2->speed);
    printf("Enter length:   ");
    scanf("%d", &car2->size[0]);
    printf("Enter width:   ");
    scanf("%d", &car2->size[1]);
    printf("Enter height:   ");
    scanf("%d", &car2->size[2]);

    printf("\n Car no. 1:\n Brand: \t\t%s\n Power [PS]: \t%d\n Volume [cm^3]: %d\n Speed [km/h]: \t%d\n Length [mm]:\t%d\n Width [mm]:\t%d\n Height [mm]:\t%d\n\n\n",car1->brand,car1->engine.power,car1->engine.volume,car1->speed,car1->size[0],car1->size[1],car1->size[2]);

    printf("\n Car no. 2:\n Brand: \t\t%s\n Power [PS]: \t%d\n Volume [cm^3]: %d\n Speed [km/h]: \t%d\n Length [mm]:\t%d\n Width [mm]:\t%d\n Height [mm]:\t%d\n\n\n",car2->brand,car2->engine.power,car2->engine.volume,car2->speed,car2->size[0],car2->size[1],car2->size[2]);
}
