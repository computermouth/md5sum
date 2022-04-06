# Simple md5 library for C

# Table of Contents
* [Documentation](#documentation)
* [Examples](#examples)
* [Requirements](#requirements)
* [Installation](#installation)
* [Cross-compiling](#cross-compiling)
* [FAQ](#faq)
* [License](#license)


# Documentation
* [Docs](#docs)
* [Wiki](#wiki)


# Examples
```c
#include <stdio.h>
#include <github.com/computermouth/md5sum>

int main(){

	md5sum.md5res_t m = md5sum.hash("mystring");
	if (m.error)
		printf("error\n");
	else
		printf("%s\n", m.hash);

}

```
