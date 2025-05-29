#include <stdio.h>

struct Point {
    float x;
    float y;
};

struct Rectangle {
    struct Point lower_left;   
    struct Point upper_right;  
};

struct Rectangle newRectangle(struct Point lower_left, struct Point upper_right) {
    struct Rectangle rect;
    rect.lower_left = lower_left;   
    rect.upper_right = upper_right;
    return rect;                    
}

float get_area(struct Rectangle rect) {
    float width = rect.upper_right.x - rect.lower_left.x; 
    float height = rect.upper_right.y - rect.lower_left.y; 
    return width * height; 
}

float is_inside_rect(struct Point p1 , struct Rectangle rect1){
    if( (p1.x >= rect1.lower_left.x) && (p1.x <= rect1.upper_right.x) &&
		   ( p1.y <= rect1.upper_right.y) && (p1.y >= rect1.lower_left.y))
	    return 1;
    else
	    return 0;

}

float smallest_area(struct Rectangle arr[],int size)
{
       float area_values[size];	
       for(int i = 0; i < size; i++)
       {
             area_values[i] = get_area(arr[i]);
	     //printf("%f\t",area_values[i]);
       }
      float temp = area_values[0];
      for(int j = 0 ; j < size ; j++ )
      {
             if(area_values[j]<temp)
             temp = area_values[j]; 
      } 
         return temp;
}	

int main() {

    struct Point p1 = {0.0, 0.0}; 
    struct Point p2 = {4.0, 5.0}; 
    struct Point p3 = {1.0, 1.0}; 
    struct Point p4 = {3.0, 3.0}; 
    struct Point p5 = {2.0, 2.0}; 
    struct Point p6 = {6.0, 6.0};

    struct Rectangle rect1 = newRectangle(p1, p2); 
    struct Rectangle rect2 = newRectangle(p3, p4); 
    struct Rectangle rect3 = newRectangle(p5, p6);
   // struct Rectangle Area = get_area(rect1);
    printf("Rectangle 1:\n");
    printf("Lower Left: (%f, %f)\n", rect1.lower_left.x, rect1.lower_left.y);
    printf("Upper Right: (%f, %f)\n", rect1.upper_right.x, rect1.upper_right.y);

    printf("Rectangle 2:\n");
    printf("Lower Left: (%f, %f)\n", rect2.lower_left.x, rect2.lower_left.y);
    printf("Upper Right: (%f, %f)\n", rect2.upper_right.x, rect2.upper_right.y);
    
    printf("Rectangle 3:\n");
    printf("Lower Left: (%f, %f)\n", rect3.lower_left.x, rect3.lower_left.y);
    printf("Upper Right: (%f, %f)\n", rect3.upper_right.x, rect3.upper_right.y);

    printf("Rectnagle Area1: %f\n", get_area(rect1));
    printf("Rectnagle Area2: %f\n", get_area(rect2));
    printf("Rectnagle Area3: %f\n", get_area(rect3));

    printf("case1: is_inside_rect = %f\n",is_inside_rect(p5, rect1));
    printf("case2: is_inside_rect = %f\n",is_inside_rect(p6, rect1));
       
    struct Rectangle arr[]= { 
	                 rect1,
    			 rect2,
			 rect3,
                        }; 
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("the smallest area for 3 rectangle is %f\n",smallest_area(arr,size));
    return 0;
}
