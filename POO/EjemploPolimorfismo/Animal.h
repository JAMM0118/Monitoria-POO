#ifndef ANIMAL_H
#define ANIMAL_H


class Animal
{
    public:

        Animal();
        virtual ~Animal();
        
        virtual void hacersonido() = 0; //metodo virtual puro
        virtual void hablar() = 0;
    
    protected:

    private:
};

#endif // ANIMAL_H
