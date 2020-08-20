g++ -c  workerManager.cpp -o work1.obj
g++ -c  employee.cpp -o work2.obj
g++ -c  manager.cpp -o work3.obj
g++ -c  boss.cpp -o work4.obj
g++ 职工管理系统.cpp work1.obj work2.obj work3.obj work4.obj -o run
run.exe