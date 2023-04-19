#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main() {
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2)
//			printf("%d  ", i);
//		i++;
//	}
//	return 0;
//}


//求1!+2!+3!+.....+10!
//int main() {
//	int n=0;
//	scanf("%d", &n);
//	int z = 0;
//	for (int i = 0; i <n; ) {
//		int ret = 1;
//		for (int j = 1; j <= n; j++)
//		{
//			ret *= j;
//		}
//		n = n--;
//		z+=ret;
//	}
//	printf("%d", z);
//	return 0;
//}

//二分法在一串数中查找某个数

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x = 0;
//	scanf("%d", &x);
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0]))-1;
//	while (right >= left) {
//		int mid = left + (right-left)/2;
//		if (x > arr[mid]) { left = mid + 1; }
//		else if (x < arr[mid]) { right = mid - 1; }
//		else { printf("下标：%d", mid); break; }
//	}
//	if (left > right) printf("无");
//	return 0;
//}


//猜数字游戏
//1.电脑随机生成一个数字（1-100），2.玩家猜数字，猜小了就告知猜小了，猜大了就告知猜大了，直到猜对为止。3.游戏可以一直玩
#include <stdlib.h>
#include <time.h>
//int main(){
//	srand((unsigned)time(NULL));
//	int a=rand() % 100+1;
//	int x = 0;
//	while (1) {
//		scanf("%d", &x);
//		if (x > a)printf("大了");
//		else if (x < a)printf("小了");
//		else {
//			printf("正确"); break;
//		}
//	}
//	return 0;
//
//}


//排大小
//int main() {
//	int x, y, z;
//	scanf("%d%d%d", &x, &y, &z);
//	if (x > y) {
//		if (z > x)printf("%d %d %d", z, x, y);
//		if (z > y && z <= x)printf("%d %d %d", x, z, y);
//		if (z <= y)printf("%d %d %d", x, y, z);
//	}
//	else {
//		if (z > x && z <= y)printf("%d %d %d", y, z, x);
//		if (z>y)printf("%d %d %d",  z,y, x);
//		if (z <= x)printf("%d %d %d", y, x, z);
//	}
//	return 0;
//}


//1到100间3的倍数
//int main() {
//	int n = 0;
//	for (n = 1; n <= 100; n++) {
//		if (n % 3 == 0)printf("%d ", n);
//	}
//	return 0;
//}

//10个整数中的最大值
//int cmp(const void* e1,const void* e2) {
//	return *(int*)e2 - *(int*)e1;//e1指向的元素>e2指向的元素,返回值小于0，则e1指向的元素会排在e2指向的元素之前，
//}//e1指向的元素<e2指向的元素，返回值大于0，则e1指向的元素会排在e2指向的元素之后
//也就是说，大的元素会始终排在小的元素之前，即顺序为由大到小
//int main() {
//	int arr[10] = {1,2,3,1,2,5,3,6};
//
//	int i = 0;
//	//随机生成不同数
//	srand((unsigned)time(NULL));
//	while (i < 10) {
//		arr[i] = rand() % 10;
//		i++;
//	}
//	//对数组由大到小进行排序,
//	qsort(arr, 10, sizeof(arr[0]), cmp);
//	printf("%d ", arr[0]);
//	return 0;
//}




//产生素数
//int main() {
//	int arr[102] = {};
//	int i = 0;
//m:
//	for (; i < 101; ) {
//		i++;
//		arr[i] = 100 + i;
//		int j = 2;
//		while (j < arr[i]) {
//			if (arr[i] % j == 0)
//			{
//				goto m;
//			}
//			j++;
//		}
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//产生闰年

//int main() {
//	int arr[1002] = {};
//	int ret = 0;
//	for (int i = 0; i < 1001; i++) {
//		arr[i] = 1000 + i;
//		if ((arr[i] % 4 == 0 && arr[i] % 100 != 0)||(arr[i]%400==0))
//		{
//			printf("%d ", arr[i]);
//			ret++;
//		}
//	}
//	printf("%d", ret);
//	return 0;
//}



//计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值，打印出结果
//int main() {//原式=1/(1*2)+1/(3*4)+1/(5*6)+1/(7*8)+.......1/(99*100)
//	int arr[100] = {};
//	double ret = 0;
//	for (int i = 0; i < 100; ) {
//		arr[i] = i + 1;
//		ret+=1 / (((float)(arr[i])) * (arr[i] + 1));
//		i += 2;
//	}
//	printf("%lf", ret);
//	return 0;
//}


//斐波那契数
//非递归

//int fib(int n) {
//	int c = 1;
//	int a = 1;
//	int b = 1; 
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}

////递归
//
//int fib(int n) {
//	if (n == 1 || n == 2)return 1;
//	return fib(n - 1) + fib(n - 2);
//}
//
//int  main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}


//汉诺塔最优步数
//int hanoi(int n) {
//	if (n == 1)return 1;
//	if (n == 2)return 3;
//	while (n > 2) {
//		return 2 * hanoi(n - 1) + 1;
//	}
//}
//#include<math.h>
//int hanoi(int n) {
//	return pow(2, n)-1;
//}

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",hanoi(n));
//	return 0;
//}


//青蛙跳台阶共有多少种跳法

//int frog(int n) {//递归
//	if (n == 1)return 1;
//	if (n == 2)return 2;
//	while (n > 2) return frog(n - 1) + frog(n - 2);
//}

//int frog(int n) {//非递归
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	if (n == 1)return 1;
//	if (n == 2)return 2;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//;	}
//	return c;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",frog(n));
//	return 0;
//}



//求最大公约数
//int gcomdiv(int a, int b) {
//	int m = 0;
//	while (a % b != 0) {
//		m = a % b;
//		a = b;
//		b = m;
//	}
//	return b;
//}
//
//int main() {
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", gcomdiv(a, b));
//	return 0;
//}


//数1到100中出现多少个数字9
//此题关键点在于99中有两个数字9

//int main() {
//	int count = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (i % 10 == 9)
//			count++;
//			if(i / 10 == 9)
//				count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//乘法表的输出

//int main() {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9;i++) {
//		for (j = 1; j <= i;j++) {
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//交换两个整数
//void swap(int *a, int* b) {
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d",a,b);
//	return 0;
//}

//打印n*n乘法表
//void mul(int n) {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++)
//			printf("%d * %d= %d ", i, j, i * j);
//		printf("\n");
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	mul(n);
//	return 0;
//}

//打印一个数的每一位
//void sn(int n) {
//	if (n > 9) {
//		sn(n / 10);
//		printf("%d ", n % 10);
//	}
//	else { printf("%d ", n); }
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	sn(n);
//	return 0;
//}


//求阶乘
//递归

