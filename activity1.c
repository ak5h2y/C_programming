#include <stdio.h>
int main() {
    int height, weight, enginePower, resistance;
    int howMany = 0;
    int power = 0;
    int numberRead = 0;
    scanf("%d",&howMany);
    for(int i = 0; i < howMany; i++){
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        power = power + ((enginePower + resistance) * (weight - height));
    }
    printf("%d\n",power);
  return 0;
}
