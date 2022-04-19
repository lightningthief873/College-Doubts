#include<stdio.h>


int main()
{
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w;

	printf("Enter the marks\n");
	scanf_s("%d", &a);

	b = 0.35 * a;
	c = a - b;
	d = c / 10;

	f = 0.2 * c;
	g = c - f;
	h = g / 10;

	j = 0.2 * g;
	k = g - j;
	l = k / 10;

	m = (d + h + l);


	o = 0.3125 * m;
	p = m - o;
	q = p / 1.6;

	r = 0.1875 * p;
	s = p - r;
	t = s / 1.6;

	j = 0.25 * s;
	u = s - j;
	v = u / 1.6;

	w = (q + t + v);

	switch (w)
	{
	case 0:
		printf("You have failed\n");
		break;
	case 3:
		printf("You have failed\n");
		break;
	case 5:
		printf("You have C grade\n");
		break;
	case 8:
		switch (m)
		{
		case 8:
			printf("You have B grade\n");
			break;
		default:
			printf("You have C grade\n");
			break;
		}
		break;
	case 9:
		printf("You have B grade\n");
		break;
	case 10:
		printf("You have B grade\n");
		break;
	case 11:
		printf("You have B grade\n");
		break;
	case 12:
		printf("You have B grade\n");
		break;
	case 13:
		printf("You have A grade\n");
		break;
	case 15:
		printf("You have A grade\n");
		break;
	default:
		printf("Invalid Input.\n");
		break;
	}

	return 0;
}