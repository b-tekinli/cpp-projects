#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *s;
};

void create(stack *s, int size)
{
    s->size = size;
    s->top = -1;
    s->s = new int[size];
}

void show(stack *s)
{
    for (int i = s->top; i >= 0; i--)
    {
        cout << "Eleman: " << s->s[i] << "\n";
    }
    cout << "\n";
}

void push(stack *s, int x)
{
    if (s->top != s->size - 1)
    {
        s->top++;
        s->s[s->top] = x;
    }
    else
    {
        cout << "Stack dolu! \n";
    }
}

int pop(stack *s)
{
    int x = -1;

    if (s->top != -1)
    {
        x = s->s[s->top];
        s->top--;
    }
    else
    {
        cout << "Stack boş! \n";
        return (-1);
    }
}

int main()
{
    stack s1;
    create(&s1, 5);

    push(&s1, 10);
    push(&s1, 15);
    push(&s1, 20);

    show(&s1);

    pop(&s1);
    show(&s1);

    push(&s1, 20);
    push(&s1, 25);
    push(&s1, 30);
    show(&s1);

    pop(&s1);
    pop(&s1);
    pop(&s1);
    pop(&s1);
    pop(&s1);
    pop(&s1);

    show(&s1);

    return (0);
}
