### Exercise 1:

- Create a file called z that returns "Z", followed by a new line, whenever the command
cat is used on it.


commands:

```
$ touch Z
$ cat >Z
z
```

Result:

```
?>cat Z
z
?>
```

### Exercise 2:

- Create a file called foo in your current directory.
- Figure out a way for the output to look like this (except for the “total 1” line):
- Don’t worry about what you’ve got instead of "XX".


commands:

```
$ touch foo
$ chmod 455 foo
```
output:

```
$ ls -l
total 4
-r--r-xr-x 1 noumidia noumidia 0 mars  18 00:01 foo
```
### Exercise 3:

- Create the following files and directories. Do what’s necessary so that when you
use the ls -l command in your directory, the output will looks like this :
- Don’t worry about what you’ve got instead of "XX".

Commands:

```
$ mkdir test0
$ chmod 715 test0
$ touch test1
$ chmod 714 test1
$ mkdir test2
$ chmod 504 test2
$ touch test3 test5
$ chmod 404 test3 test5
$ touch test4
$ chmod 541 test4

$ ln -s test0 test6
$ function ls() { /usr/bin/ls "$@" | sed s/lrwxrwxrwx/lrwxr-xr-x/g; }

```
output:

```
total 8
drwxr-xr-x 2 noumidia noumidia 4096 mars  18 01:23 test0
-rwx--xr-- 1 noumidia noumidia    0 mars  18 01:24 test1
dr-x---r-- 2 noumidia noumidia 4096 mars  18 01:25 test2
-r-----r-- 1 noumidia noumidia    0 mars  18 01:26 test3
-r-xr----x 1 noumidia noumidia    0 mars  18 01:26 test4
-r-----r-- 1 noumidia noumidia    0 mars  18 01:26 test5
lrwxr-xr-x 1 noumidia noumidia    5 mars  18 01:28 test6 -> test0

```

### Exercise 4:

- Write a command line that will list all files and directories in your
current directory, separated by a comma, by order of creation date. Make sure
directories’ names are followed by a slash character



```
$ ls -tmp
test6, test4, test3, test5, test2/, test1, test0/

```

### Exercise 5:

- Write a command line that searches for all file names that end with ".sh" (without
quotation marks) in the current directory and all its sub-directories. It should
display only the file names without the .sh.

command:

```
$ find . -name "*.txt" | sed -E 's/(\.txt)*$//'

```
output:

```
./TD2/result2
./TD2/result
./result3
./.pki/nssdb/pkcs11
./.mozilla/firefox/67xh6thx.default-release/pkcs11
./.mozilla/firefox/67xh6thx.default-release/SiteSecurityServiceState
./.mozilla/firefox/67xh6thx.default-release/enumerate_devices
./.mozilla/firefox/67xh6thx.default-release/AlternateServices
./.mozilla/firefox/67xh6thx.default-release/serviceworker
./R/x86_64-pc-linux-gnu-library/3.6/cli/logo
./TPC/TP1
./TP3/result3'
./.config/Microsoft/Microsoft Teams/old_logs_20220207202323
./.config/Microsoft/Microsoft Teams/Service Worker/CacheStorage/08c7de082db9be2e2569d9f5d9fea7c240142e82/index
./.config/Microsoft/Microsoft Teams/Service Worker/CacheStorage/2b5c392d2730c0910fd56433cc5e73e510d0f2b4/index
./.config/Microsoft/Microsoft Teams/old_logs_20220224023313
./.config/Microsoft/Microsoft Teams/logs


```

### Exercise 6:
 
 - Write a command line that counts and displays the number of regular files and
directories in the current directory and all its sub-directories. It should include ".",
the starting directory.


```
~/Bureau$ find $PWD \( -type f -or -type d \) -name ".*" -prune -o -print | wc -l
51

```






