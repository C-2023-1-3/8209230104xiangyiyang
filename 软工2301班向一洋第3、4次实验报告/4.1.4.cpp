#include<iostream>
using namespace std;

//4、合并两个排列好的数组：
//编写如下函数，合并两个排列好的数组，形成一个新的排列好的数组。
//void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
//使用size1 + size2次比较实现函数。编写测试程序，提示用户输入两个排列好的数组，并显示合并以后的数组。
// 下面是一个运行样例。注意，输入数据的第一个数字是数组的元素数，而不是数组的一部分。假定数组大小不超过80。
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)//合并数组1
	{
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++)//合并数组2
	{
		list3[size1 + i] = list2[i];
	}
	for (int i = 0; i < size1+size2-1; i++)//冒泡排序
	{
		for (int j = 0; j < size1 + size2 - i - 1; j++) 
		{
			if (list3[j]>list3[j+1])
			{
				int tem = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = tem;
			}
		}
	}
	cout << "The merged list is: ";
	for (int i = 0; i < size1+size2; i++)
	{
		cout<< list3[i] << " ";
	}
}
int main()
{	
	int size1(0);
	int *list1 = new int[size1];
	int size2(0);
	int* list2 = new int[size2];
	cout << "请输入第一串数字（第一个数是元素的数量）" << endl;
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "请输入第二串数字（第一个数是元素的数量）" << endl;
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	int *list3=new int [size1 + size2];
	merge(list1, size1, list2, size2,list3);
}