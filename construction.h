struct Pepper {
    char name[256];
    int scoville;
};

void printsp(struct Pepper* p);
struct Pepper * new_pepper(char* n, int s);
void change_pepper(struct Pepper* p, char* n, int s);
