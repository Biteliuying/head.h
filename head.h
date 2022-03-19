#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415
void swap(int* pdest1, int* pdest2)
{
	int temp;
	temp = *pdest1;
	*pdest1 = *pdest2;
	*pdest2 = temp;
}