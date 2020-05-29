# Exercises

## 4.1

a.

```c
 0
 3
 6
 9
12
15
18
```

b.

```c
      1
      2
      4
      8
     16
     32
     64
    128
    256
    512
   1024
   2048
   4096
   8192
  16384
  32768
  65536
 131072
 262144
 524288
1048576
```

c.

```c
S( 1) =  1
S( 2) =  3
S( 3) =  6
S( 4) = 10
S( 5) = 15
S( 6) = 21
S( 7) = 28
S( 8) = 36
S( 9) = 45
```

d.

```c
i=0, j=1
i=0, j=4
i=0, j=7
i=1, j=2
i=1, j=5
i=2, j=3
i=2, j=6
i=3, j=4
i=3, j=7
i=4, j=5
i=5, j=6
i=6, j=7
```

e.

```c
i=0, j=1
i=0, j=4
i=1, j=2
i=1, j=5
i=2, j=3
i=2, j=6
i=4, j=5
i=5, j=6
i=6, j=7
```

f.

```c
i=5, j=5
```

g.

The expression in the guard does not converge to *false*. Thus this is an infinite loop.  

```c
i=0, j=5
i=0, j=6
i=0, j=7
...
```

## 4.2

For some statements S and for some integer-valued expressions *p*,
the following *do* and *while* loops are equivalent:

```c
do
{
    S;
}
while (p);
```

```c
S;
while (p)  
{
    S;
}
```