//int fac(int n) {
//	if (n >= 1)
//		return n * fac(n - 1);
//	else return 1;
//}
//
////非递归
//
//int fac(int n) {
//	int ret = 1;
//	if (n >= 1) {
//		for (int i = 1; i <= n; i++)
//			 	ret*= i;
//	}
//	 return ret;
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//printf("%d",fac(n));
//	return 0;
//}

//strlen 的模拟
////递归
//int my_strlen(char* str) {
//	if (*str != 0) {
//		return 1 + my_strlen(str + 1);
//	}
//}
//
////非递归
//
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != 0)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	char str[] = "aedwegr";
//	printf("%d", my_strlen(str));
//	return 0;
//}


//字符串逆序
//void reverse_string(char* str) {
//	if (*str != 0) {
//		reverse_string(str + 1);
//		printf("%c", *str);
//	}
//}
//
//int main() {
//	char str[] = "abcdef";
//	reverse_string(str);
//	return 0;
//}


//计算一个数的每位之和
//int DigitSum(int n) {
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else return n;
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",DigitSum(n));
//
//	return 0;
//}


//实现n的k次方

//int my_pow(int n,int k){
//	if (k > 0) {
//		n;
//	 int m=n* my_pow(n, k-1);
//	 return m;
//	}
//}
//
//int main() {
//	int n,k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d",my_pow(n, k));
//	return 0;
//}

//#define n 10
////对整形数组的冒泡排序
//int *bubble_sort(int arr[n])
//{
//	int tmp = 0;
//	int i = 0; int j = 0;
//	for(i=0;i<n-1;i++)
//		for (j = 1; j <=n-1-i; j++)
//		{
//			if (arr[i] > arr[i + j])
//			{
//			 tmp=arr[i]  ;
//			arr[i] = arr[i + j];
//				arr[i + j] = tmp;
//			}
//		}
//	return arr;
//}
//int main() 
//{
//	int i = 0;
//	int arr[n] = { 9,2,7,6,8,4,3,9,1,0 };
//	bubble_sort(arr);
//	for (i = 0; i < n; i++)
//		printf("%d ",*(arr+i));
//	return 0;
//}
//int* init(int arr[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		arr[i] = 0;
//	return arr;
//}
//void print(int arr[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ",arr[i]);
//}
//int* reverse(int arr[10])
//{
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr[9 - i];
//		arr[9 - i] = tmp;
//	}
//	return arr;
//}
//int main()
//{
//	int arr[10] = {4,3,2,1,0,5,6,7,8,9};
//	init(arr);
//	print(arr);
//	printf("\n");
//	reverse(arr);
//	//print(arr);
//	return 0;
//}

//void change(int A[10], int B[10])
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < 10; i++)
//	{
//		tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//}
//int main()
//{
//	int i = 0;
//	int A[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int B[10] = {9,8,7,6,5,4,3,2,1,0};
//	change(A, B);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",A[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	return 0;
//}

//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//int dif(int a, int b)
//{
//    int i = 0;
//    int count = 0;
//    while (i < 32)
//    {
//        if((((a ^ b) >> i) & 1)==1)
//        count++;
//        i++;
//    }
//    return count;
//}
//int main()
//{
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        
//        printf("%d\n",dif(a,b) );
//    }
//	return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//int main()
//{
//	int x = 0;
//	int i = 0;
//	int arr[32] = { 0 };
//	scanf("%d", &x);
//	//奇数位
//	for (i = 0; i <= 30; i+=2)
//		 arr[i]=((x >> i) & 1);
//	for (i = 30; i >= 0; i -= 2)
//		printf("%d", arr[i]);
//	printf("\n");
//	//偶数位
//	for (i = 1; i < 32; i += 2)
//		arr[i] = ((x >> i) & 1);
//	for (i = 31; i > 0; i -= 2)
//		printf("%d", arr[i]);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int i = 0;
//	scanf("%d", &x);
//	//偶数位
//	for (i = 31; i >0 ; i -= 2)
//		printf("%d",((x >> i) & 1));
//	printf("\n");
//	//奇数位
//	for (i = 30; i >= 0; i -= 2)
//		printf("%d", ((x >> i) & 1));
//	
//	return 0;
//}



//写一个函数返回参数二进制中 1 的个数。

//int main()
//{
//	int x = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &x);
//	while (i < 32)
//	{
//		if ((x >> i) & 1 == 1)
//		{
//			count++;
//		}
//		i++;
//	}
//	printf("%d", count);
//	return 0;
//}

//不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}


//arr是一个整形一维数组。写一个函数打印arr数组的内容，不使用数组下标，使用指针。

//int main() 
//{
//	int arr[10] = { 3,2,4,6,1,54,67,6,4,3 };
//	int i=0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

//将一个字符串str的内容颠倒过来，并输出。
//int main()
//{
//	char str[10000];
//	int i = 0;
//	while ((str[i] = getchar()) != '\n')
//		i++;
//	int left = 0; int right = i - 1;
//	while (left < right)
//	{
//		char tmp = str[right];
//		str[right] = str[left];
//		str[left] = tmp;
//		left++;
//		right--;
//	}
//	int j = 0;
//	while (str[j] != '\n')
//	{
//		printf("%c", str[j]);
//		j++;
//	}
//	return 0;
//
//}


//将一个字符串str的内容颠倒过来，并输出。

//void reverse(char str[])
//{
//	int n = 0;
//	while (*(str + n) != 0)
//		n++;
//	int left = 0;
//	int right = n-1;
//	while (left < right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[] = "ashduaw ces";
//	reverse(str);
//	int i = 0;
//	while (*(str + i) != 0)
//	{
//		printf("%c", *(str + i));
//		i++;
//	}return 0;
//}


//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int sn = 5 * x + 4 * 10 * x + 3 * 100 * x + 2 * 1000 * x + 10000 * x;
//	printf("%d", sn);
//	return 0;
//}


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<math.h>
//int narcissus(int x)
//{
//	if (x < 10)
//		return x;
//	else 
//	{
//		int n = 1;
//		int a = x;
//		int b = x;
//		int ret = 0;
//		while (a / 10 != 0)
//		{
//			n +=1;
//			a /= 10;
//		}
//		while (b != 0)
//		{
//			ret+=pow((b % 10), n);
//			b /= 10;
//		}
//		
//			return ret;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[100001] = { 0 };
//	for (i = 0; i < 100001; i++)
//	{
//		arr[i] = i;
//		if (arr[i] == narcissus(arr[i]))
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}


//打印菱形

