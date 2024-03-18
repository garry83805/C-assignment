///// convert temp 

#include<stdio.h>

int main()

{
  /// celsius to farenheit

  float c;

  printf("Enter temp in celsius  :");
  scanf("%f",&c);

  float f = (1.8)*c +32;

  printf ("f = %f\n",f);

  float d;
  printf("enter temp in farehneit  :");
  scanf ("%f",&d);
  
  float k =(0.55) *(d-32.0);

  printf("celsius = %f\n",k);
  return 0;

}



























