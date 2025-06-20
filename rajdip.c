int main() 
{
    float num;
    printf("Enter a number: ");
    scanf("%f",&num);

    if (num > 0 && (int)num == num) {
        printf("%f is a natural number.\n", num);
    }
    else 
        printf("%f is not a natural number.\n", num);

    return 0;
}
