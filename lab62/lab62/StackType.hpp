#ifndef STACKTYPE_HPP
#define STACKTYPE_HPP

template <typename value_t>
class StackType
{
  public:
    StackType(){};
    void Push(value_t item)
    {
        element* pushed = new element;
        pushed->value = &item;
        if (top)
        {
            pushed->next = top;
        }
        top = pushed;
    };
    value_t Pop()
    {
        //preserve the deletables!
        value_t popped = *top->value;
        element *deletThis = top;
        //save the upper class!
        top = top->next;
        //cull the weak!
        delete deletThis;
        return popped;
    };
    value_t getTop() const
    {
        return &(top->value);
    };

  private:
    struct element
    {
        value_t *value;
        element *next = nullptr;
    };
    element *top = nullptr;
};
#endif