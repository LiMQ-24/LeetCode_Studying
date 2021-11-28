/*
在一个按升序排列的链表，
给你这个链表的头节点 head，
请你删除所有重复的元素，
使每个元素 只出现一次。
返回同样按升序排列的结果链表。
示例 1：
输入：head = [1,1,2]
输出：[1,2]
示例 2：
输入：head = [1,1,2,3,3]
输出：[1,2,3]
*/
#include<stdio.h>
#include<stdlib.h>
typedef int ElementType;
typedef struct LNode* List;
struct LNode{
    ElementType Data;
    List Next;
};
List DeleteDuplicates(List head);
int main(int argc,char const*argv[])
{
    List head=NULL;
    List current=NULL;
    List prev=NULL;
    char ch='\0';
    while(ch!='\n'){
        current=(List)malloc(sizeof(struct LNode));
        if(head==NULL){
            head=current;
        }else{
            prev->Next=current;
        }
        current->Next=NULL;
        scanf("%d",&current->Data);
        ch=getchar();
        prev=current;
    }
    List retList=DeleteDuplicates(head);
return 0;
}

List DeleteDuplicates(List head)
{
    List current;
    List record=head;
    for(head;head!=NULL;head=head->Next){
        for(current=head->Next;current!=NULL;current=head->Next){
            if(head->Data!=current->Data){
                break;
            }else{
                List quick=head->Next;
                head->Data=head->Next->Data;
                head->Next=head->Next->Next;
                free(quick);
            }
        }
    }
    while(record!=NULL){
        printf("%d\n",record->Data);
        record=record->Next;
    }
return record;
}
