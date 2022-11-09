#include <stdio.h>

int main()
{
	
	return 0;
}

//#include<string.h>
//struct Book
//{
//	char name[20];
//	short peice;
//};
//int main()
//{
//	struct Book b1={"c语言",55};
//	strcpy(b1.name,("c++"));
//	printf("%s\n",b1.name);
	//b1.peice=15;
	//struct Book*pb=&b1;
//	printf("%s\n",pb->name);
//	printf("%d\n",pb->peice);
//	printf("%s\n",(*pb).name);
//	printf("%d\n",(*pb).peice);
//	printf("书名:%s\n",b1.name);
//	printf("价格:%d\n",b1.peice);
//	b1.peice=15;
//	printf("修改后的价格：%d\n",b1.peice);
//	return 0;
//}

//int main()
//{
//	printf("%d\n",sizeof(char*));
//	printf("%d\n",sizeof(short*));
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(double*));
//	double d=3.14;
//	double*pd=&d;
//	printf("%d\n",sizeof(pd));
	//*pd=5.5;
	//printf("%lf\n",d);
//	return 0;
//}

//int main()
//{
//	int a=10;
//	int*p=&a;
	//printf("%p\n",&a);
	//printf("%p\n",p);
//	*p=20;
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	char ch='w';
//	char*pc=&ch;
//	printf("%d\n",sizeof(pc));
	//*pc='a';
	//printf("%c\n",ch);
//	return 0;
//}

//int main()
//{
//	int a=10;
//	int*p=&a;
//	printf("%p\n",&a);
//	printf("%p\n",p);
//	*p=20;
//	printf("a=%d\n",a);
//	return 0;
//}

//int Max(int x,int y)
//{
//	if(x>y)
//	return x;
//	else
//	return y;
//}
////#define MAX 100
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	//int a=MAX;
//	int a=10;
//	int b=20;
//	int max=Max(a,b);
//	printf("max=%d\n",max);
//	max=MAX(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}

//extern int Add(int,int);
//int main()
//{
//	int a=10;
//	int b=20;
//	int sum=Add(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}

//int main()
//{
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//	return 0;
//}

//void test()
//{
//	static int a=1;
//	a++;
//	printf("a=%d\n",a);
//}
//int main()
//{
//	int i=0;
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	typedef unsigned int u_int;
//	unsigned int num=20;
//	u_int num2=20;
//	return 0;
//}

//int main()
//{
   //auto int a=10;
   //register int a=10;
//   int a=10;
//   a=-2
   //signed int
   //unsigned int num=0;
   //struct
   //union
//	return 0;
//}

//int Add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}
//int main()
//{
	//int arr[10]={0};
	//arr[4];
//	int a=10;
//	int b=20;
//	int sum=0;
//	int sum=Add(a,b);
//	return 0;
//}

//int main()
//{
//	int a=10;
//	int b=20;
//	int max=0;
//	max=(a>b?a:b);
//	if(a>b)
//	max=a;
//	else max=b;
//	return 0;
//}

//int main()
//{
//	int a=3;
//	int b=5;
//	//int c=a&&b;
//	int c=a||b;
//	printf("%d\n",c);
//	return 0;
//}

//int main()
//{
//	int a=(int)3.14;
//	return 0;
//}

//int main()
//{
//	int a=10;
//	//int b=a++;
//	//int b=++a;
//	//int b=a--;
//	int b=--a;
//	printf("a=%db=%d\n",a,b);
//	return 0;
//}

//int main()
//{
//	int a=0;
//	int b=~a;
//	printf("%d\n",b);
//	return 0;
//}

//int main()
//{
//	int a=10;
//	int arr[]={1,2,3,4,5,6};
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}

//Max(int x,int y)
//{
//if(x>y)
//return x;
//else
//return y;	
//}
//int main()
//{
//	int num1=10;
//	int num2=20;
//	int max=0;
//	max=Max(num1,num2);
//	printf("max=%d\n",max);
//	return 0;
//}

//int main()
//{
//	int a=10;
//	int b=20;
//    if(a<b)
//    {
//    	printf("b大);
//	}
//	else printf("a大");
//	return 0;
//}

//int main()
//{
//	int arr[10]={0};
//	int sz=0;
//	printf("%d\n",sizeof(arr));
//	sz=sizeof(arr)/sizeof(arr[0]);
//	printf("sz=%d\n",sz);
//	int a=10;
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(int));
//		printf("%d\n",sizeof a);
//			printf("%d\n",sizeof int);
//	return 0;
//}

