#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>
#include "shapes.h"

const char *usage = "Usage: a.out [type] [num1] [num2] \n"
		    "	type - circle, rectangle, triangle \n"
		    "	num1 - width or radius \n"
		    "	num2 - length \n";

int main() 
{  string type;
   double w=0,h=0,R=0;
   Shape *s;
   Rectangle r;
   Triangle t;
   circle c;
   cout<<"tpye your shape"<<endl;
   cin >>type;
   cout<<"type widge and hight or radius"<<endl;
   if(type=="rectangle"){
   	cin>>w>>h;
   	s=&r;
   }
   else if (type=="triangle"){
   	cin>>w>>h;
   	s=&t;
   }
   else if (type=="circle"){
   	cin>>R;
   	s=&c;
   }
   s->setHeight(h);
   s->setWidth(w);
   s->setradius(R);
   cout<<"area="<<s->area()<<endl;
	return 0;
}