//int main()
//{
//	char str[13][13] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 13; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			str[i][j] = '*';
//		}
//	}
//	//将每一行需要打印‘*’的位置留下来，其他位置的‘*’换成空格。
//	for (i = 0; i < 7; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			if ((j < (6 - i) && j >= 0) || (j > (6 + i) && j < 13))
//			{
//				str[i][j] = ' ';
//
//			}
//		}
//	}
//	for (i = 7; i <13; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			if ((j < (i-6) && j >= 0) || (j > (12-(i-6)) && j < 13))
//			{
//				str[i][j] = ' ';
//
//			}
//		}
//	}
//	for (i = 0; i < 13; i++)
//	{
//		for (j = 0; j < 13; j++)
//		{
//			printf("%c",str[i][j]);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}



//寒假作业 day01

//输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。
//1. 用返回一个整数列表来代替打印
//2. n 为正整数，0 < n <= 5
#include<math.h>
//int* printNumbers(int n, int* returnSize)
//{
//	*returnSize = pow(10, n)-1;
//	int* arr = (int*)malloc((sizeof(int)) * (*returnSize));//malloc函数怎么使用需学习
//	for (int i = 0; i < *returnSize; i++)
//	{
//		*(arr + i) = i + 1;
//	}
//	return arr;
//}

//根据输入的日期，计算是这一年的第几天。
//保证年份为4位数且日期合法。

//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int month_day[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int year, month, day;
//	while (~scanf("%d %d %d", &year, &month, &day))
//	{
//		int total_day = day;
//		if (is_leap_year(year) && month > 2)
//			total_day += 1;
//		for (int i = 0; i < month; i++)
//		{
//			total_day += month_day[i];
//		}
//		printf("%d", total_day);
//	}
//
//	return 0;
//}


//验证尼科彻斯定理，即：任何一个整数m 的立方都可以写成m 个连续奇数之和。
//输入一个int整数
//输出分解后的string

//int main()
//{
//	int m = 0;
//	while (~scanf("%d", &m)) {
//		//起始奇数
//		int n = m * (m - 1) + 1;
//		char arr[1000];
//		int i = 0;
//		sprintf(arr, "%d", n);
//		for (i = 1; i < m; i++)
//		{
//			sprintf(arr , "%s+%d", arr, n += 2);
//		}
//		printf("%s", arr);
//	}
//	return 0;
//}

//等差数列 2，5，8，11，14。。。。（从 2 开始的 3 为公差的等差数列）输出求等差数列前n项和

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	float sn = (n / 2.0) * (1 + (3 * n));
//	printf("%.f", sn);
//	return 0;
//}


//输入整型数组和排序标识，对其元素按照升序或降序进行排序
//数据范围：1<=n<=1000,元素大小满足0<=val<=100000
//输入描述：第一行输入数组元素个数
//第二行输入待排序的数组，每个数用空格隔开
//第三行输入一个整数0或1。0代表升序排序，1代表降序排序

//int main()
//{
//	int arr[1000];
//	int n = 0;
//	//输入数组元素个数
//	scanf("%d\n", &n);
//	int i = 0;
//	//输入待排序数组
//	while (i < n)
//	{
//		scanf("%d", arr + i);
//		i++;
//	}
//	//对数组进行排序
//	scanf("\n");
//	int x = 0;
//	scanf("%d", &x);
//	//升序排序
//	if (x == 0)
//	{
//		for (int i = 0; i < n-1; i++)
//		{
//			for (int j=0;j<n-1-i;j++)
//				if(arr[j]>arr[j+1])
//				{
//					int tmp = arr[j ];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//		}
//	}
//	//降序排序
//	if (x == 1)
//	{
//		for (int i = 0; i < n-1; i++)
//		{
//			for (int j = 0; j < n -1- i; j++)
//				if (arr[j] <= arr[j + 1])
//				{
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//		}
//	}
//	for(i=0;i<n;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2) {
//		total += (empty / 2);
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}


//模拟实现库函数strlen

//int my_strlen(char str[])
//{
//	int count = 0;
//	while ((*(str++)) != 0)
//		count++;
//	return count;
//}
//int main()
//{
//	char str[] = "djqwiuhda";
//	printf("%d",my_strlen(str));
//	return 0;
//}


//模拟实现strcpy

//char* my_strcpy(char str2[], char str1[])
//{
//	while ((*(str1)) != 0)
//	{
//		*(str2++) = *(str1++);
//	}
//	*str2 = *str1;
//	return str2;
//}
//int main()
//{
//	
//	char str1[] = "djqwiuhda";
//	char str2[1024] = {0};
//	my_strcpy(str2, str1);
//	printf("%s", str2);
//	return 0;
//}



//首先输入要输入的整数个数n，然后输入n个整数。输出为n个整数中负数的个数，和所有正整数的平均值
//结果保留一位小数。0即不是正整数，也不是负数，不计入计算。如果没有正数，则平均值为0。

//int main()
//{
//	int n = 0;
//	//输入整数个数
//	scanf("%d", &n);
//	int arr[2000];
//	//输入n个整数
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &(arr[i]));
//		}
//
//		float ret = 0;
//		int count1 = 0;
//		int count2 = 0;//count2统计正整数的个数
//		//输出负数的个数
//		for (int i = 0; i < n; i++)
//		{
//			if (arr[i] < 0)
//				count1++;
//			else if (arr[i] > 0)
//			{
//				ret += arr[i];
//				count2++;
//			}
//		}
//		if (count1 == n)
//			printf("%d %d", count1, 0);
//		else
//		{
//			if (count2 != 0)
//			{
//				printf("%d %.1f", count1, (ret / count2));
//			}
//			if (count2 == 0)
//				printf("%d %.1f", count1, 0.0);
//		}
//		return 0;
//}


//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得
//数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。

//用两个指针实现的
//int main()                
//{
//	int arr[] = { 1,3,3,67,7,6,54,3,32,4};
//	int* p1 = arr;
//	int* p2 = arr;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	while (p1 != (arr + n - 1))
//	{
//		while ((*(p1)) % 2 != 0 && (p1 != (arr + n - 1)))
//		{
//
//			p1++;
//		}
//		if ((*(p2)) % 2 != 0)
//			p2 = p1;
//		while ((*(p1)) % 2 != 1 && (p1 != (arr + n - 1)))
//			p1++;
//		/*if (p1 == (arr + n - 1))
//			break;*/
//		if ((*(p1)) % 2 == 1)
//		{
//			int tmp = (*(p1));
//			(*(p1)) = (*(p2));
//			(*(p2)) = tmp;
//			p2++;
//		}
//	}
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//leetcode:645,错误的集合。
//问题解出来了，目前还剩下leetcode上传格式的问题
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,4,10};
//	int* p1 = arr;
//	int* p2 = arr;
//	int returnSize[2];
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i+ 1; j < n; j++)
//		{
//			if ((*(p1 + i)) == (*(p2 + j)))
//			{
//		returnSize[0]=		 (*(p1 + i));
//		returnSize[1]=(*(p1 + i)) + (j - i);
//				break;
//			}
//		}
//	}
//	
//
//	return 0;
//}


