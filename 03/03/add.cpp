#define _CRT_SECURE_NO_WARNINGS 1
//int g_val = 100;//全局变量整个工程都能使用
//static int g_val = 100;

//static修饰全局变量，使得这个全局变量只能在自己所在的源文件(.c)内部使用，其他源文件不能使用
//全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
//但是被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了！

//int add(int x, int y)
//{
//	return x + y;
//}

//static修饰函数
//static int add(int x, int y)
//{
//	return x + y;
//}
//只能在自己所在的源文件(.c)内部使用，其他源文件不能使用