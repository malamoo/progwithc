# Exercises

## 2.1

`_hello` *valid*

`Hello37` *valid*

`constant-value` *invalid*

`subject#1` *invalid*

`n` *valid*

`M` *valid*

`km_per_hour` *valid*

`speed!` *invalid*

`sensible$name` *invalid*

`_num_incorrect_` *valid*

`big_long_name_many_letters` *valid*

`12oclock` *invalid*

## 2.2

`a` = 6

`b` = 18

`c` = 16

`d` = 5

`e` = 15

`f` = 9

`g` = 5

## 2.3

```c
area = r * r;
perimeter = 4.0 * r;
area = PI * r * r;
perimeter = 2.0 * PI * r;

elapsed_hours =
    ((finish_hour * 3600 + finish_min * 60 + finish_sec) -
     (start_hour * 3600 + start_min * 60 + start_sec)) /
    3600.0;
```

## 2.6

Line 2 could not have been generated. The format descriptor `%8.4f` indicates that at least 8 character positions should be used, with 4 character positions after the decimal point. However, `x` is printed: `1234.567`.

Line 5 could not have been generated. `x` is with printed with one unnecessary leading blank character which exceeds the sufficient 8 character positions specified by the format descriptor `%8.4f`.

Line 6 could not have been generated. `n` is printed with only one character position which is less than the necessary amount specified by the format descriptor `%3d`.

Line 7 could not have been generated. Both `x` and `m` don't have the necessary amount of character positions specified by their respective format descriptors.

## 2.7

Line 1:

```bash
num = 3, n = 12, z = 4.6, c = Z
```

Line 2:

```bash
num = 3, n = 4, z = 0.6, c = 1
```

Line 3:

```bash
num = 3, n = 12, z = 4.6, c = 4
```

Line 4:

```bash
num = 3, n = 12, z = 4.6, c = Z
```

Line 5:

```bash
num = 1, n = 1234, z = 9.99, c = 9
```
