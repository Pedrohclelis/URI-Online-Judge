 int main() {
 
    int start, end, tempo;
    scanf("%i %i", &start, &end);
    
    if(start>end){
        tempo = 24 - start + end;
    } else if(start<end){
        tempo = end - start;
    } else{
        tempo = 24;
    }
    
    printf("O JOGO DUROU %i HORA(S)\n", tempo);
    return 0;
}