//int main()
//{
//	int a=-2;
//	int b=-a;
//	int c=+3;
//	int a=0;
//	printf("%d\n",a);
//	printf("%d\n",!a);
	//int a=10;
	//int b=20;
	//a+b;//+双目操作符
//	return 0;
//}

//int main()
//{
	//		int a=3;
	//int b=5;
	//int c=a^b;//异或
	//printf("%d\n",c);
	//2进制
//		int a=3;
//	int b=5;
//	int c=a|b;
//	printf("%d\n",c);
	//2进制
//	int a=3;
//	int b=5;
//	int c=a&b;
//	printf("%d\n",c);
	//2进制
	////int a=1;
	////int b=a<<2;
	////printf("%d\n",b);
	////printf("%d\n",a);
	//int a=5%2;
	//printf("%d",a);
//	return 0;
//}

//int main()
//{
//int arr[10]={1,2,3,4,5,6,7,8,9,10};
//int i=0;
//while(i<10)
//{
//	printf("%d ",arr[i]);
//	i++;
//}
//	return 0;
//}

//Add(int x,int y)
//{
//	int z=x+y;
//	return z;
//}
//int main()
//{
////int num1=10;
////int num2=20;
//int sum=0;
//int a=100;
//int b=200;
////sum=Add(num1,num2);
//sum=Add(a,b);
//printf("sum=%d\n",sum);
//	return 0;
//}

//int main()
//{
//	int line=0;
//	printf("加入\n");
//	while(line<20000)
//	{
//	
//	printf("敲一行代码:%d\n",line);
//	line++;
//}
//if(line>=20000)
//printf("好\n");
//	return 0;
//}

//int main()
//{
//	int input=0;
//	printf("高明\n");
//	printf("他是傻逼吗？(1/0)>:");
//	scanf("%d",&input);
//	if(input==1)
//		printf("是\n");
//	else
//	printf("不是\n");
//	return 0;
//}

//#include<string.h>
//int main()
//{
	//printf("%d\n",strlen("c:\test\32\test.c"));
	//printf("%c\n",'\132');
//	printf("%c\n",'\x61');
//	return 0;
//}

//int main()
//{
//	//printf("c:\\test\\32\\test.c");
//	//printf("%c\n",'\'');
//	printf("%s\n","\"");
//	return 0;
//}

//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//#include<cstring>
//int main()
//{
//	char arr1[]="abc";
//	char arr2[]={'a','b','c'};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}

//int main()
//{
//    char arr1[]="abc";
//    char arr2[]={'a','b','c'};
//    printf("%s",arr1);
//    printf("%s",arr2);
//	return 0;
//}

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color=BLUE;
//	color=YELLOW;
//	//BLUE=6;
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//enum Sex s=FEMALE;
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}

//#define MAX 10
//int main()
//{
//	int arr[MAX]={0};
//	printf("%d",MAX);
//	return 0;
//}

//int main()
//{
//	const int n=10; 
//	//int arr[n]={0};
//	n=20;
////const int num=4;
////printf("%d",num);
////num=8;
////printf("%d",num);
//	return 0;
//}

//int main() {
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//int global = 2020;
//
//void test() {
//	printf("test()--%d\n", global);
//}
//
//int main() {
//	printf("%d\n", global);
//	return 0;
//}

//int main() {
//	printf("简易计算器\n");
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个数，计算相加后的值\n");
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("值为：%d", sum);
//	return 0;
//}

//int a = 10;
//int main() {
//	printf("%d", a);
//	return 0;
//}

//int a = 100;
//int main() {
//	int a = 10;
//	printf("%d", a);
//	return 0;
//}

//int num2=20;
//int main()
//{
//	int num1=10;
//	return 0;
//}

//int main() {
//	short int age = 20;
//	printf("%d", age);
//	return 0;
//}

//int main()
//{
//	printf("%d",sizeof(char));
//	printf("%d",sizeof(short));
//	printf("%d",sizeof(int));
//	printf("%d",sizeof(long));
//	printf("%d",sizeof(long long));
//	printf("%d",sizeof(float));
//	printf("%d",sizeof(double));
//	return 0;
//}

//int main()
//{
//	char ch='A';
//	printf("%c",ch);
//int age=20;
//printf("%d",age);
//long num=100;
//printf("%d\n",num);
//float f=5.0;
//printf("%f\n",f);
//double d=3.14;
//printf("%lf",d);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	printf("hello wold\n");
//	return 0;
//}