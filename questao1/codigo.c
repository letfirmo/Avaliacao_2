int main(void){
   int impar, i, n;
   printf("Quantidade de impares: ");
   scanf("%d", &n);
   i = n;
   while (i >= 1){
    impar = 2*i-1;
    printf("%d\n", impar);
    i--;
   } 
   return 0;
}