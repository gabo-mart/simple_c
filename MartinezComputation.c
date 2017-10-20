////////////////////////////////////////////////////////////////////////////////
//INCLUDES
#include <stdio.h>
#define M_PI 3.14159265358979323846

int main(void)
{
	//Add a prompt for the number of cylinders to sum. Make sure to use the control
	//symbol for integers. [2 points]
	int qty;
	float height, radius, vol, total_vol = 0;
	
	
	printf("Number of Cylinders to Sum: ");
	scanf("%d", &qty);
	
	//Create a loop based on the number of cylinders the user enters. [2 points]
	for(int i = 0; i < qty; i++) {
	//    Within the loop, prompt for height and radius parameters (allow floating
	//    point numbers), and calculate the volume for that particular cylinder.
	//    [4 points]

	    printf("Start of Cylinder Calculation");
	    printf("Enter the height: ");
	    scanf("%f", &height);
	    
	    printf("Enter the radius: ");
	    scanf("%f", &radius);
	    
	    vol = height * radius * radius * M_PI;
	    total_vol += vol;
	}

	//Display the total volume sum back to the user. Make sure to use the right control
	//symbol. [2 points]
	
	printf("Total Volume: %f", total_vol);

	return 0;
}