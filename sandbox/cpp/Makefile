CXXFLAGS = -Wall -ggdb
TARGETS = 1 2 3 4 5 6 7 8 9 10

default: $(TARGETS)

tests: default
	echo -e '6 a\n1 This\n2 is\n9 test' | ./1
	echo -e '1001-40\n1002-50\n1003-60\n1002-80\n1005-35\n1005-55\n1007-68\n1009-99\n1009-10\n1004-89' | ./2
	echo -e '3\nIt is a simple problem\nRaspberry is sweet\ntest' | ./3
	./4
	echo -e 'Tennis\nPolo\nApple\nBasketball\nGolf\nSoccer' | ./5
	echo -e 'waas\ngaag\nhaaha\nABBA' | ./6
	echo -e '2\n4\n45 56\n67 88 90 1' | ./7
	for n in 1 2 3 4 678 5 0 78; do echo $$n | ./8; done
	./9
	./10

clean:
	rm -f $(TARGETS)

