
int main(){
// float notas [4], soma =0, pesos [4] = {2, 3, 4, 1};

double n1,n2,n3,n4,media,media1,exame;
scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
media = (2*n1+3*n2+4*n3+1*n4)/10.0;
 printf("Media: %.1lf\n", media);

if (media >= 7.0) {
printf("Aluno aprovado.\n");
}
else if (media < 5.0){
printf("Aluno reprovado.\n");
}
else {
printf("Aluno em exame.\n");

scanf("%lf", &exame);
printf("Nota do exame: %.1lf\n", exame);

 media1 = (exame + media)/2.0;
if(media1 >=5.0){
    printf("Aluno aprovado.\n");
} else {
    printf("Aluno reprovado\n");
}
printf("Media final: %.1lf\n", media1);

}


    return 0;
}