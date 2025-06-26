#include <stdio.h>
#include <string.h>

int main() 
{
    char input[256];  // 用于存储用户输入的字符串
    int key = 42;     // 用于 XOR 的密钥
    printf("请输入一个字符串（最多255个字符）：");

    // 读取用户输入
    if (fgets(input, sizeof(input), stdin) != NULL) {
        size_t len = strlen(input);

        // 如果输入以换行符结束，去掉换行符
        if (input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        printf("原始字符串：%s\n", input);
        printf("XOR 结果：");

        // 对字符串每个字符进行 XOR 操作
        for (size_t i = 0; i < strlen(input); i++) {
            char xor_result = input[i] ^ key;
            printf("%c", xor_result); // 打印 XOR 结果
        }

        printf("\n");
    }
    else {
        printf("读取输入失败！\n");
    }

    return 0;
}