//小明同学最近开发了一个网站，在用户注册账户的时候，需要设置账户的密码，为了加强账户的安全性，小明对密码强度有一定要求：
//1. 密码只能由大写字母，小写字母，数字构成；
//2. 密码不能以数字开头；
//3. 密码中至少出现大写字母，小写字母和数字这三种字符类型中的两种；
//4. 密码长度至少为8
//现在小明受到了n个密码，他想请你写程序判断这些密码中哪些是合适的，哪些是不合法的。
//输入描述：
//输入一个数n，接下来有n(n≤100)行，每行一个字符串，表示一个密码，输入保证字符串中只出现大写字母，小写字母和数字，
//字符串长度不超过100。
//输出描述：
//输入n行，如果密码合法，输出YES，不合法输出NO

//int is_right(char str[],int n)
//{
//	int count = 0; int a = 0; int b = 0; int c = 0;
//	if (((*(str)) >= 65 && (*(str)) <= 90) || ((*(str)) >= 97 && (*(str)) <= 122))//条件2
//	{
//		str++;
//		count++;
//		//条件1
//		while ((*(str)) != '0')
//		{
//			if (((*(str)) >= 48 && (*(str)) <= 57))
//			{
//				a++;
//				count++;
//			}
//			else if (((*(str)) >= 65 && (*(str)) <= 90))
//			{
//				b++;
//				count++;
//			}
//			else if (((*(str)) >= 97 && (*(str)) <= 122))
//			{
//				c++;
//				count++;
//			}
//			else
//				break;
//			str++;
//		}
//	}
//	if (count != n)
//		return 0;
//	else if (count == n)
//	{
//		if ((a > 0 && a < count - 1) || (b > 0 && b < count - 1) || (c > 0 && c < count - 1))
//			return 1;
//		else
//			return 0;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	//输入密码
//	int n = 0;
//	scanf("%d", &n);
//	int ret = n;
//	int a = 0;
//	while (n--)
//	{//判断每一行密码
//		char str[100];
//		scanf("%s", str);
//		int s = strlen(str);
//		if (s < 8)//条件4
//		{
//			printf("NO\n");
//			break;
//		}
//		else {
//			if (is_right(str, s) == 1)
//				a++;
//			else
//			{
//				printf("NO");
//				break;
//			}
//		}
//	}
//	if (a == ret)
//		printf("YES");
//	return 0;
//}



//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	//a:      11001000  原码
//	//        10110111
//	//        11111111 11111111 11111111 10111000
//	//b:      01100100  原码、反码、补码
//	// 
//
//	//a:      00000000 00000000 00000000 11001000  补码
//	//b:      00000000 00000000 00000000 01100100  补码
//	//a+b:    00000000 00000000 00000001 00101100  300
//	
//	//a:      11001000
//	//b:      01100100
//	//c:      00000000 00000000 00000000 00101100  44
//	//
//
//
//
//	printf(" % d % d", a + b, c);
//	return 0;
//}

//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}
////char 的范围应该是从-128--127
////a[0]=-1,a[1]=-2,a[2]=-3,...
////a[127]=-128
////a[128]=127,a[127]=126,a[126]=125,...
////a[254]=1,a[255]=0;
////00000000  0
////00000001  1
////00000010  2
////..
////01111111  127
////10000000  -128
////10000001 -127
////...
////11111110  -2
////11111111  -1


//int main()
//{
//	/*每个数等于它上方两数之和。
//		每行数字左右对称，由1开始逐渐变大。
//		第n行的数字有n项。
//		第n行的第m个数和第n - m + 1个数相等 。
//		每个数字等于上一行的左右两个数字之和。即第n + 1行的第i个数等于第n行的第i - 1个数和第i个数之和*/
//	int a = 0; int b = 0;
//	int arr[10][10] = { 0 };
//	for (a = 0; a < 10; a++)
//	{
//		arr[a][0] = 1;
//		for (b = 0; b <= a; b++)
//		{
//			if (b == a)
//				arr[a][b] = 1;
//			if (a > 1 && b >= 1)
//				arr[a][b] = arr[a - 1][b - 1] + arr[a - 1][b];
//			printf("%d ", arr[a][b]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//10000000   -128（补码）
//11111111 11111111 11111111 10000000（补码）
// 
//  1  2  3  4  5  6  7  8
//1 1
//2 1  1
//3 1  2  1
//4 1  3  3  1
//5 1  4  6  4  1
//6 1  5  10 10 5  1
//7 1  6  15 20 15 6  1 
//8 1  7  21 35 35 21 7  1
//* 
//* 
//* 
//* 
//* /


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。以下为4个嫌疑犯的供词:
//A说：不是我。B说：是C。C说：是D。D说：C在胡说
//已知3个人说了真话，1个人说的是假话。现在请根据这些信息，写一个程序来确定到底谁是凶手。


//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++) {
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D')+ (killer != 'D')==3)
//			printf("killer=%c", killer);
//	}return 0;
//}
//首先，说假话的一定是嫌犯。


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，A第三；
//B选手说：B第二，E第四；
//C选手说：C第一，D第二；
//D选手说：C最后，D第三；
//E选手说：E第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//int main()
//{
//	int a, b, c, d,e;
//	for (a = 1; a <= 5; a++) 
//		for(b=1;b<=5;b++)
//			for(c=1;c<=5;c++)
//				for(d=1;d<=5;d++)
//					for(e=1;e<=5;e++)
//						if((b==2)+(a==3)==1)
//							if((b==2)+(e==4)==1)
//								if((c == 1)+(d==2)==1)
//									if((c==5)+(d==3)==1)
//										if ((e == 4) + (a == 1) == 1)
//											if (a*b*c*d*e==120)
//													printf("a=%d\nb=%d\nc=%d\ne=%d\nf=%d\n", a, b, c, d, e);
//
//										
//	
//	return 0;
//}



//给你一个整数数组 nums ，其中总是存在 唯一的 一个最大整数 。
//请你找出数组中的最大元素并检查它是否 至少是数组中每个其他数字的两倍 。
//如果是，则返回 最大元素的下标 ，否则返回 - 1 。

//int dominantIndex(int* nums, int numsSize) {
//    int i = 0;
//    int max = *nums;
//    int index = 0;
//    int second = 0;
//    if (numsSize < 2)
//        return 0;
//    else {
//        for (i = 0; i < numsSize; i++)
//        {
//            if (max < (*(nums + i)))
//            {
//                max = *(nums + i);
//                index = i;
//            }
//        }
//        for (i = 0; i < numsSize; i++)
//        {
//            if (i!=index && second < (*(nums + i)))
//                second = *(nums + i);
//        }
//        if (max >= 2 * second)
//            return index;
//        else
//            return -1;
//    }
//}
//int main()
//{
//    int arr[] = { 3,6,1,0 };
//    printf("%d", dominantIndex(arr, 4));
//	return 0;
//}




