#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>
#include "shapes.h"

int main(){
	Rectangle Rect;
	
	Rect.setHeight(7);
	Rect.setWidth(5);
	
    Triangle Tri;
    
    Tri.setHeight(4);
    Tri.setWidth(4);
    
    circle cir ;
    cir.setWidth(4);
	
	cout<<"TotalRect area:"<<Rect.area();
	cout<<endl;
	cout<<"TotalTri area"<<Tri.area();
	cout<<endl;
	cout<<"Totaliri area"<<cir.area();
	return 0;
}
