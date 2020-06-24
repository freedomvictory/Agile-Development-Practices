## Auto Tools Tutorial 

### Reference link 
[create-autotools](https://developer.gnome.org/anjuta-build-tutorial/stable/create-autotools.html.en)

### Instruction 

![](.\\pictures\\autotools-process.png)

Look the above picture, *you will see some **script files** in this figure.* 
1. user file

- `configure.ac`
- `Makefille.am`

2. auto generate files 
- `configure`
- `Makefile.in`

*And you will see some auto **genrate tools*** 

1. `alocal`
2. `autoconf`
3. `automake`

Autotools is composed of serval tools: `alocal ,autoconf, automake`.We always use two tools `autoconf` and `automake`

+ autoconf:
    It used the `configure.ac` template, and generate `configure.in` 
+ automake:
    It used the `Makefile.am` template , and generate `Makefile.in`

### Examples 


 
