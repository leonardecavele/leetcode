This directory contains my solutions to LeetCode problems, written in C, Python and Go while learning algorithms and data structures.

Each file corresponds to one problem and preserves the interface expected by LeetCode.

### Topics

For now, the exercises cover, among other topics, arrays, strings, hash tables, linked lists, two-pointer algorithms, sliding windows, recursion, binary trees, breadth-first search and greedy algorithms.

The goal is to practise choosing suitable data structures, analysing complexity and translating an algorithm into a compact implementation.

### Structure

Files are named after their corresponding LeetCode problem and use the extension of the language in which the solution was written.

Solutions generally contain only the code requested by LeetCode. Some types, structures, imports or function declarations may therefore be supplied by the platform rather than included in the file.

### Links

| Problem | Solution |
|---|---|
| [Two Sum](https://leetcode.com/problems/two-sum/) | [`two_sum.c`](./two_sum.c) |
| [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | [`add_two_numbers.c`](./add_two_numbers.c) |
| [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | [`longest_substring_without_repeating_characters.c`](./longest_substring_without_repeating_characters.c) |
| [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | [`median_of_two_sorted_arrays.c`](./median_of_two_sorted_arrays.c) |
| [Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion/) | [`zigzag_conversion.c`](./zigzag_conversion.c) |
| [Reverse Integer](https://leetcode.com/problems/reverse-integer/) | [`reverse_integer.c`](./reverse_integer.c) |
| [String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/) | [`string_to_integer_atoi.c`](./string_to_integer_atoi.c) |
| [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | [`palindrome_number.py`](./palindrome_number.py) |
| [Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/) | [`iterative`](./regular_expression_matching_iterative.c) / [`recursive`](./regular_expression_matching_recursive.c) |
| [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | [`container_with_most_water.c`](./container_with_most_water.c) |
| [Integer to Roman](https://leetcode.com/problems/integer-to-roman/) | [`integer_to_roman.c`](./integer_to_roman.c) |
| [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | [`roman_to_integer.c`](./roman_to_integer.c) |
| [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) | [`longest_common_prefix.c`](./longest_common_prefix.c) |
| [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | [`valid_parentheses.c`](./valid_parentheses.c) |
| [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | [`merge_two_sorted_lists.py`](./merge_two_sorted_lists.py) |
| [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | [`remove_duplicates_from_sorted_array.c`](./remove_duplicates_from_sorted_array.c) |
| [Pow(x, n)](https://leetcode.com/problems/powx-n/) | [`powx_n.c`](./powx_n.c) |
| [Length of Last Word](https://leetcode.com/problems/length-of-last-word/) | [`length_of_last_word.c`](./length_of_last_word.c) |
| [Path Sum](https://leetcode.com/problems/path-sum/) | [`path_sum.c`](./path_sum.c) |
| [Candy](https://leetcode.com/problems/candy/) | [`candy.c`](./candy.c) |
| [Shortest Path in Binary Matrix](https://leetcode.com/problems/shortest-path-in-binary-matrix/) | [`shortest_path_in_binary_matrix.c`](./shortest_path_in_binary_matrix.c) |

### Local testing

There is no shared build target because every problem can use a different language, function signature and input format.

To test a solution locally, a small driver must provide the inputs and any definitions normally supplied by LeetCode. Some files already contain temporary testing code.
