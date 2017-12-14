第三次上机：
实验三：
问题描述：
给定一本辞典dict和一段文本text，现在要统计文本text中不再辞典dict中的单词，且希望找到text中出现次数最多的不在辞典dict中的单词。
实验任务：
设计并实现解辞典问题的O(nlogn)时间算法，对于给定的辞典dict和文本text，找出text中出现次数最多的不在辞典dict中的单词。
数据输入：
由文件input.txt给出输入数据。第1行为一个正整数n，表示辞典内的单词的数目。接下来的1行有n个单词，单词之间用空格分隔。辞典中没有重复的单词。第3行为一个正整数m，表示文本text内的单词的数目。第4行有m个单词，单词之间用空格分隔。
结果输出：
将计算出的文本text中出现次数最多的不在辞典dict中的单词在文本text中的出现次数输出到文件output.txt。
输入文件示例
Input.txt
3
Ae jd opq
9
Ae jd jda opq jda ae ld jd opq
输出文件示例
Output.txt
2