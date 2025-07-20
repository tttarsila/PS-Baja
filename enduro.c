int main() {
float susp = 100.0;
float combustivel = 100.0;
float motor = 80.0;
int volta;

for (volta = 1; volta <= 100; volta++){
    susp -= 2.0;
    combustivel -= 1.5;
    motor += 1.0;

    if ((volta/10)*10 == volta) {
        susp -= 3.0;
        motor += 5.0;
    }
    if (susp < 20.0) {
        printf("ALERTA: Suspensão está abaixo de 20%%!");
    }
    if (motor > 115.0) {
        printf("ALERTA: Temperatura do motor está acima de 115°C!");

    }
    if (susp <= 0.0) {
        printf("FALHA: Suspensão chegou a zero.");
        break;
    }
    if (combustivel <= 0.0) {
        printf("FALHA: Combustível acabou!");
        break;
    }
    if((volta/20) * 20 == volta) {
        printf("\n--- RELATÓRIO APÓS %d VOLTAS ---\n", volta);
        printf("suspensão: %.2f%%\n", susp);
        printf("combustível: %.2f%%\n", combustivel);
        printf("temperatura do motor: %.2f°C\n", motor);
    }
}
printf("\n--- RESULTADO FINAL ---\n");
printf("voltas completas: %d\n", volta - 1);
printf("suspensão: %.2f%%\n", susp);
printf("combustível: %.2f%%\n", combustivel);
printf("temperatura do motor: %.2f°C\n", motor);
 return 0;
}