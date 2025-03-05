#include <stdio.h>

int main() {
    int angle;
    scanf("%d", &angle);

    if (angle < 0) {
        printf("Invalid");
        return 0;
    }

    angle = angle % 360; // Normalize angle to 0-359 degrees

    if (angle == 360 || angle == 0) printf("Full Rotation"); // Fix: Handle 0 separately
    else if (angle < 90) printf("Acute Angle");
    else if (angle == 90) printf("Right Angle");
    else if (angle < 180) printf("Obtuse Angle");
    else if (angle == 180) printf("Straight Angle");
    else printf("Reflex Angle");

    return 0;
}

