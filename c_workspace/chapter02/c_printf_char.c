#include <stdio.h>
/**
 * vsc ����Ű
 * Ctrl + Alt + N : C ����
 * Shift + Alt + �� or �� : Line ����
 * Alt + �� or �� : Line �̵�
 * Ctrl + x : line ����
 * Ctrl + space : �ڵ� �ϼ�
*/

// '' : ����(character) 'A', 'B', '!'
// "" : ���ڿ�(string) "A", "ABC", "A!" ... �̰� ���� ��

// �� ����('')�� ����ϴ� ���
//  + Ű���� ��� �� �� ���
int main(void)
{
    /* code */
    printf("%c\n", 'A');
    printf("%S\n", "A");
    printf("%c�� %s�Դϴ�. \n", '1', "first");
    return 0;
}
