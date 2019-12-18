struct sembuf {
    unsigned short sem_num;
    short          semp_op;
    short          sem_flg;   
};


struct sembuf s;
s.sem_num = 3;
s.sem_op = -1;
s.sem_flg = SEM_UNDO;
