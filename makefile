error1.png : error.cpp  run.cpp
	c++ segundorden.cpp
	./a.out>por.txt
	python error.py

error2.png: error2.py run_segundorden.cpp
	c++ primerorden.cpp
	./a.out>por2.txt
	python error2.py


