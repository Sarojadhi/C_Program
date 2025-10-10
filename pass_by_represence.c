#include<iostream>
using namespace std;
class Distance
{
	private:
		int inch;
		int feet;
		public:
			Distance(int x, int y)
			{
				feet=x;
				inch=y;
			}
			Distance()
			{
			}
			int addDistance(Distance *d1,Distance *d2)
			{
				feet=d1->feet+d2->feet;
				inch=d1->inch+d2->inch;
			}
			int display()
			{
					printf("(%d,%d)",feet,inch);
			}
	};
		int main()
		{
			int x,y;
			Distance d1(2,8),d2(4,2),d3;
			d3.addDistance(&d1,&d2);
			printf("D1=");
	        d1.display();
        }
