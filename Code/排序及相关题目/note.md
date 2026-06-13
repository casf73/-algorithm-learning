<h1 style="text-align: center;">前缀和与差分笔记</h1>

---

- **每个题目考察点**
  - acwing P785 快排是先确定一个基准值，通常为中值或者端点值，左右各设立一个指针，把比基准值小的放到左边，比基准值大的放到右边
    - <img src="/assert/acwing785.png" height="400">
  - acwing P786 在排序的基础上增加了找数
    - <img src="/assert/acwing786.png" height="400">
  - acwing P787 归并排序，是把一个数组先分成每一个部分，在合并每一个部分的时候，依次按照排序选择数字填到临时数组中，快排是先排再分，而归并是先分再排
    - <img src="/assert/acwing787.png" height="400">
  - acwing P788 因为在合并的过程中，每一个部分内部是有序的，所以可以用来求逆序对的个数
    - <img src="/assert/acwing788.png" height="400">
