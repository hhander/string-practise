#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>

char* my_strncat(char* dest, const char* sour, int count)
{
	assert(dest && sour);
	char* tmp = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (count&&(*dest++ = *sour++))
	{
		count--;
	}
	*dest = '\0';
	return tmp;
}



int main()
{
	char arr1[20] = "abcdefg";
	char arr2[] = "hhhhh";
	strncat(arr1, arr2,8);
	printf("%s", arr1);
}









//char* my_strncpy(char* dest, const char* sour, int count)
//{
//	assert(dest && sour);
//	char* ret = dest;
//	while (count && (*dest++ = *sour++))
//	{
//		count--;
//	}
//	if (count)
//	{
//		*dest++ = "\0";
//		count--;
//	}
//	return dest;
//}



//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "aaa";
//	my_strncpy(arr1,arr2,2);
//	printf("%s", arr1);
//}








//int my_strcmp(const char* dest, const char* src)
//{
//	while (*dest == *src)
//	{
//		if (*dest == '\0')
//		{
//			return 0;
//		}
//		dest++;
//		src++;
//	}
//	return *dest - *src;
//	/*if (*dest > *src)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}*/
//}
//
//
//
//
//int main()
//{
//	char* arr1 = "abcdef";
//	char* arr2 = "abcd";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}







//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	int sz = strlen(dest);
//	char* tmp = dest;
//	while (*src != '\0')
//	{
//		*(dest++ + sz) = *src++;
//	}
//	*(dest + sz) = *src;
//	return tmp;
//}
//
//
//
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}









//void my_strcpy(char* dest, char* sour)
//{
//
//	while (*sour!='\0')
//	{
//		*dest = *sour;
//		dest++;
//		sour++;
//	}
//	*dest = *sour;
//}
//char* my_strcpy(char* dest, const char* sour)
//{
//	assert(dest != NULL);
//	assert(sour != NULL);
//	char* tmp = dest;
//	while (*dest++=*sour++)
//	{
//		;
//	}
//	return tmp;
//}

//void my_strncpy(char* dest, char* sour, int n)
//{
//      assert(dest!=NULL);
//      assert(sour!=NULL);
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{	
//			*(dest + i) = *(sour + i);
//		}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "##";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}







//int Fib(int k)
//{
//	if (k <= 2)
//		{
//			return 1;
//		}
//	else
//		{
//			return(Fib(k-1) + Fib(k - 2));
//		}
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 2;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//
//}
//
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}






//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}



//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int my_strlen(const char* str)
//{
//	asser(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	/*int ret = my_strlen(arr);
//	printf("%d", ret);*/
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}







//int Is_in_board(int arr[3][3], int a, int b, int k)
//{
//	int x = 0;
//	int y = b-1;
//	while (x <= 2&&y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			printf("%d %d", x, y);
//			return 1;
//		}
//	}
//	return 0;
//}
//int Is_in_board(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *py-1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3,},{4,5,6},{7,8,9} };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	int ret = Is_in_board(arr, &x, &y,k);
//	if (ret == 1)
//	{
//		printf("是在里面\n");
//		printf("坐标是%d %d\n", x, y);
//	}
//	else
//	{
//		printf("不在里面");
//	}
//	return 0;
//}







//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int board[ROW][COL] = { 0 };
//    int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		board[0][i] = i + 1;
//	}
//	for (i = 0; i < ROW; i++)
//	{
//		int j = 0;
//		for (j = 0; j < COL; j++)
//		{
//			if (i >= 1)
//			{
//				board[i][j] = board[i - 1][j] + k;
//			}
//		}
//	}
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			printf("%2d ", board[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}






//int main()
//{
//	char arr[10] = "abc";
//	char arr2[] = "def";
//	strcat(arr, "ccc");
//	printf("%s", arr);
//	return 0;
//}





//reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//
//left_move(char* str, int k)
//{
//	int lens = strlen(str);
//	reverse(str,str+k-1);
//	reverse(str+k,str+lens-1);
//	reverse(str,str+lens-1);
//}
//
//
//int Is_left_move(char arr[], char arr2[])
//{
//	int n = 0;
//	int sz = strlen(arr);
//	for (n = 0; n < sz; n++)
//	{
//		left_move(arr, n);
//		if (strcmp(arr,arr2)==0)
//		{
//			return 1;
//		}
//	}
//}
//
//
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	char arr2[] = "bcdef";
//	int ret = Is_left_move(arr, arr2);
//	if (ret == 1)
//	{
//		printf("是的");
//	}
//	else
//	{
//		printf("不是");
//	}
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s", arr);
//	return 0;
//}












//void reverse_str(char* str)
//{
//	int lens = strlen(str);
//	int i = 0;
//	for(i=0;i<lens/2;i++)
//	{
//		int ret = *(str + i);
//		*(str + i) = *(str + lens - 1 - i);
//		*(str + lens - 1 - i) = ret;
//	}
//}

//void reverse_str(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_str(arr);
//	printf("%s", arr);
//	return 0;
//}








//void left_spin(char* str, int n)
//{
//	int lens = strlen(str);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int tmp = *str;
//		int j = 0;
//		for (j = 0; j <lens-1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + lens - 1) = tmp;
//	}
//}
//
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int n = 0;
//	scanf("%d", &n);
//	left_spin(arr, n);
//	printf("%s", arr);
//	return 0;
//}