#include<stdio.h>
struct point{
	float x;
        float y;	
};

struct point newpoint(float x, float y){
      struct point p;
      p.x = x;
      p.y = y;
      return p;
}

struct point addpoints(struct point p1, struct point p2){
       //struct point x;
       //struct point y;
       struct point results;
       results.x = p1.x + p2.x;
       results.y = p1.y + p2.y;
       return results;
}

int is_inside(struct point p1){     
      if ( ( p1.x * p1.x + p1.y * p1.y) <= 1 )
	      return 1;
      else
	      return 0;
}

//Define a function that takes an array of points and returns the point with the smallest x value.
struct point smallest_point(struct point p1[], int size){
       struct point temp;
       temp.x = p1[0].x;
       temp.y = p1[0].y;	       
       for(int i = 0; i < size; i++ )
       {
	       if(p1[i].x < temp.x)
	       {
		       temp.x = p1[i].x;
	               temp.y = p1[i].y;
      	       }      
       }
       return temp;
}

int main()
{ 
	struct point p1[] = {

	         	newpoint( 0.3 , 0.4 ),
			newpoint( 0.4 , 0.5 ),
			newpoint( 0.1 , 0.2 ),
                        newpoint( 0.5 , 0.6 ),
			newpoint( 0.9, 0.9 )	
	};
		        	
	struct point results = addpoints(p1[0],p1[1]);
        // int inside_results = is_inside(p1[0]);
	//int inside_results = is_inside(p1[4]);
        
        printf("points 1 :( %f, %f)\n", p1[0].x , p1[0].y);
        printf("points 2 :( %f, %f)\n", p1[1].x , p1[1].y);
	printf("points 3 :( %f, %f)\n", p1[2].x , p1[2].y);
        printf("points 4 :( %f, %f)\n", p1[3].x , p1[3].y);
	printf("points 5 :( %f, %f)\n", p1[4].x , p1[4].y);

        printf("point1 + point2 = results :( %f, %f)\n", results.x, results.y);
	
	int inside_results1 = is_inside(p1[0]);
	printf("is_inside_results : %d\n",inside_results1);

	int inside_results2 = is_inside(p1[4]);
        printf("is_inside_results : %d\n",inside_results2);

        int size = sizeof(p1)/sizeof(p1[0]);
	struct point smallest = smallest_point(p1,size);
	printf("the smalleset point is ( %f, %f) :", smallest.x, smallest.y);
        
	return 0;
}
