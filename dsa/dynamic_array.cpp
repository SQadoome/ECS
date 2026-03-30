
class DynamicArray {
  public:
    DynamicArray();
    
    void append(T item);
    void remove_at(unsigned long at_index);
    void* get_array_ptr();
    void erase(T item);
    void resize(unsigned long new_size);
    void get_at(unsigned long at_index);

  private:
    void shrink(unsigned long new_size);
    void expand(unsigned long new_size);
  
}



