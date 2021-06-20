/*
     Write a program to print 24 Hours of a date with suitable suffixes such as AM, PM, Noon, Midnight.
*/
  #include<stdio.h>
  void main()
  {
    int i;
    printf("\n   **************** 12_midnight ****************\n\n");
    for(i=1;i<12;i++)
    {
          printf("%02d:00 AM\n",i);
    }
    printf("\n   **************** 12-Noon ****************\n\n");
    for(i=1;i<12;i++)
    {
          printf("%02d:00 PM\n",i);
    }
  }
