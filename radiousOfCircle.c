#include <stdio.h>
class Circle
	{
		int r;
		public:
			Circle(int R)
			{
				r=R;
			}
			displayRadius()
			{
				printf("the radius is %d",r);
			}
	};
	int main()
		{
			Circle c(4);
		    c.displayRadius();
		}
		
		