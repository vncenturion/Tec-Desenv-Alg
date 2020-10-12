/*
URI 1017
Input
The input file contains two integers. The first one is the spent time in the trip (in hours). The second one is the average speed during the trip (in Km/h).
Output
Print how many liters would be needed to do this trip, with three digits after the decimal point.
*/

#include <stdio.h>

int main(){
    
    int tempo,velMed;
    double Distancia,Consumo;
    
    scanf("%d",&tempo);
    scanf("%d",&velMed);
    
    Distancia = tempo * velMed;
    Consumo = Distancia / 12; 
    
    printf("%.3lf\n",Consumo);
    
return 0;
}