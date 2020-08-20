run: 函数的分文件编写.cpp swap.obj
	gcc 函数的分文件编写.cpp swap.obj -o run
swap.obj: swap.cpp
	gcc -c  swap.cpp -o swap.obj
clean: 
	rm swap.obj swap.exe