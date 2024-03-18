//// face value, place value 

 #include<stdio.h>

 int main()

  {

    int a,b,c,d,num;

    printf("enter 4 digit  no  :");
	scanf("%d",&num);

	int temp = num;
	d = num%10;
	num = num/10;

	c = num%10;
	num = num/10;

	b = num%10;
	num = num/10;

	a = num;
    
	printf (" face values : %d\t %d\t %d\t %d\n",a, b , c , d);
	printf("%d  = %d*1000 + %d*100 + %d*10 + %d\n",temp , a ,b , c, d);
	printf("reverse no  : %d%d%d%d\n", d, c , b , a);

	return 0;

}	


























