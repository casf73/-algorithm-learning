<h1 style="text-align: center;">位运算笔记</h1>

---

- **每个题目考察点**
  - leetcode P191 重点是n&(n-1),会消去n的最后一个1，我们可以计算一共运行了几次，来求1的个数
    - <img src="/assert/leetcode191.png" height="450">
  - leetcode P231 我们要知道2的幂的二进制只会在首位有一个1，我们就可以利用P191的知识来判断，一个数是不是2的幂
    - <img src="/assert/leetcode231.png" height="450">
  - leetcode P268 ^异或这个符号是两个相同的数字则为0，不同则为1
    -  <img src="/assert/leetcode268.png" height="450">