//Lily上课时使用字母数字图片教小朋友们学习英语单词，每次都需要把这些图片按照大小（ASCII码值从小到大）排列收好。
// 请大家给Lily帮忙，通过代码解决。
//Lily使用的图片使用字符"A"到"Z"、"a"到"z"、"0"到"9"表示。
//输入描述：
//一行，一个字符串，字符串中的每个字符表示一张Lily使用的图片。
//输出描述：
//Lily的所有图片按照从小到大的顺序输出:从0-9，从A-Z，从a-z

//void sort(char arr[], int n)
//{
//	int i = 0; int j = 0;
//	for (i = 0; i < n-1;i++)
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (*(arr + j) > *(arr + j + 1))
//			{
//				char tmp = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = tmp;
//			}
//		}
//}
//int main()
//{
//	char arr[1000] = { 0 };
//	scanf("%s",arr );
//	int n = strlen(arr);
//	sort(arr, n);
//	for (int i = 0; i < n;i++)
//		printf("%c",arr[i]);
//	return 0;
//}



//给你一个整数数组 nums ，请计算数组的 中心下标 。
//数组 中心下标 是数组的一个下标，其左侧所有元素相加的和等于右侧所有元素相加的和。
//如果中心下标位于数组最左端，那么左侧数之和视为 0 ，因为在下标的左侧不存在元素。
//这一点于中心下标位于数组最右端同样适用。
//如果数组有多个中心下标，应该返回 最靠近左边 的那一个。
//如果数组不存在中心下标，返回 - 1 。
//int pivotIndex(int* nums, int numsSize)//双指针的想法存在一些纰漏，可以尝试运用单指针解决
//{
//    int count1 = 0; int count2 = 0;
//    int* p1 = nums; int* p2 = (nums + numsSize - 1);
//    int i = 0;
//    for (i = 0; i <= numsSize; i++)
//    {
//        if (p1 > p2)
//        {
//            return -1;
//        }
//        if (count1 == count2)
//        {
//            if (p1 == p2)
//            {
//                return p1 - nums;
//            }//返回中心下标;
//            else
//            {
//                count2 += *(p2--);
//            }
//        }
//        else if (count1 > count2)
//        {
//
//            if (*p2 < 0 && *p1 <=0)
//            {
//                count1 += *(p1++);
//            }
//            else
//            {
//                count2 += *(p2--);
//            }
//        }
//        else
//        {
//            if (*p1 < 0 && *p2 <= 0)
//            {
//                count2 += *(p2--);
//            }
//            else
//            {
//                count1 += *(p1++);
//            }
//        }
//    }
//    return 0;
//}


//int pivotIndex(int* nums, int numsSize)
//{
//    int i = 0; int j = 0;
//
//    for (i = 0; i < numsSize; i++)
//    {
//        int count1 = 0;  int count2 = 0;
//        for (j = 0; j < numsSize; j++)
//        {
//            if (j < i)
//            {
//                count1 += *(nums + j);
//            }
//            else if (j > i)
//            {
//                count2 += *(nums + j);
//            }
//        }
//        if (count1 == count2)
//            return i;
//    }
//    return -1;
//
//}
//int main()
//{
//    int arr[6] = { -1,-1,-1,0,1,1};
//   printf("%d", pivotIndex(arr, 6));
//    return 0;
//}



//求最小公倍数

//int main()
//{
//    long long int a = 0; long long int b = 0;
//    scanf("%lld %lld", &a, &b);
//    long long int x = a; long long int y = b;
//    if (a % b == 0)
//    {
//        printf("%lld", a);
//
//    }
//    else if (b % a == 0)
//        printf("%lld", b);
//    else {
//        while (x % y != 0)
//        {
//            long long int tmp = x % y;
//            x = y;
//            y = tmp;
//        }
//        long long int s = a * b / y;
//        printf("%lld", s);
//    }
//    return 0;
//}

/*编写一个函数，计算字符串中含有的不同字符的个数。字符在 ASCII 码范围内( 0~127 ，包括 0 和 127 )，
换行表示结束符，不算在字符里。不在范围内的不作统计。多个相同的字符只计算一次
例如，对于字符串 abaca 而言，有 a、b、c 三种不同的字符，因此输出 3 。
输入一行没有空格的字符串。
输出 输入字符串 中范围在(0~127，包括0和127)字符的种数。*/

//int main() {
//    char str1[500];
//   scanf("%[^\n]",str1);
//   char str2[128] = {0};
//   char* p1 = str1;  
//while(*p1!='\0')
//{
//    char* p2 = str2;
//   while (*p2 != '\0')
//   {
//       if (*p1 == *p2)
//           break;
//       else
//       {
//           p2++;
//       }
//   }
//   if (*p2 == '\0')
//   {
//       *p2 = *p1;
//   }
//   p1++;
//}
//int n = strlen(str2);
//printf("% d", n);
//   return 0;
//}



/*给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。
你可以假设数组是非空的，并且给定的数组总是存在多数元素。*/

//int majorityElement(int* nums, int numsSize)/*此方法在遍历过程中把所有不是众数的数都过滤掉了，因为众数占了所有
//元素的一半以上，因此最终剩下的count大于0时那个数肯定是众数。*/
//{
//	int count = 0; int index = nums[0];
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == index)
//		{
//			count++;
//		}
//		else 
//		{
//			count--;
//			if (count == 0)
//			{
//				index = nums[i + 1];
//			}
//		}
//	}
//	return index;
//}

//int majorityElement(int* nums, int numsSize) {/*如果是一长串的123之类的，似乎效率依然较低。*/
//	int* p1 = nums; int* p3 = nums;
//	int arr[50000] = { 0 };
//	int count = 0;
//	while ((p1 - nums) != numsSize)
//	{
//		int* p2 = arr;
//		while (*p2 != 0)
//		{
//			if (*p2 == *p1)
//			{
//				break;
//			}
//			p2++;
//		}
//		if (*p2 == 0)
//		{
//			*p2 = *p1;
//		}
//		p3 = p1 ;
//		count = 0;
//		while ((p3 - nums) != numsSize)
//		{
//			if (*p3 == *p2)
//			{
//				count++;
//				}
//			p3++;
//		}
//		if (count > numsSize / 2)
//			return *p2;
//		p1++;
//
//	}
//	return 0;
//}

//int majorityElement(int* nums, int numsSize)/*这种方法应该是效率最低的*/
//{
//	int* p1 = nums;
//	int count = 0;
//	while ((p1 - nums) != numsSize)
//	{
//		int* p3 = nums;
//		count = 0;
//		while ((p3 - nums) != numsSize)
//		{
//			if (*p3 == *p1)
//				count++;
//			p3++;
//		}
//		if (count > numsSize / 2)
//			return *p1;
//		p1++;
//	}
//	return 0;
//}


