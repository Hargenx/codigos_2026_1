switch (opcao) {
    case 1:
        printf("Cadastrar.\n");
        break;

    case 2:
        printf("Consultar.\n");
        break;

    case 3:
        printf("Sair.\n");
        break;

    default:
        printf("Opção inválida.\n");
}

if (opcao == 1) {
    printf("Cadastrar.\n");
} else if (opcao == 2) {
    printf("Consultar.\n");
} else if (opcao == 3) {
    printf("Sair.\n");
} else {
    printf("Opção inválida.\n");
}