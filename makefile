outfile: header.o main.o stud_count.o stud_del.o stud_delete_all.o stud_mod.o stud_rev.o stud_save.o stud_show.o stud_sort.o stud_add.o
	cc header.c main.c stud_count.c stud_del.c stud_delete_all.c stud_mod.c stud_rev.c stud_save.c stud_show.c stud_sort.c stud_add.c -o outfile


header.o:header.c
	cc -c header.c
main.o:main.c
	cc -c main.c
stud_add.o:stud_add.c
	cc -c stud_add.c
stud_count.o:stud_count.c 
	cc -c stud_count.c 
stud_del.o:stud_del.c
	cc -c stud_del.c
stud_delete_all.o:stud_delete_all.c
	cc -c stud_delete_all.c
stud_mod.o:stud_mod.c 
	cc -c stud_mod.c 
stud_rev.o:stud_rev.c
	cc -c stud_rev.c
stud_save.o:stud_save.c
	cc -c stud_save.c 
stud_show.o:stud_show.c
	 cc -c stud_show.c 
stud_sort.o:stud_sort.c
	cc -c stud_sort.c
