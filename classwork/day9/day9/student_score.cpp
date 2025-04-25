#include<iostream>
int main()
{
	int id_01,id_02,id_03,id_04,id_05;
	int slno;
	char name_1[10], name_2[10], name_3[10], name_4[10], name_5[10];

	int m1_1, m2_1, m3_1, m4_1,m4_1;
	int m1_2, m2_2, m3_2, m4_2, m4_2;
	int m1_3, m2_3, m3_3, m4_3, m4_3;
	int m1_4, m2_4, m3_4, m4_4, m4_4;
	int m1_5, m2_5, m3_5, m4_5, m4_5;
	float avg1,avg2,avg3,avg4,av5;

	scanf("%d%f%f%f%%f",&id_01,&m1_1,&m2_1,&m3_1,&m4_1,&m4_1);
	avg1 =( m1_1 + m2_1 + m3_1 + m4_1 + m4_1) / 4.0;
	slno = 1;
	for (int i = 0;i < 30;i++)
		printf("=");
		printf("\n");
		printf("slno| id | name");
		for(int i=0;i<30;i++)
			printf("=");
		printf("\n%03d|%03d\t|",slno++)

	return 0;

}