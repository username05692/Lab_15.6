#include <stdio.h>
#include <limits.h> //���������� �������
#include <stdlib.h>

int main() {

    int n;// �������� ����� ��� ������ ������
    printf("Veit number :"); //����� ������
    scanf_s("%d", &n);

    // �������� �������� ���'�� ��� ������
    int* array = (int*)malloc(n * sizeof(int));

    printf("Vedit elementu masuvy:\n");//�������� �������� ������
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }
    // ���������� ������ � ���������� ��������� 1 ��������
    int min = array[0];
    int max = array[0];
    

    // ���������� ������ �� ���������
    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = (array[i]); // ����� ����������
        }
           
         if (array[i] > max) {
            max = (array [i]);  // ����� �������������  
        }
    }
    printf("Min: %d\n", min); // ����
    printf("Max: %d\n", max);
    // ��������� ������� ���'��
    free(array);

    return 0;
}