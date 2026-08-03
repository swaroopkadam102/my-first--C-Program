#include <stdio.h>

int main() {
    float base = 10.0;    // त्रिकोणाचा पाया
    float height = 5.0;   // त्रिकोणाची उंची
    float area;

    // क्षेत्रफळ काढण्याचे सूत्र
    area = 0.5 * base * height;

    // आउटपुट प्रिंट करणे
    printf("Base = %.2f\n", base);
    printf("Height = %.2f\n", height);
    printf("Area of Triangle = %.2f\n", area);

    return 0;
}