//int main()
//{
//	int nums[10] = { 3,2,3,3,3,3,2,5,3,3};
//	printf("%d",majorityElement(nums, 10));
//	return 0;
//}



/*自除数 是指可以被它包含的每一位数整除的数。
例如，128 是一个 自除数 ，因为 128 % 1 == 0，128 % 2 == 0，128 % 8 == 0。自除数 不允许包含 0 。
给定两个整数 left 和 right ，返回一个列表，列表的元素是范围 [left, right] 内所有的 自除数 。*/

//int* selfDividingNumbers(int left, int right,int *returnsize) {/*此题的方法应该是没有问题的，但目前对
//	leetcode上关于返回动态数组的题目要求不知道怎么理解，所以暂时无法上传，等后续。*/
//	for (int i = left; i <= right; i++)
//	{
//		if (i >= 1 && i <= 9)
//		{
//			*returnsize = i;
//			returnsize++;
//		}
//		else
//		{
//			int t = i;
//			while ((t != 0)&&(t%10!=0))
//			{
//				if (i % (t % 10) != 0)
//					break;
//				t =t/10;
//			}
//			if (t == 0)
//			{
//				*returnsize = i;
//				returnsize++;
//			}
//		}
//	}
//	return returnsize;
//}
//int main()
//{
//	int arr[100] = { 0 };
//	selfDividingNumbers(47, 85, arr);
//for(int i=0;i<100;i++)
//{
//	printf("%d ", arr[i]);
//}
//	return 0;
//}


/*写一个函数，求两个整数之和，要求在函数体内不得使用+、-、*、/四则运算符号*/

//int Add(int a, int b)
//{
//	while (b != 0)
//	{
//		int tmp = a ^ b;
//		b = (a & b) << 1;
//		a = tmp;
//	}return a;
//}
//int main()
//{
//	int a = 0; int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", Add(a, b));
//	return 0;
//}


//完全数

    //int main()
    //{
    //    int n = 0;
    //    scanf("%d", &n);
    //    int count = 0;
    //    for (int i = 1; i <= n; i++)
    //    {
    //        int sum = 0;
    //        for (int j = 1; j < i; j++)
    //        {
    //            if (i % j == 0)
    //                sum += j;
    //        }
    //        if (sum == i)
    //            printf("%d ", i);
    //    }
    //    return 0;
    //}




 //ans--00000000 00000000 00000000 00000001     1
 // 
//ans---00000000 00000000 00000000 00000011     3

//ans---00000000 00000000 00000000 00000011     3

//ans---00000000 00000000 00000000 00000010     2

//ans---00000000 00000000 00000000 00000000     0

//ans---00000000 00000000 00000000 00000000     0

//int main()
//{
//    int n = 1001;
//    int ans = 0;
//    for (int i = 1; i <= n; ++i)
//    {
//        ans ^= i % 3;
//    }
//    printf("%d", ans);
//    return 0;
//}

//int main()
//{
//    char c = 'A';
//    if ('0' <= c <= '9') printf("YES");
//    else printf("NO");
//    return 0;
//}


/*输入一个整数，将这个整数以字符串的形式逆序输出
程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001*/

//int main() {
//    int a = 0; 
//    int count = 0;
//    scanf("%d", &a);
//    int ret = a;
//    if (a == 0)
//        printf("%d", 0);
//    else
//    {
//        while (ret != 0)
//        {
//            count++;
//            ret /= 10;
//        }
//        int arr[10];
//        for (int i = 0; i <count; i++)
//        {
//            arr[i] = a % 10;
//            a /= 10;
//            printf("%d", arr[i]);
//        }
//    }
//    return 0;
//}

//  abc  dde\0\0
//  012356678


/*对字符串中的所有单词进行倒排。
说明：
1、构成单词的字符只有26个大写或小写英文字母；
2、非构成单词的字符均视为单词间隔符；
3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，倒排转换后也只允许出现一个空格间隔符；
4、每个单词最长20个字母；*/


//int main()
//{
//    char str[10000];
//    scanf("%[^\n]", str);
//    int len = strlen(str);
//    //把所有其他字符替换为空格
//    for (int i = 0; i < len; i++)
//    {
//        if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i]>122)
//            str[i] = ' ';
//    }
//    //字符串倒排
//    char* left = str; char* right = str + len - 1;
//    while (left < right)
//    {
//        char tmp = *right;
//        *right = *left;
//        *left = tmp;
//        left++;
//        right--;
//    }
//    //将多个空格合并
//    for (int i = 0; i < len; i++)
//    {
//        if (*(str + i) == ' ')
//        {
//            int j = i ; int count = 0;
//            while (*(str + j) == ' ')
//            {
//                count++; j++;
//            }
//            for (int k = 0; k < count - 1; k++)
//            {
//                for (int m = i + 1; m < len; m++)
//                {
//                    *(str + m) = *(str + m + 1);
//                }
//            }
//        }
//    }
//    //局部单词再倒排
//char*    str1 = str; char* str2 = str;
//while (*str1!='\0'&&*str2!='\0')
//{
//    while (*str2 != ' ' && *str2 != '\0')
//    {
//        str2++;
//    }
//    str2 -= 1;
//    while (str1 < str2)
//    {
//        char tmp = *str1;
//        *str1 = *str2;
//        *str2 = tmp;
//        str1++; str2--;
//    }
//    while (*str1 != ' ' &&* str1 != '\0')
//        str1++;
//    if (*str1 == ' ' && *str1 != '\0')
//    { 
//        str1 += 1;
//        str2 = str1;
//    }
//}
////打印字符串
//int l=strlen(str);
//for (int i = 0; i < l; i++)
//{
//    printf("%c", str[i]);
//}
//    return 0;
//}


/*有一种兔子，从出生后第3个月起每个月都生一只兔子，小兔子长到第三个月后每个月又生一只兔子。
例子：假设一只兔子第3个月出生，那么它第5个月开始会每个月生一只兔子。
一月的时候有一只兔子，假如兔子都不死，问第n个月的兔子总数为多少？*/

//int fib(int n)
//{
//    if (n == 1)
//        return 1;
//    else if (n == 2)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//
//int main() {
//    //斐波那契数
//    int n = 1;
//    scanf("%d", &n);
//    printf("%d", fib(n));
//    return 0;
//}

/*
1       1                                              1    1  
                                                       2    1
3       1             +           1                    3    2
4       1+       1    +           1                    4    3
5       1+    1+ 1    +           1   +1               5    5
6       1+1+  1+ 1+ 1 +           1+1 +1               6    8

*/


