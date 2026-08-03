#include <stdio.h>

int main() {
    float base, height, area;

    // युझरला इनपुट टाकायला सांगणे
    printf("Enter Base of Triangle: ");
    scanf("%f", &base); // युझरने टाकलेली व्हॅल्यू base मध्ये सेव्ह होईल

    printf("Enter Height of Triangle: ");
    scanf("%f", &height); // युझरने टाकलेली व्हॅल्यू height मध्ये सेव्ह होईल

    // क्षेत्रफळ काढणे
    area = 0.5 * base * height;

    // निकाल प्रिंट करणे
    printf("Area of Triangle = %.2f\n", area);

    return 0;
}
