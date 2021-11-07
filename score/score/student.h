//student.h

typedef struct _Score {
	int math;
	int eng;
	double avg;
} Score;

typedef struct _Student {
	int number;
	char name[20];
	Score score;    //Score 자료형을 참조
} Student;
