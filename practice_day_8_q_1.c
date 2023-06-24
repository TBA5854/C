//Given : A person walks at 21kmph and 24 kmph fir 1st half and second half of his journey , calculate total distance travelled
#include<stdio.h>
int distance_convertor(int time , int speed)
{
	int distance = time * speed;
	return distance;
}
int main()
{
	int s1=21;
	int s2=24;
	int t1 = 5;
	int t2 =5;
	int d1=distance_convertor(t1 , s1);
	int d2=distance_convertor(t2,s2);
	printf("Total distance travelled is distance travelled in 1st half + distance travelled in 2nd half is %d",d1+d2);
}