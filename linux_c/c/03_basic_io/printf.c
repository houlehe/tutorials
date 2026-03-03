#include <math.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
	// ----- 整数转换说明符 -----
	int i = 123;
	unsigned int u = 456;
	printf("=== 整数说明符 ===\n");
	printf("d(有符号十进制): %d\n", i);
	printf("i(有符号十进制): %i\n", i);
	printf("u(无符号十进制): %u\n", u);
	printf("o(无符号八进制): %o\n", u);
	printf("x(无符号十六进制): %x\n", u);
	printf("X(无符号十六进制): %X\n", u);

	// ----- 浮点转换说明符 -----
	double f = 123.456;
	double inf = 1.0 / 0.0;
	double nan = 0.0 / 0.0;
	printf("=== 浮点数说明符 ===\n");
	printf("f(十进制浮点数): %f\n", f);
	printf("e(科学计数法): %e\n", f);
	printf("E(科学计数法): %E\n", f);
	printf("g(科学计数法或十进制浮点数, 不输出多余的0): %g\n", f);
	printf("G(科学计数法或十进制浮点数, 不输出多余的0): %G\n", f);
	printf("a(十六进制浮点数): %a\n", f);
	printf("A(十六进制浮点数): %A\n", f);

	// ----- 字符与字符串转换说明符 -----
	char ch = 'A';
	char str[] = "Hello World";
	printf("\n=== 字符/字符串说明符 ===\n");
	printf("字符: %c\n", ch);
	printf("字符串: %s\n", str);

	// ----- 指针转换说明符 -----
	int var = 42;
	int *ptr = &var;
	printf("\n=== 指针说明符 ===\n");
	printf("p(指针): %p\n", ptr);

	// ----- 特殊说明符 n : 将已输出字符数写入参数 -----
	int count;
	printf("\n=== 特殊说明符 n ===\n");
	printf("hello%n world\n", &count);
	printf("已写入的字符数: %d\n", count);

	// ----- 百分号本身 -----
	printf("\n=== 百分号 ===\n");
	printf("打印百分号: %%\n");

	// ----- 结合长度修饰符的示例 -----
	long l = 123456L;
	unsigned long ul = 654321UL;
	long long ll = 1234567890123LL;
	unsigned long long ull = 9876543210987ULL;
	short s = 123;
	signed char sc = -45;
	size_t sz = sizeof(long long);
	intmax_t im = INTMAX_MAX;
	uintmax_t uim = UINTMAX_MAX;
	long double ld = 3.14159265358979323846L;

	printf("\n=== 长度修饰符示例 ===\n");
	printf("hd (short) : %hd\n", s); // 123
	printf("hu (unsigned short) : %hu\n", s);
	printf("hhd (signed char) : %hhd\n", sc);
	printf("hhu (unsigned char) : %hhu\n", (unsigned char)200); // 200
	printf("ld (long) : %ld\n", l);				    // 123456
	printf("lu (unsigned long) : %lu\n", ul);		    // 654321
	printf("lld (long long) : %lld\n", ll);			    // 1234567890123
	printf("llu (unsigned long long) : %llu\n", ull);	    // 9876543210987
	printf("zu (size_t) : %zu\n", sz);			    // 8（取决于平台）
	printf("jd (intmax_t) : %jd\n", im);			    // 9223372036854775807
	printf("ju (uintmax_t) : %ju\n", uim);			    // 18446744073709551615
	printf("Lf (long double) : %Lf\n", ld);			    // 3.141593

	// ----- 标志、宽度和精度综合示例 -----
	printf("\n=== 标志、宽度、精度示例 ===\n");
	printf("右对齐宽度10: |%10d|\n", 123);		    // |       123|
	printf("左对齐宽度10: |%-10d|\n", 123);		    // |123       |
	printf("符号强制显示: |%+d| %+d|\n", 123, -123);    // |+123| -123|
	printf("空格占位: |% d| % d|\n", 123, -123);	    // | 123| -123|
	printf("前导零填充: |%010d|\n", 123);		    // |0000000123|
	printf("# 替代形式: %#o %#x %#X\n", 123, 123, 123); // 0173 0x7b 0X7B
	printf("精度控制: %.5d %.2f\n", 123, 3.14159);	    // 00123 3.14

	return 0;
}