#include"StackSq.h"
#include"formula.h"
#include<cmath>
double Compute(char *str);
int Precedence(char op);
void Change(char *s1, char *s2);
int main()
{
	string s;
	read_str(s);
	s = replace_str(s);
	cout << "代入值后的算术表达式为:" << s << endl;
	char str1[100];
	int i;
	for (i = 0; i != s.size(); ++i)
	{
		str1[i] = s[i];
	}
	str1[i] = '\0';
	char str2[100];
	Change(str1, str2);
	cout << "转换后的后缀表达式为:";
	puts(str2);
	cout << "计算结果为:";
	printf("%.2f", Compute(str2));
	cout << endl;
	system("pause");
	return 0;
}