/*数列的定义如下：数列的第一项为n，以后各项为前一项的平方根，求数列的前m项的和。
输入描述：
输入数据有多组，每组占一行，由两个整数n（n<10000）和m(m<1000)组成，n和m的含义如前所述。
输出描述：
对于每组输入数据，输出该数列的和，每个测试实例占一行，要求精度保留2位小数。*/

//double sum(double m, int n)
//{
//    double sum = m;
//    while (n-->1)
//    {
//        m = sqrt(m);
//        sum += m;
//    }
//    return sum;
//}
//int main()
//{
//    double m; int n;
//    while (scanf("%lf %d", &m, &n) != EOF)
//        printf("%.2lf\n", sum(m, n));
//
//    return 0;
//}


//int main() 
//{
//   /* *(pa++) *= 3;
//    b =*( pa++);
//    b = b * 3;*/
//    return 0;
//}




/*杨氏矩阵查找某个数是否存在*/

//int find(int arr[][3], int* x, int* y, int k)
//{
//    int m = 0;
//    int n=*y-1;
//    while (m < 3 && n >= 0)
//    {
//        if (arr[m][n] > k)
//            n--;
//        else if (arr[m][n] < k)
//            m++;
//        else
//        {
//            *x = m; *y = n;
//            return 1;
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int arr[][3] = { 1,2,3,4,5,6,7,8,9 };
//    int k=7;
//    int x = 3; int y = 3;
//   int ret= find(arr, &x, &y, k);
//   if (ret == 1)
//   {
//       printf("找到了，下标为：%d,%d", x, y);
//   }
//   else
//   {
//       printf("没找到");
//   }
//    return 0;
//}

/*实现一个函数，可以左旋字符串中的k个字符。
例如：
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB
ABCD左旋三个字符得到DABC*/

//int main()
//{
//    int k = 0;
//    char str[100];
//    while (~scanf("%d", &k)) 
//    {
//        getchar();
//            scanf("%[^\n]",str);
//        int sz = strlen(str);
//        for (int i = 0; i < k%sz; i++)
//        {
//            char tmp = str[0];
//            for (int j = 0; j < sz - 1; j++)
//            {
//                str[j] = str[j + 1];
//            }
//            str[sz - 1] = tmp;
//        }
//        printf("%s\n", str);
//    }
//    return 0;
//}

//使用回调函数，模拟实现q_sort（采用冒泡的方式）

/*找一串数中出现次数为奇数的数*/
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int num = 0; int tmp = 0;
//    while (n--)
//    {
//        scanf("%d", &tmp);
//        num ^= tmp;
//    }
//    printf("%d", num);
//    return 0;
//}


/*模仿qsort的功能实现一个通用的冒泡排序*/
//int cmp(const void* e1, const void* e2) 
//{
//    return *(int*)e1-*(int*)e2;
//}
//struct stu
//{
//    char name[20];
//    int age;
//    double sorce;
//}arr[3];
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//    return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//}
//void swap(char* buf1, char* buf2, int n)
//{
//    while (n--)
//    {
//        char tmp = *buf1;
//        *buf1 = *buf2;
//        *buf2 = tmp;
//        buf1++;
//        buf2++;
//    }
//}
//void bubble_sort(void* base, int num, int width,int (*p)(const void* e1, const void* e2))
//{
//    int i = 0;
//    for (i = 0; i < num-1; i++)
//    {
//        for (int j = 0; j < num - 1 - i; j++)
//        {
//            if (p((char*)base + j * width,(char*) base + (j + 1) * width) > 0)
//                swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//        }
//    }
//}
////void print(int* arr,int n)
////{for(int i=0;i<n;i++)
////{
////    printf("%d ",arr[i]);
////}
////}
//
//void print(struct stu arr[3])
//{
//    struct stu*p=arr;
//    
//    for (int i = 0; i < 3; i++)
//    {
//        printf("%s ,%d ,%.2lf\n", (p+i)->name, (p+i)->age, (p+i)->sorce);
//        //printf("%s,%d,%.2lf", arr.name ,arr.age, arr.sorce);
//    }
//}
//
//int main()
//{
//    //int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//    stu  arr[3] = { {"zhangsan",18,44.4}, {"lisi",20,55.5} ,{"wangwu",19,45.6} };
//    bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_stu_by_name);
//    print(arr);
//    return 0;
//}

/*写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 =AABCD和s2 = BCDAA，返回1
给定s1=abcd和s2=ACBD，返回0.
AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA
AABCD右旋一个字符得到DAABC*/

//int main()
//{
//    char str1[100];
//    scanf("%[^\n]", str1);
//    getchar();
//    char str2[100];
//    scanf("%[^\n]", str2);
//    getchar();
//    int sz=strlen(str1);
//    int n = sz;
//    while (n!=0)
//    {
//        char tmp = str1[0];
//        for (int i = 0; i < sz-1; i++)
//        {
//            str1[i]=str1[i+1];
//        }
//        str1[sz-1] = tmp;
//        if (strcmp(str1, str2) == 0)
//        {
//            printf("%d", 1);
//            break;
//        }
//        n--;
//    }if (n == 0)printf("%d", 0);
//    return 0;
//}
//
//int main()
//{
//   const char* c[] = { "ENTER","NEW","POINT","FIRST" };
//   const char** cp[] = { c + 3,c + 2,c + 1,c };
//   const char*** cpp = cp;
//   printf("%s\n", **++cpp);
//   printf("%s\n", *-- * ++cpp + 3);
//   printf("%s\n", *cpp[-2] + 3);
//   printf("%s", cpp[-1][-1]+1);
//    return 0;
//}


/*模拟实现strstr*/

//char* my_strstr(const char* str1, const char* str2)
//{
//    const char* s1 = str1;
//    const char* s2 = str2;
//    const char* cur = str1;
//
//    if (*s2 == '\0')
//        return (char*)cur;
//    while (*s1 != '\0')
//    {
//        while (*s1 != *s2 && *s1 != '\0' && *s2 != '\0')
//        {
//            s1++;
//        }
//        cur = s1;
//        while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
//        {
//            s1++;
//            s2++;
//        }
//        if (*s2 == '\0')
//        {
//            return (char*)cur;
//        }
//        else
//        {
//            if (*s1 != '\0')
//            {
//                s1 = cur + 1;
//                s2 = str2;
//            }
//        }
//    }
//    return NULL;
//}
//int main()
//{
//    char arr1[] = "abbbcdef";
//    char arr2[] = "bc";
//    char* len = my_strstr(arr1, arr2);
//        if (len == NULL) 
//        {
//            printf("找不到");
//        }
//        printf("%s", my_strstr(arr1, arr2));
//    return 0;
//}

/*模拟实现strcat*/

