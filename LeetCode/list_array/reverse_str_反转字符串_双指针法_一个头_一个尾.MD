* 输入：'abc'
* 输出：'cba'
>思路：
初始两指针（index）：head指向第一个元素，tail指向最后一个元素
while(head!=tail)
    交换 *head与*tail
    ++head;
    --tail;

代码：
```c++
public void reverse(char[] str) {
    int i = 0;
    int j = str.length - 1;
    while (i < j) {
        swap(str, i, j);
        i++;
        j--;
    }
}

private void swap(char[] str, int i, int j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}
```
