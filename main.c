#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
    int nums[N] = {16, 25, 9, 90, 23};
    //���ѭ����������  ���鳤��-1��
    int i, j;
    int temp;//��ʱ����
    for(i = 0; i < N - 1; i++)
    {
        //�ڲ���Ƹ��ֱȽϴ���   ÿһ�ֱȽϴ�������һ��-1��
        for(j = 0; j< N - i - 1; j++)
        {
            if(nums[j] < nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    printf("������Ϊ��\n");
    for(i = 0; i < N; i++)
    {
        printf("%d\t", nums[i]);
    }
    return 0;
}
