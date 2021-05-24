const int two = 2;
const float pi = 3.1415;

/* max function:
	return bigger integer */
int max(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}

void increase(float x[])
{
	x[0] += 1;	// increase one
	return;
}

float main()
{
	int N = 8;
	N = N + two;
	N *= 10;
	
	increase(pi);
	max(N, 99);

	return 0;	
}