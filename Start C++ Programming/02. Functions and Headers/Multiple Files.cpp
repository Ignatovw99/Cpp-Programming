double add(double x, double y)
{
	return x + y;
}

double add(double x, double y, double z)
{
	return add(add(x, y), z);
}

bool test(bool param)
{
	return param;
}

bool test(int param)
{
	return param > 0;
}