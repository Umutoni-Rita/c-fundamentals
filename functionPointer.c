#include <stdio.h>

int calculateArea(int width, int length) {
	int area = width * length;
	printf("The area of the rectangle is %d", area);
}
int main() {
	int(*ptr)();
	int w, l;
	
	printf("Enter the width and length of the rectangle: ");
	scanf("%d%d", &w, &l);
	
	ptr = calculateArea;
	ptr(w, l);
	
	return 0;
}

