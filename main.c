#include <stdio.h>

struct Buffer {
    int used; /// 已使用的数目
    int free; /// 未使用的数目
    void *data;
    int8_t encoding; /// 当前存储的数据类型
    /* data的类型取决于encoding的值。encoding和data类型的对应关系如下：
       0 -> int8_t
       1 -> int16_t
       2 -> int32_t
       3 -> int64_t
     */
};

int main()
{
   int i = 0;
   int j = 0;

   struct Buffer a[100];

   for (i = 0; i < 100; i++) {
     printf("i=%d\n", i);
     j = j+2;
     printf("i=%d\n", j);
   }
 
}
