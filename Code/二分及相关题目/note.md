<h1 style="text-align: center;">二分笔记</h1>

---

- **每个题目考察点**
  - acwing P789 这道题考的一个具体数字的起始位置和终止位置，本质为lower_bound和upper_bound这两个函数
    - <img src="/assert/acwing789.png" height="400">
  - acwing P790 这类题的重点是确保误差范围，当左边界与右边界的误差在可以接受范围，就可以认为已经完成
    - <img src="/assert/acwing790.png" height="400">
  - leetcode P162 重点是当nums[mid] < nums[mid + 1]时表示右边在爬升，当nums[mid] >= nums[mid + 1]时表示mid这一个点在顶点或者左边在爬升
    - <img src="/assert/leetcode162.png" height="450">
  - leetcode P875和P1011 都是答案二分,做这类题的时候要注意根据题目条件设定最小值和最大值
    - <img src="/assert/leetcode875.png" height="450">
    - <img src="/assert/leetcode1011.png" height="450">
