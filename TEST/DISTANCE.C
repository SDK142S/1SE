/*
    Write a program to receive values of latitude (L1,L2) and longitude (G1,G2) in degrees of two places on earth
    and output the distance(D) in nautical miles.
*/

  #include<stdio.h>
  #include<math.h>
  int main()
  {
    float L1,L2,G1,G2,D,L1rad,L2rad,G1rad,G2rad;
    printf("ENTER THE VALUE OF L1: ");
    scanf("%f",&L1);
    printf("ENTER THE VALUE OF L2: ");
    scanf("%f",&L2);
    printf("ENTER THE VALUE OF G1: ");
    scanf("%f",&G1);
    printf("ENTER THE VALUE OF G2: ");
    scanf("%f",&G2);

    //Degree to radian conversion

    L1rad=L1*(3.14/180);
    L2rad=L2*(3.14/180);
    G1rad=G1*(3.14/180);
    G2rad=G2*(3.14/180);

    //Distance formula

    D=3963*acos( sin(L1rad) * sin(L2rad) + cos(L1rad) * cos(L2rad) * cos( G2rad - G1rad ));
    printf("Distance in nautical miles = %f",D);
    printf("\n");

  }
