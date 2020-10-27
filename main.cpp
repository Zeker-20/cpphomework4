#include <iostream>
#include <math.h>
using namespace std;
int Fibonacci(int n)
{
	//动态分配第一种方式  可以避免int a[n]
		/*for ( i = 0; i < n; i++)
		{
			int a[i] = new int;不可以使用这种方法
			cin >> a[i];
			cout << a[i];
		}*/
	//动态分配更常见方式
	int *a = new int[n];
	a[0] = a[1] = 1;
	int i,sum = 2;
	for (i = 2; i < n; i++)
	{
		//cout << "请输入第" << i+1 << "个数" << endl;
		a[i] = a[i - 1] + a[i - 2];
		//cout << a[i];
		sum += a[i];
	}
	return sum;
}
double Evaluation(double a, double b, double c, double x)
{
	double n;
	n = a * pow(x, 2) + b * pow(x, 1) + c;
	return n;
}
double Function(double e,double f,double g,double l, double r)
{
	//double m = (l + r) / 2.0;
	double m;
	while (fabs(r - l) > pow(10, -6))
	{
		m = (l + r) / 2.0;
		double a = Evaluation(e, f, g, l);
		double b = Evaluation(e, f, g, m);
		double c = Evaluation(e, f, g, r);
		if (a*b < 0)
		{
			r = m;
		}
		else
		{
			l = m;
		}


	}
	/*while (fabs(r - l) > pow(10,-6))
	{
		double m = (l + r) / 2.0;
		cout << r - l<<endl;
		if (Evaluation(a, b, c, l)*Evaluation(a, b, c, m) < 0)
		{
			cout << "111111";
			Function(a, b, c, l, m);

		}
		if (Evaluation(a, b, c, r)*Evaluation(a, b, c, m) < 0)
		{
			cout << r << "0000 " << m << endl;
			Function(a, b, c, m, r);
		}
		if (Evaluation(a, b, c, m) == 0)
			break;
	}*/
	return m;
}



int main()
{
	int n;
	cin >> n;
	int sum = Fibonacci(n);
	cout << sum << endl;
	double a, b, c;
	cin >> a >> b >> c;
	double l, r;
	cin >> l >> r;
	double m;
	m = Function(a,b,c,l, r);
	cout << m << endl;
}




