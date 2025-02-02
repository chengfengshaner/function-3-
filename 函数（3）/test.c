#include <stdio.h>
//swap1在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
//改变形参，不能改变实参
void Swap1(int x, int y)            //函数定义
{									//int x, int y - 形式参数 - 形参
	int z = 0;			
	z = x;							//传值调用
	x = y;
	y = z;
}
void Swap2(int* pa, int* pb)		//函数定义
{									//int* pa, int* pb - 形式参数 - 形参
	int z = 0;
	z = *pa;
	*pa = *pb;						//传址调用
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 20;	
	Swap1(a, b);                            //函数调用
	printf("交换前：a=%d b=%d\n", a, b);		//传过去的a, b - 实际参数 - 实参
	Swap2(&a, &b);							
	printf("交换后：a=%d b=%d\n", a, b);		//传过去的&a, &b - 实际参数 - 实参
	return 0;
}


//函数的参数
//	实际参数(实参) :
//		真实传给函数的参数，叫实参。实参可以是:常量、变量、表达式、函数等。
//		无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传送给形参。
//  形式参数(形参)I :
//		形式参数是指函数名后括号中的变量，
//		因为形式参数只有在函数被调用的过程中才实例化(分配内存单元)，所以叫形式参数。
//		形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效。

//函数的调用:
//	传值调用
//		函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参。
//  传址调用
//		传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
//		这种传参方式可以让函数和函数外边的变量建立起正真的联系，也就是函数内部可以直接操作函数外部的变量。