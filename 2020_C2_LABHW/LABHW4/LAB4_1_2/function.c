// 20200988 ��ǻ���а� ������
extern float g_i;
float sum(float x, float y);

float sum_2(float a, float b)
{
	return g_i + sum(a, b);
}
float sum(float x, float y)
{
	return x + y;
}