//char*my_strcat(char*str1,const char*str2)
//{
//    char* ret = str1;
//    while (*str1 != '\0')
//        str1++;
//    while (*str1++ = *str2++ )
//    {
//        ;
//    }
//    return ret;
//}
//int main()
//{
//    char arr1[30] = "abbbcdef\0XXXXXXXXX";
//    char arr2[] = "bc";
//        printf("%s", my_strcat(arr1, arr2));
//    return 0;
//}

/*模拟实现strcmp*/

//int my_strcmp(const char*str1,const char*str2)
//{
//    while (*str1 == *str2)
//    {
//        if (*str1 != '\0')
//        {
//            str1++;
//            str2++;
//        }
//        else
//            return 0;
//    }
//    return *str1 - *str2;
//}
//int main()
//{
//    char arr1[] = "abbbcdeg";
//    char arr2[] = "abbbcdef";
//        printf("%d", my_strcmp(arr1, arr2));
//    return 0;
//}

/*模拟实现strcpy*/
//char*my_strcpy(char*str1,const char*str2)
//{
//    char* ret = str1;
//    while (*str1++ = *str2++)
//        ;
//    return ret;
//}
//int main()
//{
//    char arr1[20] = "qw";
//    char arr2[] = "abbbcdef";
//        printf("%s", my_strcpy(arr1, arr2));
//    return 0;
//}

/*模拟实现strlen*/
//size_t my_strlen(const char* str)
//{
//    int count = 0;
//    if (*str == '\0')
//    {
//        return 0;
//    }
//    while (*str != 0)
//    {
//        str++;
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    char arr[] = "hfisu";
//   printf("%d", my_strlen(arr));
//    return 0;
//}

/*模拟实现memmove*/
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//void* ret = dest;
//    if (dest < src)
//        //从前往后
//    {
//        while (count--)
//        {
//            *(char*)dest = *(char*)src;
//            dest = (char*)dest + 1;
//            src = (char*)src + 1;
//        }
//    }
//    else
//        //从后往前
//    {
//        while (count--)
//        {
//            *((char*)dest + count) = *((char*)src + count);
//        }
//    }
//    return ret;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9 };
//    my_memmove(arr+2, arr , 20);
//    for (int i = 0; i < 9; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

/*模拟实现memcpy*/
#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//    assert(dest && src);
//    void* ret = dest;
//    while (count--)
//    {
//     *(char*)dest=*(char*)src   ;
//     src=(char*)src+1;
//     dest = (char*)dest + 1;
//    }
//    return ret;
//}
//int main()
//{
//    int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//    int arr2[] = { 4,5,6,7,8 };
//    my_memcpy(arr1, arr2, 12);
//    return 0;
//}


//int main()
//{
//    int* p = NULL;
//    p = (int*)malloc(20);
//    int*tmp=(int*)realloc(p, 30);
//    p = tmp;
//    tmp = NULL;
//    free(p);
//    p = NULL;
//    return 0;
//}

/*模拟实现的strncat*/
/*函数将str2的字符添加到str1后面，字符数为count，添加的第一个字符会覆盖str1最后的\0
如果给定的count为5，但str2的第三位就为\0，那么函数会添加str2的第一个字符直到\0并包括\0的所有字符
如果count比str2的长度大，那么只会将str2添加完
返回的数组以\0结尾
如果复制的行为发生在重叠的部分，这种行为未被定义(意思应该是自己添加在自己的后面)*/

//char* my_strncat(char* dest, const char* source, size_t count)
//{
//    assert(dest && source);
//    char*p = dest;
//    while ((*p) != 0)
//    {
//        p++;
//    }
//    if (*p == 0)
//    {
//        while (count--)
//        {
//            if (*source == 0)
//            {
//                break;
//            }
//            *p = *source;
//            p++; source++;
//        }
//    }
//    if (*p != 0)
//    {
//        *p = 0;
//    }
//    return dest;
//}
//int main()
//{
//    char str[20] = "abcde";
//    char str2[] = "zxc";
//    my_strncat(str, str2, 2);
//
//    return 0;
//}


/*函数拷贝count个source的字符串到dest,从dest起始地址开始
如果count比source的长度小，或者相等，那么只会拷贝相应个数的字符，不会自动添加\0
如果count比source的长度大，在把source的所有字符串拷贝到dest后，剩余部分会补上\0，直到达到count
source与dest有重叠这种行为未定义*/
//char* my_strncpy(char* dest, const char* source, size_t count)
//{
//    assert(dest,source);
//    char* p = dest;
//    while (count--)
//    {
//        if (*source == 0)
//            *p = 0;
//        else
//        {
//            *p = *source;
//            source++;
//        }
//        p++;
//    }
//    return dest;
//}
//int main()
//{
//    char str1[20] = "abcdexx";
//    char str2 [] = "zxc";
//    my_strncpy(str1, str2, 3);
//    return 0;
//}

/*一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
编写一个函数找出这两个只出现一次的数字。
例如：
有数组的元素是：1，2，3，4，5，1，2，3，4，6
只有5和6只出现1次，要找出5和6.*/

//void find_single(int* arr,int sz)
//{
//    //所有元素异或
//    int ret = 0;
//    int pos = 0;
//    int single1 = 0; int single2 = 0;
//    for (int i = 0; i < sz; i++)
//    {
//        ret^=*(arr+i);
//    }
//    //对异或得到的数字判断其二进制位哪一位为1
//    for (int i = 0; i < 32; i++)
//    {
//        if (((ret >> i) & 1) == 1)
//        {
//            pos = i;
//            break;
//        }
//    }
//    for (int i = 0; i < sz; i++)
//    {
//        if ((((*(arr + i)) >> pos) & 1) == 1)
//            single1 ^= *(arr + i);
//    }
//    single2 = ret ^ single1;
//    printf("%d %d", single1, single2);
//}
//int main()
//{
//    int  arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//    int sz=sizeof(arr) / sizeof(arr[0]);
//    find_single(arr,sz);
//    return 0;
//}

/*模拟实现atoi函数*/
/*函数会解释字符串为整型值，当输入的字符串第一个字符不能被解释的时候会返回0
溢出的情况其返回值未定义
遇到无法被识别为数字的字符时，函数就会停止继续解释
当然，这个字符也有可能是字符串的终止字符\0
该函数无法识别小数或者指数*/
/*字符1-9的ascii值是49-57*/

//int my_atoi(const char* str)
//{
// const   char* p = str;
// int ret = 0;
//    //判断第一个字符是否为1-9，如果不是，直接返回0
//    if(*p<49||*p>57)
//        return 0 ;
//    //从第一个字符开始依次向后判断，循环终止条件：
//    //字符不在1-9内；
//    while (*p >= 49 && *p <= 57)
//    {
//        ret *= 10;
//        ret += (*p-48);
//        p++;
//    }
//    return ret;
//}
//int main()
//{
//    int i = 0;
//    char p[] = "12131";
//   i=my_atoi(p);
//   printf("%d", i);
//   return 0;
//}