ex28

在写ex32题之前，需要先搭建ex28中的c-skeleten框架

check中的BADFUNCS

问了一下chatgpt：它可能会在 C 代码中查找像 `strcpy`、`strcat`、`stpcpy` 等函数，但前面不能是字母、数字、下划线、句点或大于号，从而避免在变量名或其他结构内的错误匹配
主要内容是做静态代码检查

ex29

ex29主要讲解了一下如何编译动态库和如何在程序中加载动态库

ex32

按照教材上配置会出现undefined reference，这说明静态库liblcthw.a并没有被链接上去，因此`$(TESTS)`生成失败
分析makefile文件，发现静态库的链接规则写的有问题
```
原本的静态库链接规则：$(CC) $(CFLAGS) /lib/libXXX.a $^  -o $@
正确的静态库链接规则：$(CC) $(CFLAGS) $^  -o $@  /lib/libXXX.a
```
因此修改这部分makefile代码即可正确生成tests可执行文件
双向链表的push和pop是对链表的最后一个位置进行插入和删除
而unshift和shift是对链表的第一个位置进行插入的和删除
