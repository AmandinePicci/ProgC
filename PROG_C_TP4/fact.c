#include <stdio.h>
// contient les codes de la fonction factorielle


int factorielle (int num) {
if (num == 0) {
	return 1;

}
else {
	return (num * factorielle (num -1));

}
}
