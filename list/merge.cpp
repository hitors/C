/*
���ܣ����������Ӵ�С��˳���ŷŵ�����ϲ���һ������
*/
# include <stdio.h>

void merge(plist a,plist b;plist c)
{
    
	while(a&&b)
	{
		if(a->data<=b->data)
		{
			c->next = a;//��a�е�һ�������������С����ͷ���ָ��a
			c = c->next;//�м����
			a = a->next;//ָ����һ���������Ƚ�
		}
		else 
		{
		    c->next = b;
			c = c->next;
			b = b->next;
		}
    }

	c->next = pa?pa:pb;//��ʣ���δ�ȽϵĽ�����ȥ
	free(a,b);
}
